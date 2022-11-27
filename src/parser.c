#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_module = 1,
  anon_sym_DOT = 2,
  anon_sym_where = 3,
  anon_sym_data = 4,
  aux_sym_data_token1 = 5,
  anon_sym_EQ = 6,
  anon_sym_PIPE = 7,
  anon_sym_type = 8,
  anon_sym_newtype = 9,
  anon_sym_class = 10,
  anon_sym_LT_EQ = 11,
  anon_sym_COLON_COLON = 12,
  anon_sym_COMMA = 13,
  anon_sym_DASH_GT = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  aux_sym_type_variable_token1 = 17,
  anon_sym_AT = 18,
  aux_sym_expression_token1 = 19,
  aux_sym_expression_token2 = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_COLON = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym__ = 26,
  aux_sym_typeAtom_token1 = 27,
  aux_sym__qualProperName_token1 = 28,
  aux_sym__qualSymbol_token1 = 29,
  aux_sym__qualSymbol_token2 = 30,
  anon_sym_LPAREN_DOT_DOT_RPAREN = 31,
  sym__begin = 32,
  sym__end = 33,
  sym__cont = 34,
  sym_module = 35,
  sym__decl = 36,
  sym_dataDecl = 37,
  sym_dataCtor = 38,
  sym_typeDecl = 39,
  sym_newtypeDecl = 40,
  sym_classDecl = 41,
  sym__constraints = 42,
  sym_constraint = 43,
  sym__type = 44,
  sym_function_definition = 45,
  sym__ident = 46,
  sym__pattern = 47,
  sym__argument = 48,
  sym_expression = 49,
  sym_properName = 50,
  sym_typeVarBinding = 51,
  sym_typeAtom = 52,
  sym__qualProperName = 53,
  sym__qualSymbol = 54,
  aux_sym_module_repeat1 = 55,
  aux_sym_module_repeat2 = 56,
  aux_sym_dataDecl_repeat1 = 57,
  aux_sym_dataDecl_repeat2 = 58,
  aux_sym_dataCtor_repeat1 = 59,
  aux_sym__constraints_repeat1 = 60,
  aux_sym_function_definition_repeat1 = 61,
  aux_sym_expression_repeat1 = 62,
  aux_sym_expression_repeat2 = 63,
  aux_sym_expression_repeat3 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_DOT] = ".",
  [anon_sym_where] = "where",
  [anon_sym_data] = "data",
  [aux_sym_data_token1] = "data_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_type] = "type",
  [anon_sym_newtype] = "newtype",
  [anon_sym_class] = "class",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_type_variable_token1] = "type_variable_token1",
  [anon_sym_AT] = "@",
  [aux_sym_expression_token1] = "expression_token1",
  [aux_sym_expression_token2] = "expression_token2",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym__] = "_",
  [aux_sym_typeAtom_token1] = "typeAtom_token1",
  [aux_sym__qualProperName_token1] = "_qualProperName_token1",
  [aux_sym__qualSymbol_token1] = "_qualSymbol_token1",
  [aux_sym__qualSymbol_token2] = "_qualSymbol_token2",
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = "(..)",
  [sym__begin] = "_begin",
  [sym__end] = "_end",
  [sym__cont] = "_cont",
  [sym_module] = "module",
  [sym__decl] = "_decl",
  [sym_dataDecl] = "dataDecl",
  [sym_dataCtor] = "dataCtor",
  [sym_typeDecl] = "typeDecl",
  [sym_newtypeDecl] = "newtypeDecl",
  [sym_classDecl] = "classDecl",
  [sym__constraints] = "_constraints",
  [sym_constraint] = "constraint",
  [sym__type] = "_type",
  [sym_function_definition] = "function_definition",
  [sym__ident] = "_ident",
  [sym__pattern] = "_pattern",
  [sym__argument] = "_argument",
  [sym_expression] = "expression",
  [sym_properName] = "properName",
  [sym_typeVarBinding] = "typeVarBinding",
  [sym_typeAtom] = "typeAtom",
  [sym__qualProperName] = "_qualProperName",
  [sym__qualSymbol] = "_qualSymbol",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_module_repeat2] = "module_repeat2",
  [aux_sym_dataDecl_repeat1] = "dataDecl_repeat1",
  [aux_sym_dataDecl_repeat2] = "dataDecl_repeat2",
  [aux_sym_dataCtor_repeat1] = "dataCtor_repeat1",
  [aux_sym__constraints_repeat1] = "_constraints_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_expression_repeat2] = "expression_repeat2",
  [aux_sym_expression_repeat3] = "expression_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_data] = anon_sym_data,
  [aux_sym_data_token1] = aux_sym_data_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_newtype] = anon_sym_newtype,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_type_variable_token1] = aux_sym_type_variable_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [aux_sym_expression_token2] = aux_sym_expression_token2,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym__] = anon_sym__,
  [aux_sym_typeAtom_token1] = aux_sym_typeAtom_token1,
  [aux_sym__qualProperName_token1] = aux_sym__qualProperName_token1,
  [aux_sym__qualSymbol_token1] = aux_sym__qualSymbol_token1,
  [aux_sym__qualSymbol_token2] = aux_sym__qualSymbol_token2,
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = anon_sym_LPAREN_DOT_DOT_RPAREN,
  [sym__begin] = sym__begin,
  [sym__end] = sym__end,
  [sym__cont] = sym__cont,
  [sym_module] = sym_module,
  [sym__decl] = sym__decl,
  [sym_dataDecl] = sym_dataDecl,
  [sym_dataCtor] = sym_dataCtor,
  [sym_typeDecl] = sym_typeDecl,
  [sym_newtypeDecl] = sym_newtypeDecl,
  [sym_classDecl] = sym_classDecl,
  [sym__constraints] = sym__constraints,
  [sym_constraint] = sym_constraint,
  [sym__type] = sym__type,
  [sym_function_definition] = sym_function_definition,
  [sym__ident] = sym__ident,
  [sym__pattern] = sym__pattern,
  [sym__argument] = sym__argument,
  [sym_expression] = sym_expression,
  [sym_properName] = sym_properName,
  [sym_typeVarBinding] = sym_typeVarBinding,
  [sym_typeAtom] = sym_typeAtom,
  [sym__qualProperName] = sym__qualProperName,
  [sym__qualSymbol] = sym__qualSymbol,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_module_repeat2] = aux_sym_module_repeat2,
  [aux_sym_dataDecl_repeat1] = aux_sym_dataDecl_repeat1,
  [aux_sym_dataDecl_repeat2] = aux_sym_dataDecl_repeat2,
  [aux_sym_dataCtor_repeat1] = aux_sym_dataCtor_repeat1,
  [aux_sym__constraints_repeat1] = aux_sym__constraints_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_expression_repeat2] = aux_sym_expression_repeat2,
  [aux_sym_expression_repeat3] = aux_sym_expression_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_typeAtom_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__qualProperName_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__qualSymbol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__qualSymbol_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym__cont] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__decl] = {
    .visible = false,
    .named = true,
  },
  [sym_dataDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_dataCtor] = {
    .visible = true,
    .named = true,
  },
  [sym_typeDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_newtypeDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_classDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__constraints] = {
    .visible = false,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_properName] = {
    .visible = true,
    .named = true,
  },
  [sym_typeVarBinding] = {
    .visible = true,
    .named = true,
  },
  [sym_typeAtom] = {
    .visible = true,
    .named = true,
  },
  [sym__qualProperName] = {
    .visible = false,
    .named = true,
  },
  [sym__qualSymbol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dataDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dataDecl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dataCtor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__constraints_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat3] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_constructor = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_constructor] = "constructor",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_name, 2},
  [3] =
    {field_constructor, 0},
  [4] =
    {field_body, 3},
    {field_name, 1},
  [6] =
    {field_body, 4},
    {field_name, 1},
  [8] =
    {field_constructor, 3},
    {field_name, 1},
  [10] =
    {field_constructor, 4},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 51,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 54,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 61,
  [69] = 60,
  [70] = 70,
  [71] = 59,
  [72] = 15,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 53,
  [84] = 63,
  [85] = 85,
  [86] = 86,
  [87] = 33,
  [88] = 31,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 15,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 35,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 32,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 100,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 19:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 20:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(84);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_module);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_where);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_data);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_type);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_class);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'p') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'p') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'w') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'y') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'y') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_expression_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_typeAtom_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(104);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(103);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(28);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'd') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'h') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'l') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'l') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'o') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'p') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'p') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'r') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 's') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 's') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 't') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 't') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'u') ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'w') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'y') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'y') ADVANCE(100);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 3, .external_lex_state = 2},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 21},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 21},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__begin = 0,
  ts_external_token__end = 1,
  ts_external_token__cont = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__begin] = sym__begin,
  [ts_external_token__end] = sym__end,
  [ts_external_token__cont] = sym__cont,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__begin] = true,
    [ts_external_token__end] = true,
    [ts_external_token__cont] = true,
  },
  [2] = {
    [ts_external_token__cont] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [aux_sym_data_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_newtype] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
    [aux_sym_expression_token2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym_typeAtom_token1] = ACTIONS(1),
    [aux_sym__qualProperName_token1] = ACTIONS(1),
    [aux_sym__qualSymbol_token1] = ACTIONS(1),
    [aux_sym__qualSymbol_token2] = ACTIONS(1),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
    [sym__cont] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(118),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    STATE(2), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    ACTIONS(8), 3,
      anon_sym_LT_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(13), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(10), 7,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [28] = 5,
    ACTIONS(13), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    STATE(2), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    ACTIONS(15), 3,
      anon_sym_LT_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(13), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(17), 7,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [56] = 5,
    ACTIONS(13), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    STATE(3), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    ACTIONS(19), 3,
      anon_sym_LT_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(13), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(17), 7,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [84] = 5,
    ACTIONS(21), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(23), 2,
      sym__cont,
      anon_sym_PIPE,
    STATE(6), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    STATE(14), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(25), 7,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [111] = 5,
    ACTIONS(8), 2,
      sym__cont,
      anon_sym_PIPE,
    ACTIONS(27), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    STATE(6), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    STATE(14), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(30), 7,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [138] = 5,
    ACTIONS(21), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(33), 2,
      sym__cont,
      anon_sym_PIPE,
    STATE(5), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    STATE(14), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(25), 7,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [165] = 9,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_data,
    ACTIONS(39), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_newtype,
    ACTIONS(43), 1,
      anon_sym_class,
    ACTIONS(45), 1,
      aux_sym_type_variable_token1,
    STATE(24), 1,
      sym__ident,
    STATE(9), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(121), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [198] = 9,
    ACTIONS(37), 1,
      anon_sym_data,
    ACTIONS(39), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_newtype,
    ACTIONS(43), 1,
      anon_sym_class,
    ACTIONS(45), 1,
      aux_sym_type_variable_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym__ident,
    STATE(10), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(121), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [231] = 9,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_data,
    ACTIONS(54), 1,
      anon_sym_type,
    ACTIONS(57), 1,
      anon_sym_newtype,
    ACTIONS(60), 1,
      anon_sym_class,
    ACTIONS(63), 1,
      aux_sym_type_variable_token1,
    STATE(24), 1,
      sym__ident,
    STATE(10), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(121), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [264] = 9,
    ACTIONS(37), 1,
      anon_sym_data,
    ACTIONS(39), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_newtype,
    ACTIONS(43), 1,
      anon_sym_class,
    ACTIONS(45), 1,
      aux_sym_type_variable_token1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym__ident,
    STATE(10), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(121), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [297] = 9,
    ACTIONS(37), 1,
      anon_sym_data,
    ACTIONS(39), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_newtype,
    ACTIONS(43), 1,
      anon_sym_class,
    ACTIONS(45), 1,
      aux_sym_type_variable_token1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym__ident,
    STATE(11), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(121), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [330] = 2,
    ACTIONS(70), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(72), 10,
      anon_sym_LT_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [347] = 2,
    ACTIONS(70), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(72), 9,
      sym__cont,
      anon_sym_PIPE,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [363] = 2,
    ACTIONS(74), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(76), 9,
      sym__cont,
      anon_sym_PIPE,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [379] = 8,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      aux_sym_expression_token1,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__ident,
    STATE(47), 1,
      sym_expression,
    ACTIONS(80), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [405] = 8,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      aux_sym_expression_token1,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__ident,
    STATE(48), 1,
      sym_expression,
    ACTIONS(80), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [431] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      aux_sym_expression_token1,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym__ident,
    STATE(79), 1,
      sym_expression,
    ACTIONS(80), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [454] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      aux_sym_expression_token1,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym__ident,
    STATE(73), 1,
      sym_expression,
    ACTIONS(80), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [477] = 7,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_expression_token1,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__ident,
    STATE(89), 1,
      sym_expression,
    ACTIONS(94), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [500] = 7,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      aux_sym_expression_token1,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__ident,
    STATE(102), 1,
      sym_expression,
    ACTIONS(94), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [523] = 7,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      aux_sym_expression_token1,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym__ident,
    STATE(50), 1,
      sym_expression,
    ACTIONS(80), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [546] = 6,
    ACTIONS(102), 1,
      aux_sym_data_token1,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      aux_sym__qualProperName_token1,
    ACTIONS(108), 1,
      sym__cont,
    STATE(4), 1,
      sym__qualProperName,
    STATE(109), 2,
      sym__constraints,
      sym_constraint,
  [566] = 4,
    ACTIONS(110), 1,
      anon_sym_EQ,
    ACTIONS(112), 1,
      aux_sym_type_variable_token1,
    STATE(52), 1,
      sym__ident,
    STATE(30), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [581] = 4,
    ACTIONS(114), 1,
      aux_sym_data_token1,
    ACTIONS(116), 1,
      aux_sym_type_variable_token1,
    STATE(108), 1,
      sym__ident,
    STATE(117), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [596] = 4,
    ACTIONS(118), 1,
      anon_sym_EQ,
    ACTIONS(120), 1,
      aux_sym_type_variable_token1,
    STATE(52), 1,
      sym__ident,
    STATE(26), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [611] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 5,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      anon_sym_class,
      aux_sym_type_variable_token1,
  [622] = 4,
    ACTIONS(114), 1,
      aux_sym_data_token1,
    ACTIONS(116), 1,
      aux_sym_type_variable_token1,
    STATE(108), 1,
      sym__ident,
    STATE(114), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [637] = 4,
    ACTIONS(114), 1,
      aux_sym_data_token1,
    ACTIONS(116), 1,
      aux_sym_type_variable_token1,
    STATE(108), 1,
      sym__ident,
    STATE(115), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [652] = 4,
    ACTIONS(112), 1,
      aux_sym_type_variable_token1,
    ACTIONS(127), 1,
      anon_sym_EQ,
    STATE(52), 1,
      sym__ident,
    STATE(26), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [667] = 1,
    ACTIONS(129), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [676] = 1,
    ACTIONS(131), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [685] = 1,
    ACTIONS(133), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [694] = 4,
    ACTIONS(114), 1,
      aux_sym_data_token1,
    ACTIONS(116), 1,
      aux_sym_type_variable_token1,
    STATE(108), 1,
      sym__ident,
    STATE(119), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [709] = 1,
    ACTIONS(135), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [718] = 4,
    ACTIONS(137), 1,
      anon_sym_EQ,
    ACTIONS(139), 1,
      aux_sym_type_variable_token1,
    STATE(100), 1,
      sym__ident,
    STATE(38), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [732] = 4,
    ACTIONS(139), 1,
      aux_sym_type_variable_token1,
    ACTIONS(141), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym__ident,
    STATE(45), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [746] = 4,
    ACTIONS(139), 1,
      aux_sym_type_variable_token1,
    ACTIONS(143), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym__ident,
    STATE(45), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [760] = 5,
    ACTIONS(102), 1,
      aux_sym_data_token1,
    ACTIONS(106), 1,
      aux_sym__qualProperName_token1,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym__qualProperName,
    STATE(116), 1,
      sym_constraint,
  [776] = 4,
    ACTIONS(139), 1,
      aux_sym_type_variable_token1,
    ACTIONS(147), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym__ident,
    STATE(45), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [790] = 5,
    ACTIONS(102), 1,
      aux_sym_data_token1,
    ACTIONS(106), 1,
      aux_sym__qualProperName_token1,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym__qualProperName,
    STATE(92), 1,
      sym_constraint,
  [806] = 5,
    ACTIONS(102), 1,
      aux_sym_data_token1,
    ACTIONS(106), 1,
      aux_sym__qualProperName_token1,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym__qualProperName,
    STATE(67), 1,
      sym_constraint,
  [822] = 4,
    ACTIONS(139), 1,
      aux_sym_type_variable_token1,
    ACTIONS(149), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym__ident,
    STATE(37), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [836] = 4,
    ACTIONS(139), 1,
      aux_sym_type_variable_token1,
    ACTIONS(151), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym__ident,
    STATE(40), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [850] = 4,
    ACTIONS(153), 1,
      anon_sym_EQ,
    ACTIONS(155), 1,
      aux_sym_type_variable_token1,
    STATE(100), 1,
      sym__ident,
    STATE(45), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [864] = 2,
    ACTIONS(160), 1,
      anon_sym_COLON,
    ACTIONS(158), 3,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [873] = 4,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_expression_repeat2,
  [886] = 4,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_expression_repeat2,
  [899] = 3,
    ACTIONS(172), 1,
      aux_sym_type_variable_token1,
    STATE(49), 1,
      aux_sym_expression_repeat1,
    ACTIONS(170), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [910] = 2,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 3,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [919] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_expression_repeat2,
  [929] = 2,
    ACTIONS(181), 1,
      anon_sym_AT,
    ACTIONS(179), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [937] = 3,
    ACTIONS(183), 1,
      aux_sym_type_variable_token1,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_expression_repeat3,
  [947] = 3,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      aux_sym_type_variable_token1,
    STATE(69), 1,
      aux_sym_expression_repeat1,
  [957] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_expression_repeat2,
  [967] = 3,
    ACTIONS(189), 1,
      aux_sym_type_variable_token1,
    STATE(103), 1,
      sym__pattern,
    STATE(106), 1,
      sym__ident,
  [977] = 3,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(193), 1,
      sym__cont,
    STATE(76), 1,
      aux_sym_dataDecl_repeat2,
  [987] = 3,
    ACTIONS(114), 1,
      aux_sym_data_token1,
    STATE(7), 1,
      sym_properName,
    STATE(78), 1,
      sym_dataCtor,
  [997] = 3,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      aux_sym_type_variable_token1,
    STATE(53), 1,
      aux_sym_expression_repeat3,
  [1007] = 3,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      aux_sym_type_variable_token1,
    STATE(49), 1,
      aux_sym_expression_repeat1,
  [1017] = 3,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      aux_sym_type_variable_token1,
    STATE(49), 1,
      aux_sym_expression_repeat1,
  [1027] = 3,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      aux_sym_type_variable_token1,
    STATE(60), 1,
      aux_sym_expression_repeat1,
  [1037] = 3,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      aux_sym_type_variable_token1,
    STATE(61), 1,
      aux_sym_expression_repeat1,
  [1047] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym__constraints_repeat1,
  [1057] = 3,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_where,
    STATE(66), 1,
      aux_sym_module_repeat1,
  [1067] = 3,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(203), 1,
      anon_sym_where,
    STATE(70), 1,
      aux_sym_module_repeat1,
  [1077] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym__constraints_repeat1,
  [1087] = 3,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      aux_sym_type_variable_token1,
    STATE(49), 1,
      aux_sym_expression_repeat1,
  [1097] = 3,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      aux_sym_type_variable_token1,
    STATE(49), 1,
      aux_sym_expression_repeat1,
  [1107] = 3,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(210), 1,
      anon_sym_where,
    STATE(70), 1,
      aux_sym_module_repeat1,
  [1117] = 3,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      aux_sym_type_variable_token1,
    STATE(83), 1,
      aux_sym_expression_repeat3,
  [1127] = 1,
    ACTIONS(76), 3,
      aux_sym_data_token1,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1133] = 2,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 2,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [1141] = 3,
    ACTIONS(214), 1,
      aux_sym_type_variable_token1,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_expression_repeat3,
  [1151] = 3,
    ACTIONS(114), 1,
      aux_sym_data_token1,
    STATE(7), 1,
      sym_properName,
    STATE(93), 1,
      sym_dataCtor,
  [1161] = 3,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      sym__cont,
    STATE(82), 1,
      aux_sym_dataDecl_repeat2,
  [1171] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_expression_repeat2,
  [1181] = 3,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      sym__cont,
    STATE(80), 1,
      aux_sym_dataDecl_repeat2,
  [1191] = 2,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1199] = 3,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(226), 1,
      sym__cont,
    STATE(82), 1,
      aux_sym_dataDecl_repeat2,
  [1209] = 3,
    ACTIONS(114), 1,
      aux_sym_data_token1,
    STATE(7), 1,
      sym_properName,
    STATE(57), 1,
      sym_dataCtor,
  [1219] = 3,
    ACTIONS(228), 1,
      anon_sym_PIPE,
    ACTIONS(231), 1,
      sym__cont,
    STATE(82), 1,
      aux_sym_dataDecl_repeat2,
  [1229] = 3,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      aux_sym_type_variable_token1,
    STATE(74), 1,
      aux_sym_expression_repeat3,
  [1239] = 3,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      aux_sym_type_variable_token1,
    STATE(68), 1,
      aux_sym_expression_repeat1,
  [1249] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym__constraints_repeat1,
  [1259] = 1,
    ACTIONS(210), 2,
      anon_sym_DOT,
      anon_sym_where,
  [1264] = 1,
    ACTIONS(133), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1269] = 1,
    ACTIONS(129), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1274] = 2,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      sym__cont,
  [1281] = 2,
    ACTIONS(242), 1,
      aux_sym_data_token1,
    STATE(36), 1,
      sym_properName,
  [1288] = 2,
    ACTIONS(242), 1,
      aux_sym_data_token1,
    STATE(29), 1,
      sym_properName,
  [1295] = 1,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1300] = 1,
    ACTIONS(231), 2,
      sym__cont,
      anon_sym_PIPE,
  [1305] = 1,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1310] = 1,
    ACTIONS(76), 2,
      anon_sym_DOT,
      anon_sym_where,
  [1315] = 2,
    ACTIONS(246), 1,
      aux_sym_data_token1,
    STATE(65), 1,
      sym_properName,
  [1322] = 2,
    ACTIONS(242), 1,
      aux_sym_data_token1,
    STATE(43), 1,
      sym_properName,
  [1329] = 2,
    ACTIONS(246), 1,
      aux_sym_data_token1,
    STATE(86), 1,
      sym_properName,
  [1336] = 1,
    ACTIONS(135), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1341] = 1,
    ACTIONS(248), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1346] = 2,
    ACTIONS(242), 1,
      aux_sym_data_token1,
    STATE(44), 1,
      sym_properName,
  [1353] = 2,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      sym__cont,
  [1360] = 1,
    ACTIONS(252), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1365] = 1,
    ACTIONS(131), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1370] = 2,
    ACTIONS(242), 1,
      aux_sym_data_token1,
    STATE(25), 1,
      sym_properName,
  [1377] = 1,
    ACTIONS(181), 1,
      anon_sym_AT,
  [1381] = 1,
    ACTIONS(254), 1,
      sym__cont,
  [1385] = 1,
    ACTIONS(248), 1,
      sym__cont,
  [1389] = 1,
    ACTIONS(256), 1,
      anon_sym_LT_EQ,
  [1393] = 1,
    ACTIONS(258), 1,
      sym__cont,
  [1397] = 1,
    ACTIONS(260), 1,
      anon_sym_LT_EQ,
  [1401] = 1,
    ACTIONS(262), 1,
      sym__cont,
  [1405] = 1,
    ACTIONS(244), 1,
      anon_sym_LT_EQ,
  [1409] = 1,
    ACTIONS(264), 1,
      sym__cont,
  [1413] = 1,
    ACTIONS(266), 1,
      sym__cont,
  [1417] = 1,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
  [1421] = 1,
    ACTIONS(270), 1,
      sym__cont,
  [1425] = 1,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
  [1429] = 1,
    ACTIONS(274), 1,
      sym__cont,
  [1433] = 1,
    ACTIONS(276), 1,
      anon_sym_EQ,
  [1437] = 1,
    ACTIONS(278), 1,
      sym__cont,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 198,
  [SMALL_STATE(10)] = 231,
  [SMALL_STATE(11)] = 264,
  [SMALL_STATE(12)] = 297,
  [SMALL_STATE(13)] = 330,
  [SMALL_STATE(14)] = 347,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 379,
  [SMALL_STATE(17)] = 405,
  [SMALL_STATE(18)] = 431,
  [SMALL_STATE(19)] = 454,
  [SMALL_STATE(20)] = 477,
  [SMALL_STATE(21)] = 500,
  [SMALL_STATE(22)] = 523,
  [SMALL_STATE(23)] = 546,
  [SMALL_STATE(24)] = 566,
  [SMALL_STATE(25)] = 581,
  [SMALL_STATE(26)] = 596,
  [SMALL_STATE(27)] = 611,
  [SMALL_STATE(28)] = 622,
  [SMALL_STATE(29)] = 637,
  [SMALL_STATE(30)] = 652,
  [SMALL_STATE(31)] = 667,
  [SMALL_STATE(32)] = 676,
  [SMALL_STATE(33)] = 685,
  [SMALL_STATE(34)] = 694,
  [SMALL_STATE(35)] = 709,
  [SMALL_STATE(36)] = 718,
  [SMALL_STATE(37)] = 732,
  [SMALL_STATE(38)] = 746,
  [SMALL_STATE(39)] = 760,
  [SMALL_STATE(40)] = 776,
  [SMALL_STATE(41)] = 790,
  [SMALL_STATE(42)] = 806,
  [SMALL_STATE(43)] = 822,
  [SMALL_STATE(44)] = 836,
  [SMALL_STATE(45)] = 850,
  [SMALL_STATE(46)] = 864,
  [SMALL_STATE(47)] = 873,
  [SMALL_STATE(48)] = 886,
  [SMALL_STATE(49)] = 899,
  [SMALL_STATE(50)] = 910,
  [SMALL_STATE(51)] = 919,
  [SMALL_STATE(52)] = 929,
  [SMALL_STATE(53)] = 937,
  [SMALL_STATE(54)] = 947,
  [SMALL_STATE(55)] = 957,
  [SMALL_STATE(56)] = 967,
  [SMALL_STATE(57)] = 977,
  [SMALL_STATE(58)] = 987,
  [SMALL_STATE(59)] = 997,
  [SMALL_STATE(60)] = 1007,
  [SMALL_STATE(61)] = 1017,
  [SMALL_STATE(62)] = 1027,
  [SMALL_STATE(63)] = 1037,
  [SMALL_STATE(64)] = 1047,
  [SMALL_STATE(65)] = 1057,
  [SMALL_STATE(66)] = 1067,
  [SMALL_STATE(67)] = 1077,
  [SMALL_STATE(68)] = 1087,
  [SMALL_STATE(69)] = 1097,
  [SMALL_STATE(70)] = 1107,
  [SMALL_STATE(71)] = 1117,
  [SMALL_STATE(72)] = 1127,
  [SMALL_STATE(73)] = 1133,
  [SMALL_STATE(74)] = 1141,
  [SMALL_STATE(75)] = 1151,
  [SMALL_STATE(76)] = 1161,
  [SMALL_STATE(77)] = 1171,
  [SMALL_STATE(78)] = 1181,
  [SMALL_STATE(79)] = 1191,
  [SMALL_STATE(80)] = 1199,
  [SMALL_STATE(81)] = 1209,
  [SMALL_STATE(82)] = 1219,
  [SMALL_STATE(83)] = 1229,
  [SMALL_STATE(84)] = 1239,
  [SMALL_STATE(85)] = 1249,
  [SMALL_STATE(86)] = 1259,
  [SMALL_STATE(87)] = 1264,
  [SMALL_STATE(88)] = 1269,
  [SMALL_STATE(89)] = 1274,
  [SMALL_STATE(90)] = 1281,
  [SMALL_STATE(91)] = 1288,
  [SMALL_STATE(92)] = 1295,
  [SMALL_STATE(93)] = 1300,
  [SMALL_STATE(94)] = 1305,
  [SMALL_STATE(95)] = 1310,
  [SMALL_STATE(96)] = 1315,
  [SMALL_STATE(97)] = 1322,
  [SMALL_STATE(98)] = 1329,
  [SMALL_STATE(99)] = 1336,
  [SMALL_STATE(100)] = 1341,
  [SMALL_STATE(101)] = 1346,
  [SMALL_STATE(102)] = 1353,
  [SMALL_STATE(103)] = 1360,
  [SMALL_STATE(104)] = 1365,
  [SMALL_STATE(105)] = 1370,
  [SMALL_STATE(106)] = 1377,
  [SMALL_STATE(107)] = 1381,
  [SMALL_STATE(108)] = 1385,
  [SMALL_STATE(109)] = 1389,
  [SMALL_STATE(110)] = 1393,
  [SMALL_STATE(111)] = 1397,
  [SMALL_STATE(112)] = 1401,
  [SMALL_STATE(113)] = 1405,
  [SMALL_STATE(114)] = 1409,
  [SMALL_STATE(115)] = 1413,
  [SMALL_STATE(116)] = 1417,
  [SMALL_STATE(117)] = 1421,
  [SMALL_STATE(118)] = 1425,
  [SMALL_STATE(119)] = 1429,
  [SMALL_STATE(120)] = 1433,
  [SMALL_STATE(121)] = 1437,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [5] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(13),
  [8] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataCtor, 2, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataCtor, 1, .production_id = 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(101),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(97),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(90),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(23),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(24),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeAtom, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAtom, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properName, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properName, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(52),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2), SHIFT_REPEAT(100),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(46),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 4, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(98),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 3),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2), SHIFT_REPEAT(120),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 5, .production_id = 1),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(18),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 6, .production_id = 1),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2), SHIFT_REPEAT(75),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__constraints_repeat1, 2), SHIFT_REPEAT(41),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__constraints_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeVarBinding, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraints, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDecl, 5, .production_id = 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newtypeDecl, 6, .production_id = 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newtypeDecl, 5, .production_id = 6),
  [272] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDecl, 4, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_purescript_external_scanner_create(void);
void tree_sitter_purescript_external_scanner_destroy(void *);
bool tree_sitter_purescript_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_purescript_external_scanner_serialize(void *, char *);
void tree_sitter_purescript_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_purescript(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_purescript_external_scanner_create,
      tree_sitter_purescript_external_scanner_destroy,
      tree_sitter_purescript_external_scanner_scan,
      tree_sitter_purescript_external_scanner_serialize,
      tree_sitter_purescript_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
