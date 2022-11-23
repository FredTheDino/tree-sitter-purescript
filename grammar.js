// Helpful:
// https://github.com/purescript/purescript/blob/master/src/Language/PureScript/CST/Parser.y 
// https://github.com/tree-sitter/tree-sitter-haskell/
// https://tree-sitter.github.io/tree-sitter/creating-parsers#the-grammar-dsl
//
// TODO
//  - More expressions
//  - Imports
//  - Patterns
//  - if
//  - case
//  - do
//  - ado
//  - let in
//  - where
//  - newtypes
//  - class
//  - derive
//  - instance
//  - handle indent
//  - operators
//  - more...

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


const sep_by = (sep, ...thing) => seq(seq(...thing), repeats(sep, ...thing))
const optionals = (...thing) => optional(seq(...thing))
const repeats = (...thing) => repeat(seq(...thing))

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
    $.cont,
  ],

  rules : {
    module : $ => seq(
      "module",
      field("name", sep_by(".", $.properName)),
      "where",
      $.cont,
      repeat($._decl),
    ),

    //
    _decl : $ => choice(
      $.dataDecl,
      $.typeDecl,
      $.function_definition,
    ),

    data : $ => seq(
      "data",
      field("name", UPPER),
      field("params", repeat($.type_variable)),
      "=",
      field("body", sep_by("|", $.properName, $._type)),
    ),

    dataDecl : $ => seq(
      "data",
      field("name", $.properName),
      manyOrEmpty($.typeVarBinding),
      "=",
      field("body", sep($.dataCtor, "|")),
      $.cont,
    ),
    dataCtor : $ => seq(
      field("name", $.properName),
      manyOrEmpty($.typeAtom),
    ),

    typeDecl : $ => seq(
      "type",
      field("name", $.properName),
      manyOrEmpty($.typeVarBinding),
      "=",
      field("body", $._type),
    ),

    type_variable : $ => LOWER,

    _type : $ => choice(
      $.properName,
      $.typeVarBinding,
    ),

    function_definition : $ => seq(
      $._ident,
      repeat($._argument),
      "=",
      $.expression,
    ),

    _ident : $ => LOWER,

    _pattern : $ => choice(
      seq($._ident, "@", $._pattern),
    ),

    _argument : $ => choice(
      $._pattern,
      $._ident,
    ),

    expression : $ => choice(
      $._ident,
      LIT_INT,
      LIT_NUMBER,
      seq("{", "}"),
      seq("(", repeats(LOWER, optionals(":", $.expression)), ")"),
      seq("[", optional(sep_by(",", $.expression)), "]"),
      seq("{", repeats(LOWER, optionals(":", $.expression)), "}"),
      // This rule is quite generous, possibly too generous.
      seq($.expression, "{", repeats(LOWER, "=", $.expression), "}"),
    ),


    properName : $ => choice(UPPER),

    typeVarBinding : $ => choice(
      $._ident,
      // seq("(", $._ident, "::", $.type, ")"),
    ),


    typeAtom : $ => choice(
      "_",
      $._ident,
      $._qualProperName,
      $._qualSymbol,
      LIT_STRING,
      LIT_INT,
      // $.hole,
      // '(->)', // Not sure this is right
      // seq("{", optional($.row), "}"),
      // seq("(", optional($.row), ")"),
      // seq("(", $.type1, ")"),
      // seq("(", $.typeKindedAtom, "::", $.type, ")"),
    ),

    _qualProperName : $ => prec(-1, choice(UPPER, QUAL_UPPER)),
    _qualSymbol : $ => choice(SYMBOL, QUAL_SYMBOL, '(..)'),
    _symbol : $ => choice(SYMBOL, '(..)'),
  }
});
