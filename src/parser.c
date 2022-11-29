#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 169
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 10

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
  sym__classDeclWithoutDeps = 42,
  sym__classDeclWithDeps = 43,
  sym__classDeclBody = 44,
  sym__fundeps = 45,
  sym_fundep = 46,
  sym__constraints = 47,
  sym_constraint = 48,
  sym__type = 49,
  sym_function_definition = 50,
  sym__ident = 51,
  sym__pattern = 52,
  sym__argument = 53,
  sym_expression = 54,
  sym_properName = 55,
  sym_typeVarBinding = 56,
  sym_typeAtom = 57,
  sym__qualProperName = 58,
  sym__qualSymbol = 59,
  aux_sym_module_repeat1 = 60,
  aux_sym_module_repeat2 = 61,
  aux_sym_dataDecl_repeat1 = 62,
  aux_sym_dataDecl_repeat2 = 63,
  aux_sym_dataCtor_repeat1 = 64,
  aux_sym__classDeclBody_repeat1 = 65,
  aux_sym__fundeps_repeat1 = 66,
  aux_sym_fundep_repeat1 = 67,
  aux_sym__constraints_repeat1 = 68,
  aux_sym_function_definition_repeat1 = 69,
  aux_sym_expression_repeat1 = 70,
  aux_sym_expression_repeat2 = 71,
  aux_sym_expression_repeat3 = 72,
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
  [sym__classDeclWithoutDeps] = "_classDeclWithoutDeps",
  [sym__classDeclWithDeps] = "_classDeclWithDeps",
  [sym__classDeclBody] = "_classDeclBody",
  [sym__fundeps] = "_fundeps",
  [sym_fundep] = "fundep",
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
  [aux_sym__classDeclBody_repeat1] = "_classDeclBody_repeat1",
  [aux_sym__fundeps_repeat1] = "_fundeps_repeat1",
  [aux_sym_fundep_repeat1] = "fundep_repeat1",
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
  [sym__classDeclWithoutDeps] = sym__classDeclWithoutDeps,
  [sym__classDeclWithDeps] = sym__classDeclWithDeps,
  [sym__classDeclBody] = sym__classDeclBody,
  [sym__fundeps] = sym__fundeps,
  [sym_fundep] = sym_fundep,
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
  [aux_sym__classDeclBody_repeat1] = aux_sym__classDeclBody_repeat1,
  [aux_sym__fundeps_repeat1] = aux_sym__fundeps_repeat1,
  [aux_sym_fundep_repeat1] = aux_sym_fundep_repeat1,
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
  [sym__classDeclWithoutDeps] = {
    .visible = false,
    .named = true,
  },
  [sym__classDeclWithDeps] = {
    .visible = false,
    .named = true,
  },
  [sym__classDeclBody] = {
    .visible = false,
    .named = true,
  },
  [sym__fundeps] = {
    .visible = false,
    .named = true,
  },
  [sym_fundep] = {
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
  [aux_sym__classDeclBody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__fundeps_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fundep_repeat1] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0, .inherited = true},
  [2] =
    {field_name, 1},
    {field_name, 2},
  [4] =
    {field_constructor, 0},
  [5] =
    {field_body, 3},
    {field_name, 1},
  [7] =
    {field_name, 3},
  [8] =
    {field_body, 4},
    {field_name, 1},
  [10] =
    {field_constructor, 3},
    {field_name, 1},
  [12] =
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
  [6] = 6,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 29,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 16,
  [61] = 61,
  [62] = 36,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 67,
  [71] = 71,
  [72] = 72,
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
  [83] = 83,
  [84] = 84,
  [85] = 77,
  [86] = 76,
  [87] = 87,
  [88] = 88,
  [89] = 87,
  [90] = 16,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 78,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 71,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 79,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 114,
  [116] = 35,
  [117] = 16,
  [118] = 41,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 16,
  [125] = 65,
  [126] = 65,
  [127] = 39,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 32,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'w') ADVANCE(97);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(114);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 17:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 18:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(86);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_module);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_where);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_where);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_data);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_type);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_class);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'h') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'p') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'p') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'r') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 's') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'w') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'y') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'y') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_expression_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(42);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_typeAtom_token1);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(106);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(105);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(26);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'd') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'h') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'l') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'l') ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'o') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'p') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'p') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'r') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 's') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 's') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 't') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 't') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'u') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'w') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'y') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'y') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 2, .external_lex_state = 2},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 2},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 2, .external_lex_state = 2},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 2, .external_lex_state = 2},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 2, .external_lex_state = 2},
  [37] = {.lex_state = 2, .external_lex_state = 2},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 2, .external_lex_state = 2},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 2, .external_lex_state = 2},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 2, .external_lex_state = 2},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 19},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 4},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0, .external_lex_state = 2},
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

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__begin] = true,
    [ts_external_token__end] = true,
    [ts_external_token__cont] = true,
  },
  [2] = {
    [ts_external_token__cont] = true,
  },
  [3] = {
    [ts_external_token__end] = true,
    [ts_external_token__cont] = true,
  },
  [4] = {
    [ts_external_token__begin] = true,
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
    [sym_module] = STATE(162),
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
    STATE(14), 3,
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
    STATE(14), 3,
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
    STATE(14), 3,
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
  [84] = 11,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_data,
    ACTIONS(26), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_newtype,
    ACTIONS(32), 1,
      anon_sym_class,
    ACTIONS(35), 1,
      aux_sym_type_variable_token1,
    STATE(46), 1,
      sym__ident,
    STATE(155), 1,
      sym__classDeclWithoutDeps,
    STATE(157), 1,
      sym__classDeclWithDeps,
    STATE(5), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(154), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [123] = 11,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_data,
    ACTIONS(42), 1,
      anon_sym_type,
    ACTIONS(44), 1,
      anon_sym_newtype,
    ACTIONS(46), 1,
      anon_sym_class,
    ACTIONS(48), 1,
      aux_sym_type_variable_token1,
    STATE(46), 1,
      sym__ident,
    STATE(155), 1,
      sym__classDeclWithoutDeps,
    STATE(157), 1,
      sym__classDeclWithDeps,
    STATE(5), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(154), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [162] = 5,
    ACTIONS(8), 2,
      sym__cont,
      anon_sym_PIPE,
    ACTIONS(50), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    STATE(7), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    STATE(15), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(53), 7,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [189] = 11,
    ACTIONS(40), 1,
      anon_sym_data,
    ACTIONS(42), 1,
      anon_sym_type,
    ACTIONS(44), 1,
      anon_sym_newtype,
    ACTIONS(46), 1,
      anon_sym_class,
    ACTIONS(48), 1,
      aux_sym_type_variable_token1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__ident,
    STATE(155), 1,
      sym__classDeclWithoutDeps,
    STATE(157), 1,
      sym__classDeclWithDeps,
    STATE(6), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(154), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [228] = 11,
    ACTIONS(40), 1,
      anon_sym_data,
    ACTIONS(42), 1,
      anon_sym_type,
    ACTIONS(44), 1,
      anon_sym_newtype,
    ACTIONS(46), 1,
      anon_sym_class,
    ACTIONS(48), 1,
      aux_sym_type_variable_token1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__ident,
    STATE(155), 1,
      sym__classDeclWithoutDeps,
    STATE(157), 1,
      sym__classDeclWithDeps,
    STATE(10), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(154), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [267] = 11,
    ACTIONS(40), 1,
      anon_sym_data,
    ACTIONS(42), 1,
      anon_sym_type,
    ACTIONS(44), 1,
      anon_sym_newtype,
    ACTIONS(46), 1,
      anon_sym_class,
    ACTIONS(48), 1,
      aux_sym_type_variable_token1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__ident,
    STATE(155), 1,
      sym__classDeclWithoutDeps,
    STATE(157), 1,
      sym__classDeclWithDeps,
    STATE(5), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(154), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [306] = 5,
    ACTIONS(62), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(64), 2,
      sym__cont,
      anon_sym_PIPE,
    STATE(7), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    STATE(15), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(66), 7,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [333] = 5,
    ACTIONS(62), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(68), 2,
      sym__cont,
      anon_sym_PIPE,
    STATE(11), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    STATE(15), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(66), 7,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [360] = 4,
    ACTIONS(70), 2,
      anon_sym_where,
      aux_sym_type_variable_token1,
    ACTIONS(72), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(74), 2,
      sym__cont,
      anon_sym_PIPE,
    ACTIONS(76), 7,
      anon_sym_LT_EQ,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [382] = 2,
    ACTIONS(78), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(80), 10,
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
  [399] = 2,
    ACTIONS(78), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(80), 9,
      sym__cont,
      anon_sym_PIPE,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [415] = 2,
    ACTIONS(70), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(74), 9,
      sym__cont,
      anon_sym_PIPE,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [431] = 8,
    ACTIONS(82), 1,
      anon_sym_where,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      aux_sym_type_variable_token1,
    ACTIONS(88), 1,
      sym__cont,
    STATE(65), 1,
      sym__ident,
    STATE(103), 1,
      sym__fundeps,
    STATE(149), 1,
      sym__classDeclBody,
    STATE(20), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [457] = 8,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      aux_sym_expression_token1,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__ident,
    STATE(67), 1,
      sym_expression,
    ACTIONS(92), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [483] = 8,
    ACTIONS(82), 1,
      anon_sym_where,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      aux_sym_type_variable_token1,
    ACTIONS(102), 1,
      sym__cont,
    STATE(65), 1,
      sym__ident,
    STATE(83), 1,
      sym__fundeps,
    STATE(158), 1,
      sym__classDeclBody,
    STATE(29), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [509] = 8,
    ACTIONS(82), 1,
      anon_sym_where,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      aux_sym_type_variable_token1,
    ACTIONS(104), 1,
      sym__cont,
    STATE(65), 1,
      sym__ident,
    STATE(106), 1,
      sym__fundeps,
    STATE(160), 1,
      sym__classDeclBody,
    STATE(29), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [535] = 8,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      aux_sym_expression_token1,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__ident,
    STATE(70), 1,
      sym_expression,
    ACTIONS(92), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [561] = 8,
    ACTIONS(82), 1,
      anon_sym_where,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      aux_sym_type_variable_token1,
    ACTIONS(108), 1,
      sym__cont,
    STATE(65), 1,
      sym__ident,
    STATE(110), 1,
      sym__fundeps,
    STATE(168), 1,
      sym__classDeclBody,
    STATE(19), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [587] = 7,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      aux_sym_expression_token1,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym__ident,
    STATE(96), 1,
      sym_expression,
    ACTIONS(92), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [610] = 7,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_expression_token1,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    STATE(118), 1,
      sym__ident,
    STATE(135), 1,
      sym_expression,
    ACTIONS(112), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [633] = 7,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      aux_sym_expression_token1,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym__ident,
    STATE(102), 1,
      sym_expression,
    ACTIONS(92), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [656] = 7,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_expression_token1,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    STATE(118), 1,
      sym__ident,
    STATE(120), 1,
      sym_expression,
    ACTIONS(112), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [679] = 7,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      aux_sym_expression_token1,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym__ident,
    STATE(64), 1,
      sym_expression,
    ACTIONS(92), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [702] = 6,
    ACTIONS(120), 1,
      aux_sym_data_token1,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      aux_sym__qualProperName_token1,
    STATE(4), 1,
      sym__qualProperName,
    STATE(22), 1,
      sym_properName,
    STATE(167), 2,
      sym__constraints,
      sym_constraint,
  [722] = 5,
    ACTIONS(126), 1,
      anon_sym_where,
    ACTIONS(130), 1,
      aux_sym_type_variable_token1,
    STATE(65), 1,
      sym__ident,
    ACTIONS(128), 2,
      sym__cont,
      anon_sym_PIPE,
    STATE(29), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [740] = 4,
    ACTIONS(133), 1,
      aux_sym_data_token1,
    ACTIONS(135), 1,
      aux_sym_type_variable_token1,
    STATE(125), 1,
      sym__ident,
    STATE(140), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [755] = 4,
    ACTIONS(137), 1,
      anon_sym_EQ,
    ACTIONS(139), 1,
      aux_sym_type_variable_token1,
    STATE(112), 1,
      sym__ident,
    STATE(31), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [770] = 1,
    ACTIONS(142), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [779] = 4,
    ACTIONS(144), 1,
      aux_sym_data_token1,
    ACTIONS(146), 1,
      aux_sym_type_variable_token1,
    STATE(65), 1,
      sym__ident,
    STATE(143), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [794] = 4,
    ACTIONS(148), 1,
      anon_sym_EQ,
    ACTIONS(150), 1,
      aux_sym_type_variable_token1,
    STATE(112), 1,
      sym__ident,
    STATE(31), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [809] = 1,
    ACTIONS(152), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [818] = 4,
    ACTIONS(154), 1,
      anon_sym_where,
    ACTIONS(158), 1,
      aux_sym_type_variable_token1,
    ACTIONS(156), 2,
      sym__cont,
      anon_sym_COMMA,
    STATE(36), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [833] = 4,
    ACTIONS(161), 1,
      anon_sym_where,
    ACTIONS(165), 1,
      aux_sym_type_variable_token1,
    ACTIONS(163), 2,
      sym__cont,
      anon_sym_COMMA,
    STATE(36), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [848] = 2,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 5,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      anon_sym_class,
      aux_sym_type_variable_token1,
  [859] = 1,
    ACTIONS(171), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [868] = 4,
    ACTIONS(144), 1,
      aux_sym_data_token1,
    ACTIONS(146), 1,
      aux_sym_type_variable_token1,
    STATE(65), 1,
      sym__ident,
    STATE(165), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [883] = 1,
    ACTIONS(173), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [892] = 4,
    ACTIONS(144), 1,
      aux_sym_data_token1,
    ACTIONS(146), 1,
      aux_sym_type_variable_token1,
    STATE(65), 1,
      sym__ident,
    STATE(164), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [907] = 4,
    ACTIONS(144), 1,
      aux_sym_data_token1,
    ACTIONS(146), 1,
      aux_sym_type_variable_token1,
    STATE(65), 1,
      sym__ident,
    STATE(145), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [922] = 4,
    ACTIONS(165), 1,
      aux_sym_type_variable_token1,
    ACTIONS(175), 1,
      anon_sym_where,
    ACTIONS(177), 2,
      sym__cont,
      anon_sym_COMMA,
    STATE(36), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [937] = 4,
    ACTIONS(133), 1,
      aux_sym_data_token1,
    ACTIONS(135), 1,
      aux_sym_type_variable_token1,
    STATE(125), 1,
      sym__ident,
    STATE(98), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [952] = 4,
    ACTIONS(150), 1,
      aux_sym_type_variable_token1,
    ACTIONS(179), 1,
      anon_sym_EQ,
    STATE(112), 1,
      sym__ident,
    STATE(34), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [967] = 4,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      aux_sym_type_variable_token1,
    STATE(126), 1,
      sym__ident,
    STATE(53), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [981] = 4,
    ACTIONS(185), 1,
      anon_sym_DASH_GT,
    ACTIONS(187), 1,
      aux_sym_type_variable_token1,
    STATE(68), 1,
      sym_fundep,
    STATE(69), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [995] = 4,
    ACTIONS(185), 1,
      anon_sym_DASH_GT,
    ACTIONS(187), 1,
      aux_sym_type_variable_token1,
    STATE(105), 1,
      sym_fundep,
    STATE(69), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [1009] = 4,
    ACTIONS(183), 1,
      aux_sym_type_variable_token1,
    ACTIONS(189), 1,
      anon_sym_EQ,
    STATE(126), 1,
      sym__ident,
    STATE(54), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1023] = 5,
    ACTIONS(124), 1,
      aux_sym__qualProperName_token1,
    ACTIONS(191), 1,
      aux_sym_data_token1,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym__qualProperName,
    STATE(163), 1,
      sym_constraint,
  [1039] = 4,
    ACTIONS(183), 1,
      aux_sym_type_variable_token1,
    ACTIONS(195), 1,
      anon_sym_EQ,
    STATE(126), 1,
      sym__ident,
    STATE(55), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1053] = 4,
    ACTIONS(183), 1,
      aux_sym_type_variable_token1,
    ACTIONS(197), 1,
      anon_sym_EQ,
    STATE(126), 1,
      sym__ident,
    STATE(55), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1067] = 4,
    ACTIONS(183), 1,
      aux_sym_type_variable_token1,
    ACTIONS(199), 1,
      anon_sym_EQ,
    STATE(126), 1,
      sym__ident,
    STATE(55), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1081] = 4,
    ACTIONS(128), 1,
      anon_sym_EQ,
    ACTIONS(201), 1,
      aux_sym_type_variable_token1,
    STATE(126), 1,
      sym__ident,
    STATE(55), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1095] = 5,
    ACTIONS(124), 1,
      aux_sym__qualProperName_token1,
    ACTIONS(191), 1,
      aux_sym_data_token1,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym__qualProperName,
    STATE(136), 1,
      sym_constraint,
  [1111] = 4,
    ACTIONS(183), 1,
      aux_sym_type_variable_token1,
    ACTIONS(204), 1,
      anon_sym_EQ,
    STATE(126), 1,
      sym__ident,
    STATE(52), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1125] = 5,
    ACTIONS(124), 1,
      aux_sym__qualProperName_token1,
    ACTIONS(191), 1,
      aux_sym_data_token1,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym__qualProperName,
    STATE(97), 1,
      sym_constraint,
  [1141] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym__fundeps_repeat1,
    ACTIONS(206), 2,
      sym__cont,
      anon_sym_where,
  [1152] = 2,
    ACTIONS(70), 2,
      anon_sym_where,
      aux_sym_type_variable_token1,
    ACTIONS(74), 2,
      sym__cont,
      anon_sym_PIPE,
  [1161] = 3,
    ACTIONS(213), 1,
      aux_sym_type_variable_token1,
    STATE(61), 1,
      aux_sym_expression_repeat1,
    ACTIONS(211), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1172] = 3,
    ACTIONS(156), 1,
      anon_sym_DASH_GT,
    ACTIONS(216), 1,
      aux_sym_type_variable_token1,
    STATE(62), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [1183] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym__fundeps_repeat1,
    ACTIONS(219), 2,
      sym__cont,
      anon_sym_where,
  [1194] = 2,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 3,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [1203] = 2,
    ACTIONS(227), 2,
      anon_sym_where,
      aux_sym_type_variable_token1,
    ACTIONS(229), 2,
      sym__cont,
      anon_sym_PIPE,
  [1212] = 2,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(231), 3,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [1221] = 4,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      aux_sym_expression_repeat2,
  [1234] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym__fundeps_repeat1,
    ACTIONS(239), 2,
      sym__cont,
      anon_sym_where,
  [1245] = 3,
    ACTIONS(241), 1,
      anon_sym_DASH_GT,
    ACTIONS(243), 1,
      aux_sym_type_variable_token1,
    STATE(62), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [1256] = 4,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_expression_repeat2,
  [1269] = 3,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      aux_sym_type_variable_token1,
    STATE(87), 1,
      aux_sym_expression_repeat3,
  [1279] = 3,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      sym__cont,
    STATE(111), 1,
      aux_sym_dataDecl_repeat2,
  [1289] = 3,
    ACTIONS(253), 1,
      aux_sym_type_variable_token1,
    STATE(132), 1,
      sym__pattern,
    STATE(152), 1,
      sym__ident,
  [1299] = 3,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(255), 1,
      sym__cont,
    STATE(92), 1,
      aux_sym_dataDecl_repeat2,
  [1309] = 3,
    ACTIONS(144), 1,
      aux_sym_data_token1,
    STATE(12), 1,
      sym_properName,
    STATE(72), 1,
      sym_dataCtor,
  [1319] = 3,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      aux_sym_type_variable_token1,
    STATE(61), 1,
      aux_sym_expression_repeat1,
  [1329] = 3,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      aux_sym_type_variable_token1,
    STATE(61), 1,
      aux_sym_expression_repeat1,
  [1339] = 3,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      aux_sym_type_variable_token1,
    STATE(76), 1,
      aux_sym_expression_repeat1,
  [1349] = 3,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      aux_sym_type_variable_token1,
    STATE(77), 1,
      aux_sym_expression_repeat1,
  [1359] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym__constraints_repeat1,
  [1369] = 2,
    ACTIONS(263), 1,
      aux_sym_type_variable_token1,
    STATE(37), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [1377] = 3,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_where,
    STATE(84), 1,
      aux_sym_module_repeat1,
  [1387] = 3,
    ACTIONS(269), 1,
      anon_sym_where,
    ACTIONS(271), 1,
      sym__cont,
    STATE(159), 1,
      sym__classDeclBody,
  [1397] = 3,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_where,
    STATE(88), 1,
      aux_sym_module_repeat1,
  [1407] = 3,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      aux_sym_type_variable_token1,
    STATE(61), 1,
      aux_sym_expression_repeat1,
  [1417] = 3,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      aux_sym_type_variable_token1,
    STATE(61), 1,
      aux_sym_expression_repeat1,
  [1427] = 3,
    ACTIONS(247), 1,
      aux_sym_type_variable_token1,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_expression_repeat3,
  [1437] = 3,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(280), 1,
      anon_sym_where,
    STATE(88), 1,
      aux_sym_module_repeat1,
  [1447] = 3,
    ACTIONS(247), 1,
      aux_sym_type_variable_token1,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_expression_repeat3,
  [1457] = 1,
    ACTIONS(74), 3,
      aux_sym_data_token1,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1463] = 3,
    ACTIONS(144), 1,
      aux_sym_data_token1,
    STATE(12), 1,
      sym_properName,
    STATE(119), 1,
      sym_dataCtor,
  [1473] = 3,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      sym__cont,
    STATE(113), 1,
      aux_sym_dataDecl_repeat2,
  [1483] = 3,
    ACTIONS(284), 1,
      sym__end,
    ACTIONS(286), 1,
      sym__cont,
    STATE(93), 1,
      aux_sym__classDeclBody_repeat1,
  [1493] = 3,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      aux_sym_type_variable_token1,
    STATE(86), 1,
      aux_sym_expression_repeat1,
  [1503] = 3,
    ACTIONS(289), 1,
      sym__end,
    ACTIONS(291), 1,
      sym__cont,
    STATE(93), 1,
      aux_sym__classDeclBody_repeat1,
  [1513] = 2,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 2,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [1521] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym__constraints_repeat1,
  [1531] = 3,
    ACTIONS(291), 1,
      sym__cont,
    ACTIONS(297), 1,
      sym__end,
    STATE(95), 1,
      aux_sym__classDeclBody_repeat1,
  [1541] = 3,
    ACTIONS(299), 1,
      aux_sym_type_variable_token1,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_expression_repeat3,
  [1551] = 3,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      aux_sym_expression_repeat2,
  [1561] = 3,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym__constraints_repeat1,
  [1571] = 2,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1579] = 3,
    ACTIONS(104), 1,
      sym__cont,
    ACTIONS(269), 1,
      anon_sym_where,
    STATE(160), 1,
      sym__classDeclBody,
  [1589] = 3,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      aux_sym_type_variable_token1,
    STATE(89), 1,
      aux_sym_expression_repeat3,
  [1599] = 1,
    ACTIONS(206), 3,
      sym__cont,
      anon_sym_where,
      anon_sym_COMMA,
  [1605] = 3,
    ACTIONS(269), 1,
      anon_sym_where,
    ACTIONS(314), 1,
      sym__cont,
    STATE(147), 1,
      sym__classDeclBody,
  [1615] = 3,
    ACTIONS(144), 1,
      aux_sym_data_token1,
    STATE(12), 1,
      sym_properName,
    STATE(74), 1,
      sym_dataCtor,
  [1625] = 3,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      aux_sym_type_variable_token1,
    STATE(85), 1,
      aux_sym_expression_repeat1,
  [1635] = 2,
    ACTIONS(316), 1,
      aux_sym_type_variable_token1,
    STATE(44), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [1643] = 3,
    ACTIONS(102), 1,
      sym__cont,
    ACTIONS(269), 1,
      anon_sym_where,
    STATE(158), 1,
      sym__classDeclBody,
  [1653] = 3,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(318), 1,
      sym__cont,
    STATE(113), 1,
      aux_sym_dataDecl_repeat2,
  [1663] = 2,
    ACTIONS(322), 1,
      anon_sym_AT,
    ACTIONS(320), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1671] = 3,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      sym__cont,
    STATE(113), 1,
      aux_sym_dataDecl_repeat2,
  [1681] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      aux_sym_expression_repeat2,
  [1691] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      aux_sym_expression_repeat2,
  [1701] = 1,
    ACTIONS(152), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1706] = 1,
    ACTIONS(74), 2,
      anon_sym_DOT,
      anon_sym_where,
  [1711] = 1,
    ACTIONS(173), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1716] = 1,
    ACTIONS(327), 2,
      sym__cont,
      anon_sym_PIPE,
  [1721] = 2,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(331), 1,
      sym__cont,
  [1728] = 2,
    ACTIONS(333), 1,
      aux_sym_data_token1,
    STATE(17), 1,
      sym_properName,
  [1735] = 2,
    ACTIONS(335), 1,
      aux_sym_data_token1,
    STATE(42), 1,
      sym_properName,
  [1742] = 2,
    ACTIONS(337), 1,
      aux_sym_type_variable_token1,
    STATE(151), 1,
      sym__ident,
  [1749] = 1,
    ACTIONS(74), 2,
      sym__end,
      sym__cont,
  [1754] = 1,
    ACTIONS(229), 2,
      sym__end,
      sym__cont,
  [1759] = 1,
    ACTIONS(229), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1764] = 1,
    ACTIONS(171), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1769] = 2,
    ACTIONS(339), 1,
      aux_sym_data_token1,
    STATE(129), 1,
      sym_properName,
  [1776] = 1,
    ACTIONS(280), 2,
      anon_sym_DOT,
      anon_sym_where,
  [1781] = 2,
    ACTIONS(335), 1,
      aux_sym_data_token1,
    STATE(43), 1,
      sym_properName,
  [1788] = 1,
    ACTIONS(142), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1793] = 1,
    ACTIONS(341), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1798] = 2,
    ACTIONS(335), 1,
      aux_sym_data_token1,
    STATE(57), 1,
      sym_properName,
  [1805] = 2,
    ACTIONS(335), 1,
      aux_sym_data_token1,
    STATE(50), 1,
      sym_properName,
  [1812] = 2,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      sym__cont,
  [1819] = 1,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1824] = 1,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1829] = 2,
    ACTIONS(339), 1,
      aux_sym_data_token1,
    STATE(82), 1,
      sym_properName,
  [1836] = 2,
    ACTIONS(347), 1,
      aux_sym_type_variable_token1,
    STATE(144), 1,
      sym__ident,
  [1843] = 1,
    ACTIONS(349), 2,
      sym__end,
      sym__cont,
  [1848] = 2,
    ACTIONS(335), 1,
      aux_sym_data_token1,
    STATE(47), 1,
      sym_properName,
  [1855] = 1,
    ACTIONS(351), 1,
      sym__cont,
  [1859] = 1,
    ACTIONS(353), 1,
      sym__cont,
  [1863] = 1,
    ACTIONS(355), 1,
      anon_sym_COLON_COLON,
  [1867] = 1,
    ACTIONS(357), 1,
      sym__cont,
  [1871] = 1,
    ACTIONS(359), 1,
      sym__cont,
  [1875] = 1,
    ACTIONS(361), 1,
      sym__cont,
  [1879] = 1,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
  [1883] = 1,
    ACTIONS(104), 1,
      sym__cont,
  [1887] = 1,
    ACTIONS(365), 1,
      sym__cont,
  [1891] = 1,
    ACTIONS(367), 1,
      anon_sym_COLON_COLON,
  [1895] = 1,
    ACTIONS(322), 1,
      anon_sym_AT,
  [1899] = 1,
    ACTIONS(369), 1,
      sym__cont,
  [1903] = 1,
    ACTIONS(371), 1,
      sym__cont,
  [1907] = 1,
    ACTIONS(373), 1,
      sym__cont,
  [1911] = 1,
    ACTIONS(375), 1,
      anon_sym_EQ,
  [1915] = 1,
    ACTIONS(373), 1,
      sym__cont,
  [1919] = 1,
    ACTIONS(271), 1,
      sym__cont,
  [1923] = 1,
    ACTIONS(377), 1,
      sym__cont,
  [1927] = 1,
    ACTIONS(314), 1,
      sym__cont,
  [1931] = 1,
    ACTIONS(345), 1,
      anon_sym_LT_EQ,
  [1935] = 1,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
  [1939] = 1,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
  [1943] = 1,
    ACTIONS(383), 1,
      sym__cont,
  [1947] = 1,
    ACTIONS(385), 1,
      sym__cont,
  [1951] = 1,
    ACTIONS(387), 1,
      sym__begin,
  [1955] = 1,
    ACTIONS(389), 1,
      anon_sym_LT_EQ,
  [1959] = 1,
    ACTIONS(102), 1,
      sym__cont,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 189,
  [SMALL_STATE(9)] = 228,
  [SMALL_STATE(10)] = 267,
  [SMALL_STATE(11)] = 306,
  [SMALL_STATE(12)] = 333,
  [SMALL_STATE(13)] = 360,
  [SMALL_STATE(14)] = 382,
  [SMALL_STATE(15)] = 399,
  [SMALL_STATE(16)] = 415,
  [SMALL_STATE(17)] = 431,
  [SMALL_STATE(18)] = 457,
  [SMALL_STATE(19)] = 483,
  [SMALL_STATE(20)] = 509,
  [SMALL_STATE(21)] = 535,
  [SMALL_STATE(22)] = 561,
  [SMALL_STATE(23)] = 587,
  [SMALL_STATE(24)] = 610,
  [SMALL_STATE(25)] = 633,
  [SMALL_STATE(26)] = 656,
  [SMALL_STATE(27)] = 679,
  [SMALL_STATE(28)] = 702,
  [SMALL_STATE(29)] = 722,
  [SMALL_STATE(30)] = 740,
  [SMALL_STATE(31)] = 755,
  [SMALL_STATE(32)] = 770,
  [SMALL_STATE(33)] = 779,
  [SMALL_STATE(34)] = 794,
  [SMALL_STATE(35)] = 809,
  [SMALL_STATE(36)] = 818,
  [SMALL_STATE(37)] = 833,
  [SMALL_STATE(38)] = 848,
  [SMALL_STATE(39)] = 859,
  [SMALL_STATE(40)] = 868,
  [SMALL_STATE(41)] = 883,
  [SMALL_STATE(42)] = 892,
  [SMALL_STATE(43)] = 907,
  [SMALL_STATE(44)] = 922,
  [SMALL_STATE(45)] = 937,
  [SMALL_STATE(46)] = 952,
  [SMALL_STATE(47)] = 967,
  [SMALL_STATE(48)] = 981,
  [SMALL_STATE(49)] = 995,
  [SMALL_STATE(50)] = 1009,
  [SMALL_STATE(51)] = 1023,
  [SMALL_STATE(52)] = 1039,
  [SMALL_STATE(53)] = 1053,
  [SMALL_STATE(54)] = 1067,
  [SMALL_STATE(55)] = 1081,
  [SMALL_STATE(56)] = 1095,
  [SMALL_STATE(57)] = 1111,
  [SMALL_STATE(58)] = 1125,
  [SMALL_STATE(59)] = 1141,
  [SMALL_STATE(60)] = 1152,
  [SMALL_STATE(61)] = 1161,
  [SMALL_STATE(62)] = 1172,
  [SMALL_STATE(63)] = 1183,
  [SMALL_STATE(64)] = 1194,
  [SMALL_STATE(65)] = 1203,
  [SMALL_STATE(66)] = 1212,
  [SMALL_STATE(67)] = 1221,
  [SMALL_STATE(68)] = 1234,
  [SMALL_STATE(69)] = 1245,
  [SMALL_STATE(70)] = 1256,
  [SMALL_STATE(71)] = 1269,
  [SMALL_STATE(72)] = 1279,
  [SMALL_STATE(73)] = 1289,
  [SMALL_STATE(74)] = 1299,
  [SMALL_STATE(75)] = 1309,
  [SMALL_STATE(76)] = 1319,
  [SMALL_STATE(77)] = 1329,
  [SMALL_STATE(78)] = 1339,
  [SMALL_STATE(79)] = 1349,
  [SMALL_STATE(80)] = 1359,
  [SMALL_STATE(81)] = 1369,
  [SMALL_STATE(82)] = 1377,
  [SMALL_STATE(83)] = 1387,
  [SMALL_STATE(84)] = 1397,
  [SMALL_STATE(85)] = 1407,
  [SMALL_STATE(86)] = 1417,
  [SMALL_STATE(87)] = 1427,
  [SMALL_STATE(88)] = 1437,
  [SMALL_STATE(89)] = 1447,
  [SMALL_STATE(90)] = 1457,
  [SMALL_STATE(91)] = 1463,
  [SMALL_STATE(92)] = 1473,
  [SMALL_STATE(93)] = 1483,
  [SMALL_STATE(94)] = 1493,
  [SMALL_STATE(95)] = 1503,
  [SMALL_STATE(96)] = 1513,
  [SMALL_STATE(97)] = 1521,
  [SMALL_STATE(98)] = 1531,
  [SMALL_STATE(99)] = 1541,
  [SMALL_STATE(100)] = 1551,
  [SMALL_STATE(101)] = 1561,
  [SMALL_STATE(102)] = 1571,
  [SMALL_STATE(103)] = 1579,
  [SMALL_STATE(104)] = 1589,
  [SMALL_STATE(105)] = 1599,
  [SMALL_STATE(106)] = 1605,
  [SMALL_STATE(107)] = 1615,
  [SMALL_STATE(108)] = 1625,
  [SMALL_STATE(109)] = 1635,
  [SMALL_STATE(110)] = 1643,
  [SMALL_STATE(111)] = 1653,
  [SMALL_STATE(112)] = 1663,
  [SMALL_STATE(113)] = 1671,
  [SMALL_STATE(114)] = 1681,
  [SMALL_STATE(115)] = 1691,
  [SMALL_STATE(116)] = 1701,
  [SMALL_STATE(117)] = 1706,
  [SMALL_STATE(118)] = 1711,
  [SMALL_STATE(119)] = 1716,
  [SMALL_STATE(120)] = 1721,
  [SMALL_STATE(121)] = 1728,
  [SMALL_STATE(122)] = 1735,
  [SMALL_STATE(123)] = 1742,
  [SMALL_STATE(124)] = 1749,
  [SMALL_STATE(125)] = 1754,
  [SMALL_STATE(126)] = 1759,
  [SMALL_STATE(127)] = 1764,
  [SMALL_STATE(128)] = 1769,
  [SMALL_STATE(129)] = 1776,
  [SMALL_STATE(130)] = 1781,
  [SMALL_STATE(131)] = 1788,
  [SMALL_STATE(132)] = 1793,
  [SMALL_STATE(133)] = 1798,
  [SMALL_STATE(134)] = 1805,
  [SMALL_STATE(135)] = 1812,
  [SMALL_STATE(136)] = 1819,
  [SMALL_STATE(137)] = 1824,
  [SMALL_STATE(138)] = 1829,
  [SMALL_STATE(139)] = 1836,
  [SMALL_STATE(140)] = 1843,
  [SMALL_STATE(141)] = 1848,
  [SMALL_STATE(142)] = 1855,
  [SMALL_STATE(143)] = 1859,
  [SMALL_STATE(144)] = 1863,
  [SMALL_STATE(145)] = 1867,
  [SMALL_STATE(146)] = 1871,
  [SMALL_STATE(147)] = 1875,
  [SMALL_STATE(148)] = 1879,
  [SMALL_STATE(149)] = 1883,
  [SMALL_STATE(150)] = 1887,
  [SMALL_STATE(151)] = 1891,
  [SMALL_STATE(152)] = 1895,
  [SMALL_STATE(153)] = 1899,
  [SMALL_STATE(154)] = 1903,
  [SMALL_STATE(155)] = 1907,
  [SMALL_STATE(156)] = 1911,
  [SMALL_STATE(157)] = 1915,
  [SMALL_STATE(158)] = 1919,
  [SMALL_STATE(159)] = 1923,
  [SMALL_STATE(160)] = 1927,
  [SMALL_STATE(161)] = 1931,
  [SMALL_STATE(162)] = 1935,
  [SMALL_STATE(163)] = 1939,
  [SMALL_STATE(164)] = 1943,
  [SMALL_STATE(165)] = 1947,
  [SMALL_STATE(166)] = 1951,
  [SMALL_STATE(167)] = 1955,
  [SMALL_STATE(168)] = 1959,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [5] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(14),
  [8] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(134),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(141),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(133),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(28),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(46),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(15),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(15),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataCtor, 2, .production_id = 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataCtor, 1, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properName, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qualProperName, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properName, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualProperName, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeAtom, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAtom, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classDeclWithDeps, 4, .production_id = 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classDeclWithoutDeps, 3, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classDeclWithDeps, 5, .production_id = 6),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classDeclWithoutDeps, 2, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dataDecl_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dataDecl_repeat1, 2), SHIFT_REPEAT(65),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(112),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(36),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2), SHIFT_REPEAT(126),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fundeps_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fundeps_repeat1, 2), SHIFT_REPEAT(49),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(66),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(62),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fundeps, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeVarBinding, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeVarBinding, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fundeps, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 5, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 4, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classDeclWithoutDeps, 4, .production_id = 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(128),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classDeclBody_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classDeclBody_repeat1, 2), SHIFT_REPEAT(139),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2), SHIFT_REPEAT(156),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(25),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__constraints_repeat1, 2), SHIFT_REPEAT(56),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__constraints_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classDeclWithDeps, 6, .production_id = 6),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 6, .production_id = 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2), SHIFT_REPEAT(91),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classDeclBody_repeat1, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classDeclBody, 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDecl, 5, .production_id = 7),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newtypeDecl, 5, .production_id = 8),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classDeclBody, 6),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classDeclWithDeps, 7, .production_id = 6),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraints, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 1, .production_id = 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classDeclWithoutDeps, 5, .production_id = 1),
  [379] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newtypeDecl, 6, .production_id = 9),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDecl, 4, .production_id = 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
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
