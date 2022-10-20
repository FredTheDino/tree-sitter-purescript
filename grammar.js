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

const upper = /[A-Z][A-Za-z0-9_]*/
const lower = /[a-z][A-Za-z0-9_]*/
const number = /[0-9]+/

const record_field = lower

const sep_by = (sep, ...thing) => seq(seq(...thing), repeats(sep, ...thing))
const optionals = (...thing) => optional(seq(...thing))
const repeats = (...thing) => repeat(seq(...thing))

module.exports = grammar({
  name : "purescript",

  rules : {
    module : $ => seq(
      "module",
      field("name", $.module_name),
      "where",
      repeat($._top_definition),
    ),

    module_name : $ => sep_by(".", upper),

    //
    _top_definition : $ => choice(
      $.data,
      $.function_definition,
    ),

    data : $ => seq(
      "data",
      field("name", upper),
      field("arguments", repeat($.type_variable)),
      "=",
      field("body", sep_by("|", upper, $._type)),
    ),

    type_variable : $ => lower,

    _type : $ => choice(
      lower,
      upper,
    ),

    function_definition : $ => seq(
      field("name", $.identifier),
      field("arguments", repeat($._argument)),
      "=",
      field("body", $.expression),
    ),

    identifier : $ => lower,

    _pattern : $ => choice(
      seq($.identifier, "@", $._pattern),
    ),

    _argument : $ => choice(
      $._pattern,
      $.identifier,
    ),

    expression : $ => choice(
      lower,
      number,
      seq("{", "}"),
      seq("(", repeats(record_field, optionals(":", $.expression)), ")"),
      seq("[", optional(sep_by(",", $.expression)), "]"),
      seq("{", repeats(record_field, optionals(":", $.expression)), "}"),
      // This rule is quite generous, possibly too generous.
      seq($.expression, "{", repeats(record_field, "=", $.expression), "}"),
    ),
  }
});
