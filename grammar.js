// Helpful:
// https://github.com/purescript/purescript/blob/master/src/Language/PureScript/CST/Parser.y 
// https://github.com/tree-sitter/tree-sitter-haskell/
// https://tree-sitter.github.io/tree-sitter/creating-parsers#the-grammar-dsl
//
// Stolen from inside the purescript compiler

// What is 'role'?

const LOWER              = /[a-z][A-Za-z0-9_]*/
const QUAL_LOWER         = /([A-Z][A-Za-z0-9_]\.)+[a-z][A-Za-z0-9_]*/
const UPPER              = /[A-Z][A-Za-z0-9_]*/
const QUAL_UPPER         = /([A-Z][A-Za-z0-9_]\.)+[A-Z][A-Za-z0-9_]*/
const SYMBOL             = /[a-z]+/ // No idea what to put here, I'm guessing its something like this
const QUAL_SYMBOL        = /([A-Z][A-Za-z0-9_]\.)+[a-z]+/
const OPERATOR           = /[<>?!#@£$+\-*\/]/ // No idea what to put here, I'm guessing its something like this
const QUAL_OPERATOR      = /([A-Z][A-Za-z0-9_]\.)+[<>?!#@£$+\-*\/]+/
const LIT_HOLE           = /_[A-Za-z0-9_]+/
const LIT_CHAR           = /'.'/
const LIT_STRING         = /".*"/
const LIT_RAW_STRING     = /""".*"""/ // This is wrong
const LIT_INT            = /[0-9]+/
const LIT_NUMBER         = /[0-9]+\.[0-9]*/ // This is wrong


const many = (...things) => repeat1(seq(...things))
const manySep = (thing, sep) => seq(thing, repeat(seq(sep, thing)))
const manySepOrEmpty = (thing, sep) => optional(manySep(thing, sep))
const manyOrEmpty = (...things) => optional(many(...things))
const sep = (a, s) => seq(a, repeat(seq(s, a)))
const delim = (b, t, s, d) => seq(b, optional(sep(t, s)), d)

module.exports = grammar({
  name : "purescript",

  externals: $ => [
    $.begin,
    $.end,
    $.sep,
  ],

  rules : {
    module : $ => seq($.moduleHeader, $.moduleBody),

    moduleHeader : $ => seq("module", $.moduleName, optional($.exports), "where", optional(seq($.begin, sep($.importDecl, $.sep), $.end))),

    moduleBody : $ => manySep($.moduleDecl, $.end),

    moduleDecl : $ => choice($.importDecl, sep($.decl, "else", optional($.sep))),

    exports : $ => seq("(", sep($.export_, ","), ")"),

    export_ : $ => choice(
      $.ident,
      $.symbol,
      seq($.properName, optional($.dataMembers)),
      seq("type", $.symbol),
      seq("class", $.properName),
      seq("module", $.moduleName),
    ),

    dataMembers : $ => choice(
      "(..)",
      seq("(", ")"),
      seq("(", sep($.properName, ","), ")"),
    ),

    importDecl : $ => seq("import", $.moduleName, optional($.imports), optional(seq("as", $.moduleName))),

    imports : $ => seq(optional("hiding"), "(", sep($.import_, ","), ")"),

    import_ : $ => choice(
      $.ident,
      $.symbol,
      seq($.properName, optional($.dataMembers)),
      seq("type", $.symbol),
      seq("classs", $.properName),
    ),

    decl : $ => choice(
      seq($.dataHead, optional(seq("=", sep($.dataCtor, "|")))),
      seq($.typeHead, "=", $.type),
      seq($.newtypeHead, "=", $.properName, $.type),
      seq($.classHead, optional(seq(
        "where", $.begin, manySep($.classMember, $.sep), $.end))
      ),
      seq($.instHead, optional(seq(
        "where", $.begin, manySep($.instBinding, $.sep), $.end))
      ),
      //
      seq("data", $.properName, "::", $.type),
      seq("newtype", $.properName, "::", $.type),
      seq("type", $.properName, "::", $.type),
      // 
      seq("derive", $.instHead),
      seq("derive", "newtype", $.instHead),
      seq($.ident, "::", $.type),
      seq($.ident, manyOrEmpty($.binderAtom), $.guardedDecl),
      $.fixity,
      seq("foreign", "import", $.ident, "::", $.type),
      seq("foreign", "import", "data", $.properName, "::", $.type),
      seq("type", "role", $.properName, many($.role)),
    ),

    dataHead : $ => seq("data", $.properName, manyOrEmpty($.typeVarBinding)), 
    typeHead : $ => seq("type", $.properName, manyOrEmpty($.typeVarBinding)), 
    newtypeHead : $ => seq("newtype", $.properName, manyOrEmpty($.typeVarBinding)), 

    dataCtor : $ => seq($.properName, manyOrEmpty($.typeAtom)),

    classHead : $ => choice(
      seq("class", $.classNameAndFundeps),
      seq("class", $.constraints, "<=", $.classNameAndFundeps),
    ),

    classNameAndFundeps  : $ => seq(
      $.properName, manyOrEmpty($.typeVarBinding), optional($.fundeps)
    ),

    fundeps : $ => seq("|", sep($.fundep, ",")),
    fundep : $ => choice(
      seq("->", many($.ident)),
      seq(many($.ident), "->", many($.ident)),
    ),

    classMember : $ => seq($.ident, "::", $.type),

    instHead : $ => seq("instance", optional(seq($.ident, "::")), optional(seq($.constraints, "=>")), $.qualProperName, manyOrEmpty($.typeAtom)),

    constraints : $ => prec(-1, choice(
      $.constraint,
      seq("(", sep($.constraint, ","), ")")
    )),

    constraint : $ => choice(
      seq($.qualProperName, manyOrEmpty($.typeAtom)),
      seq("(", $.constraint, ")"),
    ),

    instBinding : $ => choice(
      seq($.ident, "::", $.type),
      seq($.ident, manyOrEmpty($.binderAtom), $.guardedDecl),
    ),

    fixity : $ => seq(
      $.infix, $.int, choice($.qualIdent,
                             $.qualProperName,
                             seq("type", $.qualProperName))
    ),

    infix : $ => choice("infix", "infixl", "infixr"),

    role : $ => choice("nominal", "representational", "phantom"),

    // Expressions 
    expr : $ => prec.left(0, seq($.expr1, optional(seq("::", $.type)))),

    expr1 : $ => choice(
      $.expr2,
      seq($.expr1, $.qualOp, $.expr2)
    ),

    expr2 : $ => prec(1, choice(
      $.expr3,
      seq($.expr2, "`", $.exprBacktick, "`", $.expr3)
    )),
    
    exprBacktick : $ => choice(
      $.expr3,
      seq($.exprBacktick, $.qualOp, $.expr3),
    ),

    expr3 : $ => prec(2, choice(
      $.expr4,
      seq("-", $.expr3),
    )),

    expr4 : $ => prec(3, choice(
      $.expr5,
      seq($.expr4, $.expr5),
    )),

    expr5 : $ => choice(
      $.expr6,
      seq("if", $.expr, "then", $.expr, "else", $.expr),
      $.doBlock,
      $.adoBlock,
      seq("\\", many($.binderAtom), "->", $.expr),
      seq("let", $.begin, manySep($.letBinding, $.sep), $.end, "in", $.expr),
      seq("case", sep($.expr, ","), "of", $.begin, manySep($.caseBranch, $.sep), $.end),
      // There are more case variants here, but they're deprecated, so not gonna bother right now.
    ),

    expr6 : $ => prec.left(1, seq($.expr7, optional(seq("{", optional(sep($.recordUpdateOrLabel, ",")), "}")))),

    expr7 : $ => seq($.exprAtom, repeat(seq(".", $.exprAtom))),
    
    exprAtom : $ => choice(
      "_",
      $.hole,
      $.qualIdent,
      $.qualProperName,
      $.qualSymbol,
      $.boolean,
      $.char,
      $.string,
      $.number,
      delim("[", $.expr, ",", "]"),
      delim("{", $.recordLabel, ",", "}"),
      seq("(", $.expr, ")"),
    ),

    exprWhere : $ => choice(
      $.expr,
      seq($.expr, "where", $.begin, manySep($.letBinding, $.sep), $.end),
    ),

    recordLabel : $ => seq(
      $.label, choice(
          seq(),
          seq("=", $.expr),
          seq(":", $.expr),
      )
    ),
    
    recordUpdateOrLabel : $ => seq(
      $.label, choice(
          seq(":", $.expr),
          seq(),
          seq("=", $.expr),
          seq("{", sep($.recordUpdate, ","), "}"),
      )
    ),

    recordUpdate : $ => choice(
      seq($.label, "=", $.expr),
      seq($.label, "{", sep($.recordUpdate, ","), "}"),
    ),

    letBinding : $ => choice(
      seq($.ident, "::", $.type),
      seq($.ident, optional(many($.binderAtom)), $.guardedDecl),
      seq($.binder1, "=", $.exprWhere),
    ),

    caseBranch : $ => seq(sep($.binder1, ","), $.guardedCase),

    guardedDecl : $ => choice(
      seq("=", $.exprWhere),
      many($.guardedDeclExpr),
    ),
    guardedDeclExpr : $ => seq($.guard, "=", $.exprWhere),

    guardedCase : $ => choice(
      seq("->", $.exprWhere),
      many($.guardedCaseExpr),
    ),
    guardedCaseExpr : $ => seq($.guard, "->", $.exprWhere),

    // = Comment from `grammar.y` =
    // Do/Ado statements and pattern guards require unbounded lookahead due to many
    // conflicts between `binder` and `expr` syntax. For example `Foo a b c` can
    // either be a constructor `binder` or several `expr` applications, and we won't
    // know until we see a `<-` or layout separator.
    //
    // One way to resolve this would be to parse a `binder` as an `expr` and then
    // reassociate it after the fact. However this means we can't use the `binder`
    // productions to parse it, so we'd have to maintain an ad-hoc handwritten
    // parser which is very difficult to audit.
    //
    // As an alternative we introduce some backtracking. Using %partial parsers and
    // monadic reductions, we can invoke productions manually and use the
    // backtracking `tryPrefix` combinator. Binders are generally very short in
    // comparison to expressions, so the cost is modest.
    //
    // Note from me:
    // It sounds like it might be beneficial to ignore the finer semantics here and
    // make binder -> expressions for this parser.
    //
    // I've opted to use the simplified syntax here that they suggest in `grammar.y`.
    // But this part will definitely require cleaning.
    doBlock : $ => seq("do", $.begin, manySep($.doStatement, $.sep), $.end),
    adoBlock : $ => seq("ado", $.begin, manySep($.doStatement, $.sep), $.end),

    doStatement : $ => choice(
      seq("let", $.begin, manySep($.letBinding, $.sep), $.end),
      $.expr,
      seq($.binder, "<-", $.expr),
    ),

    guard : $ => seq("|", sep($.patternGuard, ",")),
    patternGuard : $ => choice(
      $.expr1,
      seq($.binder, "<-", $.expr),
    ),

    binder : $ => prec(-1, seq($.binder1, optional(seq("::", $.type)))),

    binder1 : $ => prec(-1, choice($.binder2, seq($.binder1, $.qualOp, $.binder2))),

    binder2 : $ => prec(-1, choice(many($.binderAtom), seq("-", $.number))),

    binderAtom : $ => prec(-1, choice(
      "_",
      $.ident,
      seq($.ident, "@", $.binderAtom),
      $.qualProperName,
      $.boolean,
      $.char,
      $.string,
      $.number,
      delim("[", $.binder, ",", "]"),
      delim("{", $.recordBinder, ",", "}"),
      seq("(", $.binder, ")"),
    )),
    
    recordBinder : $ => prec(-1, seq(
      $.label, choice(
          seq(),
          // seq("=", $.binder), // Error
          seq(":", $.binder),
      )
    )),

    // -------------------------------------------------------

    // Types
    // Not sure if this works
    type : $ => prec.right(0, seq($.type1, optional(seq("::", $.type)))),
    type1 : $ => prec.right(0, seq($.type2, optional(seq("forall", many($.typeVarBinding), ".", $.type1)))),
    type2 : $ => prec.right(0, seq($.type3, optional(choice( seq($.type3, '->', $.type1)
                                                           , seq($.type3, '=>', $.type1)
                                                           )))),
    type3 : $ => prec.right(0, choice($.type4, seq($.type3, $.qualOp, $.type4))),
    type4 : $ => prec.right(0, choice($.type5, seq("-", $.int))),
    type5 : $ => prec.right(2, repeat1($.typeAtom)),

    typeAtom : $ => choice(
      "_",
      $.ident,
      $.qualProperName,
      $.qualSymbol,
      $.string,
      $.int,
      $.hole,
      '(->)', // Not sure this is right
      seq("{", optional($.row), "}"),
      seq("(", optional($.row), ")"),
      seq("(", $.type1, ")"),
      seq("(", $.typeKindedAtom, "::", $.type, ")"),
    ),

    // = Comment from `grammar.y` =
    // Due to a conflict between row syntax and kinded type syntax, we require
    // kinded type variables to be wrapped in parens. Thus `(a :: Foo)` is always a
    // row, and to annotate `a` with kind `Foo`, one must use `((a) :: Foo)`.
    typeKindedAtom : $ => choice(
      "_",
      $.qualProperName,
      $.qualSymbol,
      $.int,
      $.hole,
      '(->)', // Not sure this is right
      seq("{", optional($.row), "}"),
      seq("(", optional($.row), ")"),
      seq("(", $.type1, ")"),
    ),

    row : $ => choice(
      seq("|", $.type),
      seq(sep($.rowLabel, ","), optional(seq("|", $.type))),
    ),

    rowLabel : $ => seq($.label, "::", $.type),

    typeVarBinding : $ => choice(
      $.ident,
      seq("(", $.ident, "::", $.type, ")"),
    ),

    forall : $ => choice(
      "forall", // TODO: There's a Unicode variant here, not sure it's gonna work
    ),

    // General things, have to be lower down to aid the parser
    moduleName : $ => choice(UPPER, QUAL_UPPER),

    qualProperName : $ => prec(-1, choice(UPPER, QUAL_UPPER)),
    properName : $ => choice(UPPER),

    qualIdent : $ => prec(-1, choice(LOWER, QUAL_LOWER, 'as', 'hiding', 'role', 'nominal', 'representational', 'phantom')),
    ident : $ => choice(LOWER, 'as', 'hiding', 'role', 'nominal', 'representational', 'phantom'),

    qualOp : $ => prec(-1, choice(OPERATOR, QUAL_OPERATOR, '<=', '-', ':')),
    op : $ => choice(OPERATOR, '<=', '-', ':'),

    qualSymbol : $ => choice(SYMBOL, QUAL_SYMBOL, '(..)'),
    symbol : $ => choice(SYMBOL, '(..)'),

    label : $ => choice( LOWER 
                       , LIT_STRING 
                       , LIT_RAW_STRING 
                       , 'ado' 
                       , 'as' 
                       , 'case' 
                       , 'class' 
                       , 'data' 
                       , 'derive' 
                       , 'do' 
                       , 'else' 
                       , 'false' 
                       , 'forall' 
                       , 'foreign' 
                       , 'hiding' 
                       , 'import' 
                       , 'if' 
                       , 'in' 
                       , 'infix' 
                       , 'infixl' 
                       , 'infixr' 
                       , 'instance' 
                       , 'let' 
                       , 'module' 
                       , 'newtype' 
                       , 'nominal' 
                       , 'of' 
                       , 'phantom' 
                       , 'representational' 
                       , 'role' 
                       , 'then' 
                       , 'true' 
                       , 'type' 
                       , 'where'
                       ),

    hole : $ => LIT_HOLE,

    string : $ => choice(LIT_STRING, LIT_RAW_STRING),

    char : $ => LIT_CHAR,

    number : $ => choice(LIT_NUMBER, LIT_INT),

    int : $ => LIT_INT,

    boolean : $ => choice("true", "false"),
  
  }
});
