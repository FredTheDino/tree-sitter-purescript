#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 9

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
  sym__fundeps = 42,
  sym_fundep = 43,
  sym__constraints = 44,
  sym_constraint = 45,
  sym__type = 46,
  sym_function_definition = 47,
  sym__ident = 48,
  sym__pattern = 49,
  sym__argument = 50,
  sym_expression = 51,
  sym_properName = 52,
  sym_typeVarBinding = 53,
  sym_typeAtom = 54,
  sym__qualProperName = 55,
  sym__qualSymbol = 56,
  aux_sym_module_repeat1 = 57,
  aux_sym_module_repeat2 = 58,
  aux_sym_dataDecl_repeat1 = 59,
  aux_sym_dataDecl_repeat2 = 60,
  aux_sym_dataCtor_repeat1 = 61,
  aux_sym_classDecl_repeat1 = 62,
  aux_sym__fundeps_repeat1 = 63,
  aux_sym_fundep_repeat1 = 64,
  aux_sym__constraints_repeat1 = 65,
  aux_sym_function_definition_repeat1 = 66,
  aux_sym_expression_repeat1 = 67,
  aux_sym_expression_repeat2 = 68,
  aux_sym_expression_repeat3 = 69,
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
  [aux_sym_classDecl_repeat1] = "classDecl_repeat1",
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
  [aux_sym_classDecl_repeat1] = aux_sym_classDecl_repeat1,
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
  [aux_sym_classDecl_repeat1] = {
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
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
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
    {field_name, 3},
  [7] =
    {field_body, 4},
    {field_name, 1},
  [9] =
    {field_constructor, 3},
    {field_name, 1},
  [11] =
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
  [7] = 4,
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
  [18] = 17,
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 29,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 32,
  [71] = 71,
  [72] = 16,
  [73] = 66,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 77,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 16,
  [100] = 90,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 82,
  [108] = 108,
  [109] = 95,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 83,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 84,
  [125] = 108,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 16,
  [131] = 131,
  [132] = 37,
  [133] = 133,
  [134] = 36,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 16,
  [142] = 142,
  [143] = 143,
  [144] = 64,
  [145] = 145,
  [146] = 64,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 39,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 44,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
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
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 2},
  [21] = {.lex_state = 2, .external_lex_state = 2},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 2, .external_lex_state = 2},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 2, .external_lex_state = 2},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 2, .external_lex_state = 2},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 2, .external_lex_state = 2},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 2, .external_lex_state = 2},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 2, .external_lex_state = 2},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 2, .external_lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0, .external_lex_state = 3},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 19},
  [141] = {.lex_state = 0, .external_lex_state = 3},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 3},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 19},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 19},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 4},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 0, .external_lex_state = 4},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0, .external_lex_state = 4},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 0, .external_lex_state = 4},
  [189] = {.lex_state = 0, .external_lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 0, .external_lex_state = 4},
  [196] = {.lex_state = 0},
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
    [sym_module] = STATE(196),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    STATE(4), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    ACTIONS(7), 3,
      anon_sym_LT_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(14), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(9), 7,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [28] = 5,
    ACTIONS(5), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    STATE(2), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    ACTIONS(11), 3,
      anon_sym_LT_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(14), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(9), 7,
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
    STATE(4), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    ACTIONS(16), 3,
      anon_sym_LT_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(14), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(18), 7,
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
    STATE(15), 3,
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
    ACTIONS(21), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(27), 2,
      sym__cont,
      anon_sym_PIPE,
    STATE(7), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    STATE(15), 3,
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
  [138] = 5,
    ACTIONS(16), 2,
      sym__cont,
      anon_sym_PIPE,
    ACTIONS(29), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    STATE(7), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    STATE(15), 3,
      sym__ident,
      sym__qualProperName,
      sym__qualSymbol,
    ACTIONS(32), 7,
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
    ACTIONS(40), 1,
      anon_sym_type,
    ACTIONS(43), 1,
      anon_sym_newtype,
    ACTIONS(46), 1,
      anon_sym_class,
    ACTIONS(49), 1,
      aux_sym_type_variable_token1,
    STATE(49), 1,
      sym__ident,
    STATE(8), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(186), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [198] = 9,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_data,
    ACTIONS(56), 1,
      anon_sym_type,
    ACTIONS(58), 1,
      anon_sym_newtype,
    ACTIONS(60), 1,
      anon_sym_class,
    ACTIONS(62), 1,
      aux_sym_type_variable_token1,
    STATE(49), 1,
      sym__ident,
    STATE(8), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(186), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [231] = 9,
    ACTIONS(54), 1,
      anon_sym_data,
    ACTIONS(56), 1,
      anon_sym_type,
    ACTIONS(58), 1,
      anon_sym_newtype,
    ACTIONS(60), 1,
      anon_sym_class,
    ACTIONS(62), 1,
      aux_sym_type_variable_token1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym__ident,
    STATE(12), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(186), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [264] = 9,
    ACTIONS(54), 1,
      anon_sym_data,
    ACTIONS(56), 1,
      anon_sym_type,
    ACTIONS(58), 1,
      anon_sym_newtype,
    ACTIONS(60), 1,
      anon_sym_class,
    ACTIONS(62), 1,
      aux_sym_type_variable_token1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym__ident,
    STATE(9), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(186), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [297] = 9,
    ACTIONS(54), 1,
      anon_sym_data,
    ACTIONS(56), 1,
      anon_sym_type,
    ACTIONS(58), 1,
      anon_sym_newtype,
    ACTIONS(60), 1,
      anon_sym_class,
    ACTIONS(62), 1,
      aux_sym_type_variable_token1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym__ident,
    STATE(8), 2,
      sym__decl,
      aux_sym_module_repeat2,
    STATE(186), 5,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_classDecl,
      sym_function_definition,
  [330] = 4,
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
  [352] = 2,
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
  [369] = 2,
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
  [385] = 2,
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
  [401] = 8,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      aux_sym_expression_token1,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      sym__ident,
    STATE(73), 1,
      sym_expression,
    ACTIONS(84), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [427] = 8,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      aux_sym_expression_token1,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      sym__ident,
    STATE(66), 1,
      sym_expression,
    ACTIONS(84), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [453] = 7,
    ACTIONS(96), 1,
      anon_sym_where,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      aux_sym_type_variable_token1,
    ACTIONS(102), 1,
      sym__cont,
    STATE(64), 1,
      sym__ident,
    STATE(143), 1,
      sym__fundeps,
    STATE(21), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [476] = 7,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      aux_sym_type_variable_token1,
    ACTIONS(104), 1,
      anon_sym_where,
    ACTIONS(106), 1,
      sym__cont,
    STATE(64), 1,
      sym__ident,
    STATE(158), 1,
      sym__fundeps,
    STATE(29), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [499] = 7,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      aux_sym_type_variable_token1,
    ACTIONS(108), 1,
      anon_sym_where,
    ACTIONS(110), 1,
      sym__cont,
    STATE(64), 1,
      sym__ident,
    STATE(142), 1,
      sym__fundeps,
    STATE(29), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [522] = 7,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      aux_sym_expression_token1,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym__ident,
    STATE(67), 1,
      sym_expression,
    ACTIONS(84), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [545] = 7,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      aux_sym_expression_token1,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym__ident,
    STATE(117), 1,
      sym_expression,
    ACTIONS(84), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [568] = 7,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      aux_sym_expression_token1,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym__ident,
    STATE(160), 1,
      sym_expression,
    ACTIONS(114), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [591] = 7,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      aux_sym_expression_token1,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym__ident,
    STATE(123), 1,
      sym_expression,
    ACTIONS(84), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [614] = 7,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      aux_sym_expression_token1,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym__ident,
    STATE(153), 1,
      sym_expression,
    ACTIONS(114), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [637] = 7,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      aux_sym_type_variable_token1,
    ACTIONS(122), 1,
      anon_sym_where,
    ACTIONS(124), 1,
      sym__cont,
    STATE(64), 1,
      sym__ident,
    STATE(128), 1,
      sym__fundeps,
    STATE(20), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [660] = 6,
    ACTIONS(126), 1,
      aux_sym_data_token1,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      aux_sym__qualProperName_token1,
    STATE(3), 1,
      sym__qualProperName,
    STATE(27), 1,
      sym_properName,
    STATE(184), 2,
      sym__constraints,
      sym_constraint,
  [680] = 5,
    ACTIONS(132), 1,
      anon_sym_where,
    ACTIONS(136), 1,
      aux_sym_type_variable_token1,
    STATE(64), 1,
      sym__ident,
    ACTIONS(134), 2,
      sym__cont,
      anon_sym_PIPE,
    STATE(29), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [698] = 4,
    ACTIONS(139), 1,
      aux_sym_data_token1,
    ACTIONS(141), 1,
      aux_sym_type_variable_token1,
    STATE(144), 1,
      sym__ident,
    STATE(116), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [713] = 4,
    ACTIONS(143), 1,
      aux_sym_data_token1,
    ACTIONS(145), 1,
      aux_sym_type_variable_token1,
    STATE(64), 1,
      sym__ident,
    STATE(192), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [728] = 4,
    ACTIONS(147), 1,
      anon_sym_where,
    ACTIONS(151), 1,
      aux_sym_type_variable_token1,
    ACTIONS(149), 2,
      sym__cont,
      anon_sym_COMMA,
    STATE(32), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [743] = 4,
    ACTIONS(139), 1,
      aux_sym_data_token1,
    ACTIONS(141), 1,
      aux_sym_type_variable_token1,
    STATE(144), 1,
      sym__ident,
    STATE(96), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [758] = 4,
    ACTIONS(143), 1,
      aux_sym_data_token1,
    ACTIONS(145), 1,
      aux_sym_type_variable_token1,
    STATE(64), 1,
      sym__ident,
    STATE(168), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [773] = 4,
    ACTIONS(154), 1,
      anon_sym_where,
    ACTIONS(158), 1,
      aux_sym_type_variable_token1,
    ACTIONS(156), 2,
      sym__cont,
      anon_sym_COMMA,
    STATE(32), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [788] = 1,
    ACTIONS(160), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [797] = 1,
    ACTIONS(162), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [806] = 4,
    ACTIONS(143), 1,
      aux_sym_data_token1,
    ACTIONS(145), 1,
      aux_sym_type_variable_token1,
    STATE(64), 1,
      sym__ident,
    STATE(176), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [821] = 1,
    ACTIONS(164), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [830] = 4,
    ACTIONS(166), 1,
      anon_sym_EQ,
    ACTIONS(168), 1,
      aux_sym_type_variable_token1,
    STATE(97), 1,
      sym__ident,
    STATE(50), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [845] = 4,
    ACTIONS(139), 1,
      aux_sym_data_token1,
    ACTIONS(141), 1,
      aux_sym_type_variable_token1,
    STATE(144), 1,
      sym__ident,
    STATE(85), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [860] = 4,
    ACTIONS(143), 1,
      aux_sym_data_token1,
    ACTIONS(145), 1,
      aux_sym_type_variable_token1,
    STATE(64), 1,
      sym__ident,
    STATE(165), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [875] = 4,
    ACTIONS(139), 1,
      aux_sym_data_token1,
    ACTIONS(141), 1,
      aux_sym_type_variable_token1,
    STATE(144), 1,
      sym__ident,
    STATE(121), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [890] = 1,
    ACTIONS(170), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [899] = 4,
    ACTIONS(139), 1,
      aux_sym_data_token1,
    ACTIONS(141), 1,
      aux_sym_type_variable_token1,
    STATE(144), 1,
      sym__ident,
    STATE(155), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [914] = 4,
    ACTIONS(158), 1,
      aux_sym_type_variable_token1,
    ACTIONS(172), 1,
      anon_sym_where,
    ACTIONS(174), 2,
      sym__cont,
      anon_sym_COMMA,
    STATE(32), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [929] = 2,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 5,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      anon_sym_class,
      aux_sym_type_variable_token1,
  [940] = 4,
    ACTIONS(139), 1,
      aux_sym_data_token1,
    ACTIONS(141), 1,
      aux_sym_type_variable_token1,
    STATE(144), 1,
      sym__ident,
    STATE(87), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [955] = 4,
    ACTIONS(168), 1,
      aux_sym_type_variable_token1,
    ACTIONS(180), 1,
      anon_sym_EQ,
    STATE(97), 1,
      sym__ident,
    STATE(40), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [970] = 4,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(184), 1,
      aux_sym_type_variable_token1,
    STATE(97), 1,
      sym__ident,
    STATE(50), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [985] = 4,
    ACTIONS(139), 1,
      aux_sym_data_token1,
    ACTIONS(141), 1,
      aux_sym_type_variable_token1,
    STATE(144), 1,
      sym__ident,
    STATE(114), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [1000] = 4,
    ACTIONS(187), 1,
      anon_sym_EQ,
    ACTIONS(189), 1,
      aux_sym_type_variable_token1,
    STATE(146), 1,
      sym__ident,
    STATE(62), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1014] = 5,
    ACTIONS(130), 1,
      aux_sym__qualProperName_token1,
    ACTIONS(191), 1,
      aux_sym_data_token1,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__qualProperName,
    STATE(94), 1,
      sym_constraint,
  [1030] = 4,
    ACTIONS(189), 1,
      aux_sym_type_variable_token1,
    ACTIONS(195), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym__ident,
    STATE(52), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1044] = 4,
    ACTIONS(197), 1,
      anon_sym_DASH_GT,
    ACTIONS(199), 1,
      aux_sym_type_variable_token1,
    STATE(113), 1,
      sym_fundep,
    STATE(75), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [1058] = 4,
    ACTIONS(197), 1,
      anon_sym_DASH_GT,
    ACTIONS(199), 1,
      aux_sym_type_variable_token1,
    STATE(74), 1,
      sym_fundep,
    STATE(75), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [1072] = 4,
    ACTIONS(189), 1,
      aux_sym_type_variable_token1,
    ACTIONS(201), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym__ident,
    STATE(63), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1086] = 4,
    ACTIONS(189), 1,
      aux_sym_type_variable_token1,
    ACTIONS(203), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym__ident,
    STATE(60), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1100] = 5,
    ACTIONS(130), 1,
      aux_sym__qualProperName_token1,
    ACTIONS(191), 1,
      aux_sym_data_token1,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__qualProperName,
    STATE(174), 1,
      sym_constraint,
  [1116] = 4,
    ACTIONS(189), 1,
      aux_sym_type_variable_token1,
    ACTIONS(205), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym__ident,
    STATE(62), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1130] = 5,
    ACTIONS(130), 1,
      aux_sym__qualProperName_token1,
    ACTIONS(191), 1,
      aux_sym_data_token1,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__qualProperName,
    STATE(152), 1,
      sym_constraint,
  [1146] = 4,
    ACTIONS(134), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      aux_sym_type_variable_token1,
    STATE(146), 1,
      sym__ident,
    STATE(62), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1160] = 4,
    ACTIONS(189), 1,
      aux_sym_type_variable_token1,
    ACTIONS(210), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym__ident,
    STATE(62), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [1174] = 2,
    ACTIONS(212), 2,
      anon_sym_where,
      aux_sym_type_variable_token1,
    ACTIONS(214), 2,
      sym__cont,
      anon_sym_PIPE,
  [1183] = 2,
    ACTIONS(218), 1,
      anon_sym_COLON,
    ACTIONS(216), 3,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [1192] = 4,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym_expression_repeat2,
  [1205] = 2,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 3,
      anon_sym_RPAREN,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [1214] = 3,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym__fundeps_repeat1,
    ACTIONS(228), 2,
      sym__cont,
      anon_sym_where,
  [1225] = 3,
    ACTIONS(235), 1,
      aux_sym_type_variable_token1,
    STATE(69), 1,
      aux_sym_expression_repeat1,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1236] = 3,
    ACTIONS(149), 1,
      anon_sym_DASH_GT,
    ACTIONS(238), 1,
      aux_sym_type_variable_token1,
    STATE(70), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [1247] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym__fundeps_repeat1,
    ACTIONS(241), 2,
      sym__cont,
      anon_sym_where,
  [1258] = 2,
    ACTIONS(70), 2,
      anon_sym_where,
      aux_sym_type_variable_token1,
    ACTIONS(74), 2,
      sym__cont,
      anon_sym_PIPE,
  [1267] = 4,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym_expression_repeat2,
  [1280] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym__fundeps_repeat1,
    ACTIONS(247), 2,
      sym__cont,
      anon_sym_where,
  [1291] = 3,
    ACTIONS(249), 1,
      anon_sym_DASH_GT,
    ACTIONS(251), 1,
      aux_sym_type_variable_token1,
    STATE(70), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [1302] = 3,
    ACTIONS(143), 1,
      aux_sym_data_token1,
    STATE(5), 1,
      sym_properName,
    STATE(79), 1,
      sym_dataCtor,
  [1312] = 3,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      aux_sym_type_variable_token1,
    STATE(115), 1,
      aux_sym_expression_repeat1,
  [1322] = 3,
    ACTIONS(255), 1,
      sym__end,
    ACTIONS(257), 1,
      sym__cont,
    STATE(93), 1,
      aux_sym_classDecl_repeat1,
  [1332] = 3,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      sym__cont,
    STATE(89), 1,
      aux_sym_dataDecl_repeat2,
  [1342] = 3,
    ACTIONS(263), 1,
      aux_sym_type_variable_token1,
    STATE(161), 1,
      sym__pattern,
    STATE(162), 1,
      sym__ident,
  [1352] = 3,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      aux_sym_type_variable_token1,
    STATE(83), 1,
      aux_sym_expression_repeat1,
  [1362] = 3,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      aux_sym_type_variable_token1,
    STATE(69), 1,
      aux_sym_expression_repeat1,
  [1372] = 3,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      aux_sym_type_variable_token1,
    STATE(69), 1,
      aux_sym_expression_repeat1,
  [1382] = 3,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 1,
      aux_sym_type_variable_token1,
    STATE(109), 1,
      aux_sym_expression_repeat3,
  [1392] = 3,
    ACTIONS(257), 1,
      sym__cont,
    ACTIONS(267), 1,
      sym__end,
    STATE(102), 1,
      aux_sym_classDecl_repeat1,
  [1402] = 3,
    ACTIONS(257), 1,
      sym__cont,
    ACTIONS(267), 1,
      sym__end,
    STATE(93), 1,
      aux_sym_classDecl_repeat1,
  [1412] = 3,
    ACTIONS(257), 1,
      sym__cont,
    ACTIONS(269), 1,
      sym__end,
    STATE(78), 1,
      aux_sym_classDecl_repeat1,
  [1422] = 3,
    ACTIONS(143), 1,
      aux_sym_data_token1,
    STATE(5), 1,
      sym_properName,
    STATE(131), 1,
      sym_dataCtor,
  [1432] = 3,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      sym__cont,
    STATE(110), 1,
      aux_sym_dataDecl_repeat2,
  [1442] = 3,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      aux_sym_type_variable_token1,
    STATE(82), 1,
      aux_sym_expression_repeat1,
  [1452] = 3,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      sym__cont,
    STATE(111), 1,
      aux_sym_dataDecl_repeat2,
  [1462] = 3,
    ACTIONS(257), 1,
      sym__cont,
    ACTIONS(269), 1,
      sym__end,
    STATE(93), 1,
      aux_sym_classDecl_repeat1,
  [1472] = 3,
    ACTIONS(273), 1,
      sym__end,
    ACTIONS(275), 1,
      sym__cont,
    STATE(93), 1,
      aux_sym_classDecl_repeat1,
  [1482] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym__constraints_repeat1,
  [1492] = 3,
    ACTIONS(265), 1,
      aux_sym_type_variable_token1,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_expression_repeat3,
  [1502] = 3,
    ACTIONS(257), 1,
      sym__cont,
    ACTIONS(284), 1,
      sym__end,
    STATE(86), 1,
      aux_sym_classDecl_repeat1,
  [1512] = 2,
    ACTIONS(288), 1,
      anon_sym_AT,
    ACTIONS(286), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1520] = 3,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym__constraints_repeat1,
  [1530] = 1,
    ACTIONS(74), 3,
      aux_sym_data_token1,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1536] = 3,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      aux_sym_type_variable_token1,
    STATE(107), 1,
      aux_sym_expression_repeat1,
  [1546] = 2,
    ACTIONS(295), 1,
      aux_sym_type_variable_token1,
    STATE(46), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [1554] = 3,
    ACTIONS(257), 1,
      sym__cont,
    ACTIONS(297), 1,
      sym__end,
    STATE(93), 1,
      aux_sym_classDecl_repeat1,
  [1564] = 2,
    ACTIONS(299), 1,
      aux_sym_type_variable_token1,
    STATE(35), 2,
      sym__ident,
      aux_sym_fundep_repeat1,
  [1572] = 3,
    ACTIONS(143), 1,
      aux_sym_data_token1,
    STATE(5), 1,
      sym_properName,
    STATE(91), 1,
      sym_dataCtor,
  [1582] = 3,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(304), 1,
      anon_sym_where,
    STATE(105), 1,
      aux_sym_module_repeat1,
  [1592] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym__constraints_repeat1,
  [1602] = 3,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      aux_sym_type_variable_token1,
    STATE(69), 1,
      aux_sym_expression_repeat1,
  [1612] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      aux_sym_expression_repeat2,
  [1622] = 3,
    ACTIONS(265), 1,
      aux_sym_type_variable_token1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_expression_repeat3,
  [1632] = 3,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    ACTIONS(313), 1,
      sym__cont,
    STATE(110), 1,
      aux_sym_dataDecl_repeat2,
  [1642] = 3,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(315), 1,
      sym__cont,
    STATE(110), 1,
      aux_sym_dataDecl_repeat2,
  [1652] = 3,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_where,
    STATE(105), 1,
      aux_sym_module_repeat1,
  [1662] = 1,
    ACTIONS(228), 3,
      sym__cont,
      anon_sym_where,
      anon_sym_COMMA,
  [1668] = 3,
    ACTIONS(257), 1,
      sym__cont,
    ACTIONS(297), 1,
      sym__end,
    STATE(119), 1,
      aux_sym_classDecl_repeat1,
  [1678] = 3,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      aux_sym_type_variable_token1,
    STATE(69), 1,
      aux_sym_expression_repeat1,
  [1688] = 3,
    ACTIONS(257), 1,
      sym__cont,
    ACTIONS(321), 1,
      sym__end,
    STATE(92), 1,
      aux_sym_classDecl_repeat1,
  [1698] = 2,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1706] = 3,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_expression_repeat2,
  [1716] = 3,
    ACTIONS(257), 1,
      sym__cont,
    ACTIONS(328), 1,
      sym__end,
    STATE(93), 1,
      aux_sym_classDecl_repeat1,
  [1726] = 3,
    ACTIONS(330), 1,
      aux_sym_type_variable_token1,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_expression_repeat3,
  [1736] = 3,
    ACTIONS(257), 1,
      sym__cont,
    ACTIONS(335), 1,
      sym__end,
    STATE(126), 1,
      aux_sym_classDecl_repeat1,
  [1746] = 3,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(337), 1,
      anon_sym_where,
    STATE(112), 1,
      aux_sym_module_repeat1,
  [1756] = 2,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(339), 2,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [1764] = 3,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 1,
      aux_sym_type_variable_token1,
    STATE(95), 1,
      aux_sym_expression_repeat3,
  [1774] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      aux_sym_expression_repeat2,
  [1784] = 3,
    ACTIONS(257), 1,
      sym__cont,
    ACTIONS(321), 1,
      sym__end,
    STATE(93), 1,
      aux_sym_classDecl_repeat1,
  [1794] = 2,
    ACTIONS(341), 1,
      aux_sym_type_variable_token1,
    STATE(175), 1,
      sym__ident,
  [1801] = 2,
    ACTIONS(106), 1,
      sym__cont,
    ACTIONS(343), 1,
      anon_sym_where,
  [1808] = 2,
    ACTIONS(345), 1,
      aux_sym_type_variable_token1,
    STATE(187), 1,
      sym__ident,
  [1815] = 1,
    ACTIONS(74), 2,
      anon_sym_DOT,
      anon_sym_where,
  [1820] = 1,
    ACTIONS(313), 2,
      sym__cont,
      anon_sym_PIPE,
  [1825] = 1,
    ACTIONS(162), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1830] = 2,
    ACTIONS(347), 1,
      aux_sym_data_token1,
    STATE(135), 1,
      sym_properName,
  [1837] = 1,
    ACTIONS(160), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1842] = 1,
    ACTIONS(304), 2,
      anon_sym_DOT,
      anon_sym_where,
  [1847] = 2,
    ACTIONS(349), 1,
      aux_sym_data_token1,
    STATE(54), 1,
      sym_properName,
  [1854] = 2,
    ACTIONS(351), 1,
      aux_sym_type_variable_token1,
    STATE(185), 1,
      sym__ident,
  [1861] = 2,
    ACTIONS(349), 1,
      aux_sym_data_token1,
    STATE(57), 1,
      sym_properName,
  [1868] = 2,
    ACTIONS(353), 1,
      aux_sym_type_variable_token1,
    STATE(190), 1,
      sym__ident,
  [1875] = 2,
    ACTIONS(349), 1,
      aux_sym_data_token1,
    STATE(58), 1,
      sym_properName,
  [1882] = 1,
    ACTIONS(74), 2,
      sym__end,
      sym__cont,
  [1887] = 2,
    ACTIONS(355), 1,
      anon_sym_where,
    ACTIONS(357), 1,
      sym__cont,
  [1894] = 2,
    ACTIONS(110), 1,
      sym__cont,
    ACTIONS(359), 1,
      anon_sym_where,
  [1901] = 1,
    ACTIONS(214), 2,
      sym__end,
      sym__cont,
  [1906] = 2,
    ACTIONS(361), 1,
      aux_sym_type_variable_token1,
    STATE(177), 1,
      sym__ident,
  [1913] = 1,
    ACTIONS(214), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1918] = 2,
    ACTIONS(349), 1,
      aux_sym_data_token1,
    STATE(34), 1,
      sym_properName,
  [1925] = 2,
    ACTIONS(363), 1,
      aux_sym_type_variable_token1,
    STATE(179), 1,
      sym__ident,
  [1932] = 2,
    ACTIONS(365), 1,
      aux_sym_data_token1,
    STATE(19), 1,
      sym_properName,
  [1939] = 2,
    ACTIONS(347), 1,
      aux_sym_data_token1,
    STATE(122), 1,
      sym_properName,
  [1946] = 1,
    ACTIONS(164), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1951] = 1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1956] = 2,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      sym__cont,
  [1963] = 2,
    ACTIONS(349), 1,
      aux_sym_data_token1,
    STATE(31), 1,
      sym_properName,
  [1970] = 1,
    ACTIONS(371), 2,
      sym__end,
      sym__cont,
  [1975] = 1,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1980] = 2,
    ACTIONS(375), 1,
      aux_sym_type_variable_token1,
    STATE(194), 1,
      sym__ident,
  [1987] = 2,
    ACTIONS(377), 1,
      anon_sym_where,
    ACTIONS(379), 1,
      sym__cont,
  [1994] = 1,
    ACTIONS(170), 2,
      sym__cont,
      anon_sym_LBRACE,
  [1999] = 2,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      sym__cont,
  [2006] = 1,
    ACTIONS(383), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [2011] = 1,
    ACTIONS(288), 1,
      anon_sym_AT,
  [2015] = 1,
    ACTIONS(385), 1,
      sym__cont,
  [2019] = 1,
    ACTIONS(387), 1,
      sym__cont,
  [2023] = 1,
    ACTIONS(389), 1,
      sym__cont,
  [2027] = 1,
    ACTIONS(391), 1,
      sym__cont,
  [2031] = 1,
    ACTIONS(393), 1,
      sym__begin,
  [2035] = 1,
    ACTIONS(395), 1,
      sym__cont,
  [2039] = 1,
    ACTIONS(397), 1,
      sym__cont,
  [2043] = 1,
    ACTIONS(399), 1,
      sym__cont,
  [2047] = 1,
    ACTIONS(401), 1,
      sym__cont,
  [2051] = 1,
    ACTIONS(373), 1,
      anon_sym_LT_EQ,
  [2055] = 1,
    ACTIONS(403), 1,
      sym__cont,
  [2059] = 1,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [2063] = 1,
    ACTIONS(407), 1,
      anon_sym_COLON_COLON,
  [2067] = 1,
    ACTIONS(409), 1,
      sym__cont,
  [2071] = 1,
    ACTIONS(411), 1,
      anon_sym_COLON_COLON,
  [2075] = 1,
    ACTIONS(413), 1,
      anon_sym_LT_EQ,
  [2079] = 1,
    ACTIONS(415), 1,
      anon_sym_COLON_COLON,
  [2083] = 1,
    ACTIONS(417), 1,
      sym__begin,
  [2087] = 1,
    ACTIONS(419), 1,
      anon_sym_EQ,
  [2091] = 1,
    ACTIONS(421), 1,
      sym__begin,
  [2095] = 1,
    ACTIONS(423), 1,
      sym__cont,
  [2099] = 1,
    ACTIONS(425), 1,
      anon_sym_LT_EQ,
  [2103] = 1,
    ACTIONS(427), 1,
      anon_sym_COLON_COLON,
  [2107] = 1,
    ACTIONS(429), 1,
      sym__cont,
  [2111] = 1,
    ACTIONS(431), 1,
      anon_sym_COLON_COLON,
  [2115] = 1,
    ACTIONS(433), 1,
      sym__begin,
  [2119] = 1,
    ACTIONS(435), 1,
      sym__begin,
  [2123] = 1,
    ACTIONS(437), 1,
      anon_sym_COLON_COLON,
  [2127] = 1,
    ACTIONS(439), 1,
      sym__cont,
  [2131] = 1,
    ACTIONS(441), 1,
      sym__cont,
  [2135] = 1,
    ACTIONS(443), 1,
      sym__cont,
  [2139] = 1,
    ACTIONS(445), 1,
      anon_sym_COLON_COLON,
  [2143] = 1,
    ACTIONS(447), 1,
      sym__begin,
  [2147] = 1,
    ACTIONS(449), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(14)] = 352,
  [SMALL_STATE(15)] = 369,
  [SMALL_STATE(16)] = 385,
  [SMALL_STATE(17)] = 401,
  [SMALL_STATE(18)] = 427,
  [SMALL_STATE(19)] = 453,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 499,
  [SMALL_STATE(22)] = 522,
  [SMALL_STATE(23)] = 545,
  [SMALL_STATE(24)] = 568,
  [SMALL_STATE(25)] = 591,
  [SMALL_STATE(26)] = 614,
  [SMALL_STATE(27)] = 637,
  [SMALL_STATE(28)] = 660,
  [SMALL_STATE(29)] = 680,
  [SMALL_STATE(30)] = 698,
  [SMALL_STATE(31)] = 713,
  [SMALL_STATE(32)] = 728,
  [SMALL_STATE(33)] = 743,
  [SMALL_STATE(34)] = 758,
  [SMALL_STATE(35)] = 773,
  [SMALL_STATE(36)] = 788,
  [SMALL_STATE(37)] = 797,
  [SMALL_STATE(38)] = 806,
  [SMALL_STATE(39)] = 821,
  [SMALL_STATE(40)] = 830,
  [SMALL_STATE(41)] = 845,
  [SMALL_STATE(42)] = 860,
  [SMALL_STATE(43)] = 875,
  [SMALL_STATE(44)] = 890,
  [SMALL_STATE(45)] = 899,
  [SMALL_STATE(46)] = 914,
  [SMALL_STATE(47)] = 929,
  [SMALL_STATE(48)] = 940,
  [SMALL_STATE(49)] = 955,
  [SMALL_STATE(50)] = 970,
  [SMALL_STATE(51)] = 985,
  [SMALL_STATE(52)] = 1000,
  [SMALL_STATE(53)] = 1014,
  [SMALL_STATE(54)] = 1030,
  [SMALL_STATE(55)] = 1044,
  [SMALL_STATE(56)] = 1058,
  [SMALL_STATE(57)] = 1072,
  [SMALL_STATE(58)] = 1086,
  [SMALL_STATE(59)] = 1100,
  [SMALL_STATE(60)] = 1116,
  [SMALL_STATE(61)] = 1130,
  [SMALL_STATE(62)] = 1146,
  [SMALL_STATE(63)] = 1160,
  [SMALL_STATE(64)] = 1174,
  [SMALL_STATE(65)] = 1183,
  [SMALL_STATE(66)] = 1192,
  [SMALL_STATE(67)] = 1205,
  [SMALL_STATE(68)] = 1214,
  [SMALL_STATE(69)] = 1225,
  [SMALL_STATE(70)] = 1236,
  [SMALL_STATE(71)] = 1247,
  [SMALL_STATE(72)] = 1258,
  [SMALL_STATE(73)] = 1267,
  [SMALL_STATE(74)] = 1280,
  [SMALL_STATE(75)] = 1291,
  [SMALL_STATE(76)] = 1302,
  [SMALL_STATE(77)] = 1312,
  [SMALL_STATE(78)] = 1322,
  [SMALL_STATE(79)] = 1332,
  [SMALL_STATE(80)] = 1342,
  [SMALL_STATE(81)] = 1352,
  [SMALL_STATE(82)] = 1362,
  [SMALL_STATE(83)] = 1372,
  [SMALL_STATE(84)] = 1382,
  [SMALL_STATE(85)] = 1392,
  [SMALL_STATE(86)] = 1402,
  [SMALL_STATE(87)] = 1412,
  [SMALL_STATE(88)] = 1422,
  [SMALL_STATE(89)] = 1432,
  [SMALL_STATE(90)] = 1442,
  [SMALL_STATE(91)] = 1452,
  [SMALL_STATE(92)] = 1462,
  [SMALL_STATE(93)] = 1472,
  [SMALL_STATE(94)] = 1482,
  [SMALL_STATE(95)] = 1492,
  [SMALL_STATE(96)] = 1502,
  [SMALL_STATE(97)] = 1512,
  [SMALL_STATE(98)] = 1520,
  [SMALL_STATE(99)] = 1530,
  [SMALL_STATE(100)] = 1536,
  [SMALL_STATE(101)] = 1546,
  [SMALL_STATE(102)] = 1554,
  [SMALL_STATE(103)] = 1564,
  [SMALL_STATE(104)] = 1572,
  [SMALL_STATE(105)] = 1582,
  [SMALL_STATE(106)] = 1592,
  [SMALL_STATE(107)] = 1602,
  [SMALL_STATE(108)] = 1612,
  [SMALL_STATE(109)] = 1622,
  [SMALL_STATE(110)] = 1632,
  [SMALL_STATE(111)] = 1642,
  [SMALL_STATE(112)] = 1652,
  [SMALL_STATE(113)] = 1662,
  [SMALL_STATE(114)] = 1668,
  [SMALL_STATE(115)] = 1678,
  [SMALL_STATE(116)] = 1688,
  [SMALL_STATE(117)] = 1698,
  [SMALL_STATE(118)] = 1706,
  [SMALL_STATE(119)] = 1716,
  [SMALL_STATE(120)] = 1726,
  [SMALL_STATE(121)] = 1736,
  [SMALL_STATE(122)] = 1746,
  [SMALL_STATE(123)] = 1756,
  [SMALL_STATE(124)] = 1764,
  [SMALL_STATE(125)] = 1774,
  [SMALL_STATE(126)] = 1784,
  [SMALL_STATE(127)] = 1794,
  [SMALL_STATE(128)] = 1801,
  [SMALL_STATE(129)] = 1808,
  [SMALL_STATE(130)] = 1815,
  [SMALL_STATE(131)] = 1820,
  [SMALL_STATE(132)] = 1825,
  [SMALL_STATE(133)] = 1830,
  [SMALL_STATE(134)] = 1837,
  [SMALL_STATE(135)] = 1842,
  [SMALL_STATE(136)] = 1847,
  [SMALL_STATE(137)] = 1854,
  [SMALL_STATE(138)] = 1861,
  [SMALL_STATE(139)] = 1868,
  [SMALL_STATE(140)] = 1875,
  [SMALL_STATE(141)] = 1882,
  [SMALL_STATE(142)] = 1887,
  [SMALL_STATE(143)] = 1894,
  [SMALL_STATE(144)] = 1901,
  [SMALL_STATE(145)] = 1906,
  [SMALL_STATE(146)] = 1913,
  [SMALL_STATE(147)] = 1918,
  [SMALL_STATE(148)] = 1925,
  [SMALL_STATE(149)] = 1932,
  [SMALL_STATE(150)] = 1939,
  [SMALL_STATE(151)] = 1946,
  [SMALL_STATE(152)] = 1951,
  [SMALL_STATE(153)] = 1956,
  [SMALL_STATE(154)] = 1963,
  [SMALL_STATE(155)] = 1970,
  [SMALL_STATE(156)] = 1975,
  [SMALL_STATE(157)] = 1980,
  [SMALL_STATE(158)] = 1987,
  [SMALL_STATE(159)] = 1994,
  [SMALL_STATE(160)] = 1999,
  [SMALL_STATE(161)] = 2006,
  [SMALL_STATE(162)] = 2011,
  [SMALL_STATE(163)] = 2015,
  [SMALL_STATE(164)] = 2019,
  [SMALL_STATE(165)] = 2023,
  [SMALL_STATE(166)] = 2027,
  [SMALL_STATE(167)] = 2031,
  [SMALL_STATE(168)] = 2035,
  [SMALL_STATE(169)] = 2039,
  [SMALL_STATE(170)] = 2043,
  [SMALL_STATE(171)] = 2047,
  [SMALL_STATE(172)] = 2051,
  [SMALL_STATE(173)] = 2055,
  [SMALL_STATE(174)] = 2059,
  [SMALL_STATE(175)] = 2063,
  [SMALL_STATE(176)] = 2067,
  [SMALL_STATE(177)] = 2071,
  [SMALL_STATE(178)] = 2075,
  [SMALL_STATE(179)] = 2079,
  [SMALL_STATE(180)] = 2083,
  [SMALL_STATE(181)] = 2087,
  [SMALL_STATE(182)] = 2091,
  [SMALL_STATE(183)] = 2095,
  [SMALL_STATE(184)] = 2099,
  [SMALL_STATE(185)] = 2103,
  [SMALL_STATE(186)] = 2107,
  [SMALL_STATE(187)] = 2111,
  [SMALL_STATE(188)] = 2115,
  [SMALL_STATE(189)] = 2119,
  [SMALL_STATE(190)] = 2123,
  [SMALL_STATE(191)] = 2127,
  [SMALL_STATE(192)] = 2131,
  [SMALL_STATE(193)] = 2135,
  [SMALL_STATE(194)] = 2139,
  [SMALL_STATE(195)] = 2143,
  [SMALL_STATE(196)] = 2147,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(14),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataCtor, 1, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataCtor, 2, .production_id = 3),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(15),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(136),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(138),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(140),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(49),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properName, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qualProperName, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properName, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualProperName, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeAtom, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAtom, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 4, .production_id = 5),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 3, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 5, .production_id = 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 2, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dataDecl_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dataDecl_repeat1, 2), SHIFT_REPEAT(64),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(32),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(97),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2), SHIFT_REPEAT(146),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeVarBinding, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeVarBinding, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fundeps_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fundeps_repeat1, 2), SHIFT_REPEAT(55),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(65),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(70),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fundeps, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fundeps, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 4, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 5, .production_id = 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classDecl_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classDecl_repeat1, 2), SHIFT_REPEAT(127),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__constraints_repeat1, 2), SHIFT_REPEAT(61),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__constraints_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(133),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2), SHIFT_REPEAT(88),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 6, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(23),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2), SHIFT_REPEAT(181),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 6, .production_id = 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classDecl_repeat1, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 4, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 10, .production_id = 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 10, .production_id = 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDecl, 5, .production_id = 6),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 11, .production_id = 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newtypeDecl, 5, .production_id = 7),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 9, .production_id = 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 11, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 12, .production_id = 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 13, .production_id = 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDecl, 4, .production_id = 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraints, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 8, .production_id = 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newtypeDecl, 6, .production_id = 8),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [449] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
