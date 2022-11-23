#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  aux_sym_type_variable_token1 = 10,
  anon_sym_AT = 11,
  aux_sym_expression_token1 = 12,
  aux_sym_expression_token2 = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LPAREN = 16,
  anon_sym_COLON = 17,
  anon_sym_RPAREN = 18,
  anon_sym_LBRACK = 19,
  anon_sym_COMMA = 20,
  anon_sym_RBRACK = 21,
  anon_sym__ = 22,
  aux_sym_typeAtom_token1 = 23,
  aux_sym__qualProperName_token1 = 24,
  aux_sym__qualSymbol_token1 = 25,
  aux_sym__qualSymbol_token2 = 26,
  anon_sym_LPAREN_DOT_DOT_RPAREN = 27,
  sym_begin = 28,
  sym_end = 29,
  sym_cont = 30,
  sym_module = 31,
  sym__decl = 32,
  sym_dataDecl = 33,
  sym_dataCtor = 34,
  sym_typeDecl = 35,
  sym_newtypeDecl = 36,
  sym__type = 37,
  sym_function_definition = 38,
  sym__ident = 39,
  sym__pattern = 40,
  sym__argument = 41,
  sym_expression = 42,
  sym_properName = 43,
  sym_typeVarBinding = 44,
  sym_typeAtom = 45,
  sym__qualProperName = 46,
  sym__qualSymbol = 47,
  aux_sym_module_repeat1 = 48,
  aux_sym_module_repeat2 = 49,
  aux_sym_dataDecl_repeat1 = 50,
  aux_sym_dataDecl_repeat2 = 51,
  aux_sym_dataCtor_repeat1 = 52,
  aux_sym_function_definition_repeat1 = 53,
  aux_sym_expression_repeat1 = 54,
  aux_sym_expression_repeat2 = 55,
  aux_sym_expression_repeat3 = 56,
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
  [aux_sym_type_variable_token1] = "type_variable_token1",
  [anon_sym_AT] = "@",
  [aux_sym_expression_token1] = "expression_token1",
  [aux_sym_expression_token2] = "expression_token2",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym__] = "_",
  [aux_sym_typeAtom_token1] = "typeAtom_token1",
  [aux_sym__qualProperName_token1] = "_qualProperName_token1",
  [aux_sym__qualSymbol_token1] = "_qualSymbol_token1",
  [aux_sym__qualSymbol_token2] = "_qualSymbol_token2",
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = "(..)",
  [sym_begin] = "begin",
  [sym_end] = "end",
  [sym_cont] = "cont",
  [sym_module] = "module",
  [sym__decl] = "_decl",
  [sym_dataDecl] = "dataDecl",
  [sym_dataCtor] = "dataCtor",
  [sym_typeDecl] = "typeDecl",
  [sym_newtypeDecl] = "newtypeDecl",
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
  [aux_sym_type_variable_token1] = aux_sym_type_variable_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [aux_sym_expression_token2] = aux_sym_expression_token2,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym__] = anon_sym__,
  [aux_sym_typeAtom_token1] = aux_sym_typeAtom_token1,
  [aux_sym__qualProperName_token1] = aux_sym__qualProperName_token1,
  [aux_sym__qualSymbol_token1] = aux_sym__qualSymbol_token1,
  [aux_sym__qualSymbol_token2] = aux_sym__qualSymbol_token2,
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = anon_sym_LPAREN_DOT_DOT_RPAREN,
  [sym_begin] = sym_begin,
  [sym_end] = sym_end,
  [sym_cont] = sym_cont,
  [sym_module] = sym_module,
  [sym__decl] = sym__decl,
  [sym_dataDecl] = sym_dataDecl,
  [sym_dataCtor] = sym_dataCtor,
  [sym_typeDecl] = sym_typeDecl,
  [sym_newtypeDecl] = sym_newtypeDecl,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_cont] = {
    .visible = true,
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
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
  [34] = 10,
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
  [48] = 21,
  [49] = 18,
  [50] = 50,
  [51] = 17,
  [52] = 16,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 53,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 59,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 63,
  [73] = 57,
  [74] = 62,
  [75] = 70,
  [76] = 71,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 66,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 10,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 32,
  [95] = 95,
  [96] = 96,
  [97] = 10,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(77);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(91);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 17:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_module);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_where);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_data);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_type);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'p') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'w') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'y') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'y') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_expression_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_typeAtom_token1);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(83);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(25);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'd') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'h') ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'l') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'o') ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'p') ADVANCE(73);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'p') ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'r') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 't') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 't') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'u') ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'w') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'y') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'y') ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 1, .external_lex_state = 2},
  [4] = {.lex_state = 1, .external_lex_state = 2},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
};

enum {
  ts_external_token_begin = 0,
  ts_external_token_end = 1,
  ts_external_token_cont = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_begin] = sym_begin,
  [ts_external_token_end] = sym_end,
  [ts_external_token_cont] = sym_cont,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_begin] = true,
    [ts_external_token_end] = true,
    [ts_external_token_cont] = true,
  },
  [2] = {
    [ts_external_token_cont] = true,
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
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
    [aux_sym_expression_token2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym_typeAtom_token1] = ACTIONS(1),
    [aux_sym__qualProperName_token1] = ACTIONS(1),
    [aux_sym__qualSymbol_token1] = ACTIONS(1),
    [aux_sym__qualSymbol_token2] = ACTIONS(1),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(1),
    [sym_begin] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [sym_cont] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(104),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(8), 2,
      sym_cont,
      anon_sym_PIPE,
    STATE(2), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    STATE(11), 3,
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
  [27] = 5,
    ACTIONS(13), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(15), 2,
      sym_cont,
      anon_sym_PIPE,
    STATE(4), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    STATE(11), 3,
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
  [54] = 5,
    ACTIONS(13), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(19), 2,
      sym_cont,
      anon_sym_PIPE,
    STATE(2), 2,
      sym_typeAtom,
      aux_sym_dataCtor_repeat1,
    STATE(11), 3,
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
  [81] = 7,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_data,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_newtype,
    ACTIONS(29), 1,
      aux_sym_type_variable_token1,
    STATE(24), 1,
      sym__ident,
    STATE(9), 6,
      sym__decl,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [108] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_data,
    ACTIONS(36), 1,
      anon_sym_type,
    ACTIONS(39), 1,
      anon_sym_newtype,
    ACTIONS(42), 1,
      aux_sym_type_variable_token1,
    STATE(24), 1,
      sym__ident,
    STATE(6), 6,
      sym__decl,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [135] = 7,
    ACTIONS(23), 1,
      anon_sym_data,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_newtype,
    ACTIONS(29), 1,
      aux_sym_type_variable_token1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym__ident,
    STATE(6), 6,
      sym__decl,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [162] = 7,
    ACTIONS(23), 1,
      anon_sym_data,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_newtype,
    ACTIONS(29), 1,
      aux_sym_type_variable_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym__ident,
    STATE(7), 6,
      sym__decl,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [189] = 7,
    ACTIONS(23), 1,
      anon_sym_data,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_newtype,
    ACTIONS(29), 1,
      aux_sym_type_variable_token1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym__ident,
    STATE(6), 6,
      sym__decl,
      sym_dataDecl,
      sym_typeDecl,
      sym_newtypeDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [216] = 2,
    ACTIONS(51), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(53), 9,
      sym_cont,
      anon_sym_PIPE,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [232] = 2,
    ACTIONS(55), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(57), 9,
      sym_cont,
      anon_sym_PIPE,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [248] = 8,
    ACTIONS(61), 1,
      aux_sym_expression_token1,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym__ident,
    STATE(53), 1,
      sym_expression,
    ACTIONS(59), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [274] = 8,
    ACTIONS(61), 1,
      aux_sym_expression_token1,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym__ident,
    STATE(56), 1,
      sym_expression,
    ACTIONS(59), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [300] = 7,
    ACTIONS(75), 1,
      aux_sym_expression_token1,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      sym__ident,
    STATE(54), 1,
      sym_expression,
    ACTIONS(73), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [323] = 7,
    ACTIONS(75), 1,
      aux_sym_expression_token1,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      sym__ident,
    STATE(88), 1,
      sym_expression,
    ACTIONS(73), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [346] = 2,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(85), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [359] = 2,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(89), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [372] = 2,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(93), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [385] = 7,
    ACTIONS(61), 1,
      aux_sym_expression_token1,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym__ident,
    STATE(25), 1,
      sym_expression,
    ACTIONS(59), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [408] = 7,
    ACTIONS(61), 1,
      aux_sym_expression_token1,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym__ident,
    STATE(58), 1,
      sym_expression,
    ACTIONS(59), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [431] = 2,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(97), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [444] = 7,
    ACTIONS(61), 1,
      aux_sym_expression_token1,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym__ident,
    STATE(31), 1,
      sym_expression,
    ACTIONS(59), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [467] = 4,
    ACTIONS(99), 1,
      anon_sym_EQ,
    ACTIONS(101), 1,
      aux_sym_type_variable_token1,
    STATE(81), 1,
      sym__ident,
    STATE(23), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [482] = 4,
    ACTIONS(104), 1,
      anon_sym_EQ,
    ACTIONS(106), 1,
      aux_sym_type_variable_token1,
    STATE(81), 1,
      sym__ident,
    STATE(27), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [497] = 3,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [510] = 4,
    ACTIONS(114), 1,
      aux_sym_data_token1,
    ACTIONS(116), 1,
      aux_sym_type_variable_token1,
    STATE(32), 1,
      sym__ident,
    STATE(44), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [525] = 4,
    ACTIONS(106), 1,
      aux_sym_type_variable_token1,
    ACTIONS(118), 1,
      anon_sym_EQ,
    STATE(81), 1,
      sym__ident,
    STATE(23), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [540] = 4,
    ACTIONS(114), 1,
      aux_sym_data_token1,
    ACTIONS(116), 1,
      aux_sym_type_variable_token1,
    STATE(32), 1,
      sym__ident,
    STATE(41), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [555] = 4,
    ACTIONS(114), 1,
      aux_sym_data_token1,
    ACTIONS(116), 1,
      aux_sym_type_variable_token1,
    STATE(32), 1,
      sym__ident,
    STATE(38), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [570] = 4,
    ACTIONS(114), 1,
      aux_sym_data_token1,
    ACTIONS(116), 1,
      aux_sym_type_variable_token1,
    STATE(32), 1,
      sym__ident,
    STATE(46), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [585] = 3,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [598] = 2,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [608] = 4,
    ACTIONS(128), 1,
      anon_sym_EQ,
    ACTIONS(130), 1,
      aux_sym_type_variable_token1,
    STATE(94), 1,
      sym__ident,
    STATE(33), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [622] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [632] = 4,
    ACTIONS(133), 1,
      anon_sym_EQ,
    ACTIONS(135), 1,
      aux_sym_type_variable_token1,
    STATE(94), 1,
      sym__ident,
    STATE(33), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [646] = 4,
    ACTIONS(135), 1,
      aux_sym_type_variable_token1,
    ACTIONS(137), 1,
      anon_sym_EQ,
    STATE(94), 1,
      sym__ident,
    STATE(47), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [660] = 2,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [670] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [680] = 2,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [690] = 4,
    ACTIONS(135), 1,
      aux_sym_type_variable_token1,
    ACTIONS(151), 1,
      anon_sym_EQ,
    STATE(94), 1,
      sym__ident,
    STATE(45), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [704] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [714] = 4,
    ACTIONS(135), 1,
      aux_sym_type_variable_token1,
    ACTIONS(157), 1,
      anon_sym_EQ,
    STATE(94), 1,
      sym__ident,
    STATE(35), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [728] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [738] = 2,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [748] = 4,
    ACTIONS(135), 1,
      aux_sym_type_variable_token1,
    ACTIONS(167), 1,
      anon_sym_EQ,
    STATE(94), 1,
      sym__ident,
    STATE(33), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [762] = 2,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 4,
      anon_sym_data,
      anon_sym_type,
      anon_sym_newtype,
      aux_sym_type_variable_token1,
  [772] = 4,
    ACTIONS(135), 1,
      aux_sym_type_variable_token1,
    ACTIONS(173), 1,
      anon_sym_EQ,
    STATE(94), 1,
      sym__ident,
    STATE(33), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [786] = 1,
    ACTIONS(95), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [793] = 1,
    ACTIONS(91), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [800] = 2,
    ACTIONS(177), 1,
      anon_sym_COLON,
    ACTIONS(175), 3,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [809] = 1,
    ACTIONS(87), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [816] = 1,
    ACTIONS(83), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [823] = 4,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_expression_repeat2,
  [836] = 2,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 3,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [845] = 3,
    ACTIONS(187), 1,
      aux_sym_type_variable_token1,
    STATE(55), 1,
      aux_sym_expression_repeat1,
    ACTIONS(190), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [856] = 4,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_expression_repeat2,
  [869] = 3,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      aux_sym_type_variable_token1,
    STATE(55), 1,
      aux_sym_expression_repeat1,
  [879] = 2,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [887] = 3,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      aux_sym_type_variable_token1,
    STATE(74), 1,
      aux_sym_expression_repeat3,
  [897] = 3,
    ACTIONS(200), 1,
      aux_sym_data_token1,
    STATE(3), 1,
      sym_properName,
    STATE(96), 1,
      sym_dataCtor,
  [907] = 3,
    ACTIONS(202), 1,
      anon_sym_PIPE,
    ACTIONS(204), 1,
      sym_cont,
    STATE(77), 1,
      aux_sym_dataDecl_repeat2,
  [917] = 3,
    ACTIONS(198), 1,
      aux_sym_type_variable_token1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_expression_repeat3,
  [927] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_expression_repeat2,
  [937] = 3,
    ACTIONS(202), 1,
      anon_sym_PIPE,
    ACTIONS(204), 1,
      sym_cont,
    STATE(79), 1,
      aux_sym_dataDecl_repeat2,
  [947] = 3,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      aux_sym_type_variable_token1,
    STATE(62), 1,
      aux_sym_expression_repeat3,
  [957] = 3,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 1,
      aux_sym_type_variable_token1,
    STATE(55), 1,
      aux_sym_expression_repeat1,
  [967] = 3,
    ACTIONS(200), 1,
      aux_sym_data_token1,
    STATE(3), 1,
      sym_properName,
    STATE(64), 1,
      sym_dataCtor,
  [977] = 3,
    ACTIONS(202), 1,
      anon_sym_PIPE,
    ACTIONS(208), 1,
      sym_cont,
    STATE(61), 1,
      aux_sym_dataDecl_repeat2,
  [987] = 3,
    ACTIONS(210), 1,
      aux_sym_type_variable_token1,
    STATE(100), 1,
      sym__pattern,
    STATE(105), 1,
      sym__ident,
  [997] = 3,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 1,
      aux_sym_type_variable_token1,
    STATE(82), 1,
      aux_sym_expression_repeat1,
  [1007] = 3,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      aux_sym_type_variable_token1,
    STATE(57), 1,
      aux_sym_expression_repeat1,
  [1017] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_expression_repeat2,
  [1027] = 3,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      aux_sym_type_variable_token1,
    STATE(55), 1,
      aux_sym_expression_repeat1,
  [1037] = 3,
    ACTIONS(198), 1,
      aux_sym_type_variable_token1,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_expression_repeat3,
  [1047] = 3,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 1,
      aux_sym_type_variable_token1,
    STATE(66), 1,
      aux_sym_expression_repeat1,
  [1057] = 3,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      aux_sym_type_variable_token1,
    STATE(73), 1,
      aux_sym_expression_repeat1,
  [1067] = 3,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    ACTIONS(217), 1,
      sym_cont,
    STATE(77), 1,
      aux_sym_dataDecl_repeat2,
  [1077] = 3,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(221), 1,
      anon_sym_where,
    STATE(83), 1,
      aux_sym_module_repeat1,
  [1087] = 3,
    ACTIONS(202), 1,
      anon_sym_PIPE,
    ACTIONS(223), 1,
      sym_cont,
    STATE(77), 1,
      aux_sym_dataDecl_repeat2,
  [1097] = 3,
    ACTIONS(200), 1,
      aux_sym_data_token1,
    STATE(3), 1,
      sym_properName,
    STATE(68), 1,
      sym_dataCtor,
  [1107] = 2,
    ACTIONS(227), 1,
      anon_sym_AT,
    ACTIONS(225), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1115] = 3,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 1,
      aux_sym_type_variable_token1,
    STATE(55), 1,
      aux_sym_expression_repeat1,
  [1125] = 3,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(229), 1,
      anon_sym_where,
    STATE(85), 1,
      aux_sym_module_repeat1,
  [1135] = 3,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_expression_repeat2,
  [1145] = 3,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_where,
    STATE(85), 1,
      aux_sym_module_repeat1,
  [1155] = 3,
    ACTIONS(239), 1,
      aux_sym_type_variable_token1,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_expression_repeat3,
  [1165] = 1,
    ACTIONS(53), 3,
      aux_sym_data_token1,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1171] = 2,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 2,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [1179] = 2,
    ACTIONS(246), 1,
      aux_sym_data_token1,
    STATE(36), 1,
      sym_properName,
  [1186] = 2,
    ACTIONS(246), 1,
      aux_sym_data_token1,
    STATE(40), 1,
      sym_properName,
  [1193] = 1,
    ACTIONS(237), 2,
      anon_sym_DOT,
      anon_sym_where,
  [1198] = 2,
    ACTIONS(246), 1,
      aux_sym_data_token1,
    STATE(42), 1,
      sym_properName,
  [1205] = 2,
    ACTIONS(248), 1,
      aux_sym_data_token1,
    STATE(91), 1,
      sym_properName,
  [1212] = 1,
    ACTIONS(124), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1217] = 2,
    ACTIONS(246), 1,
      aux_sym_data_token1,
    STATE(26), 1,
      sym_properName,
  [1224] = 1,
    ACTIONS(217), 2,
      sym_cont,
      anon_sym_PIPE,
  [1229] = 1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_where,
  [1234] = 2,
    ACTIONS(246), 1,
      aux_sym_data_token1,
    STATE(29), 1,
      sym_properName,
  [1241] = 2,
    ACTIONS(248), 1,
      aux_sym_data_token1,
    STATE(78), 1,
      sym_properName,
  [1248] = 1,
    ACTIONS(250), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1253] = 1,
    ACTIONS(252), 1,
      sym_cont,
  [1257] = 1,
    ACTIONS(254), 1,
      sym_cont,
  [1261] = 1,
    ACTIONS(256), 1,
      anon_sym_EQ,
  [1265] = 1,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
  [1269] = 1,
    ACTIONS(227), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 232,
  [SMALL_STATE(12)] = 248,
  [SMALL_STATE(13)] = 274,
  [SMALL_STATE(14)] = 300,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 346,
  [SMALL_STATE(17)] = 359,
  [SMALL_STATE(18)] = 372,
  [SMALL_STATE(19)] = 385,
  [SMALL_STATE(20)] = 408,
  [SMALL_STATE(21)] = 431,
  [SMALL_STATE(22)] = 444,
  [SMALL_STATE(23)] = 467,
  [SMALL_STATE(24)] = 482,
  [SMALL_STATE(25)] = 497,
  [SMALL_STATE(26)] = 510,
  [SMALL_STATE(27)] = 525,
  [SMALL_STATE(28)] = 540,
  [SMALL_STATE(29)] = 555,
  [SMALL_STATE(30)] = 570,
  [SMALL_STATE(31)] = 585,
  [SMALL_STATE(32)] = 598,
  [SMALL_STATE(33)] = 608,
  [SMALL_STATE(34)] = 622,
  [SMALL_STATE(35)] = 632,
  [SMALL_STATE(36)] = 646,
  [SMALL_STATE(37)] = 660,
  [SMALL_STATE(38)] = 670,
  [SMALL_STATE(39)] = 680,
  [SMALL_STATE(40)] = 690,
  [SMALL_STATE(41)] = 704,
  [SMALL_STATE(42)] = 714,
  [SMALL_STATE(43)] = 728,
  [SMALL_STATE(44)] = 738,
  [SMALL_STATE(45)] = 748,
  [SMALL_STATE(46)] = 762,
  [SMALL_STATE(47)] = 772,
  [SMALL_STATE(48)] = 786,
  [SMALL_STATE(49)] = 793,
  [SMALL_STATE(50)] = 800,
  [SMALL_STATE(51)] = 809,
  [SMALL_STATE(52)] = 816,
  [SMALL_STATE(53)] = 823,
  [SMALL_STATE(54)] = 836,
  [SMALL_STATE(55)] = 845,
  [SMALL_STATE(56)] = 856,
  [SMALL_STATE(57)] = 869,
  [SMALL_STATE(58)] = 879,
  [SMALL_STATE(59)] = 887,
  [SMALL_STATE(60)] = 897,
  [SMALL_STATE(61)] = 907,
  [SMALL_STATE(62)] = 917,
  [SMALL_STATE(63)] = 927,
  [SMALL_STATE(64)] = 937,
  [SMALL_STATE(65)] = 947,
  [SMALL_STATE(66)] = 957,
  [SMALL_STATE(67)] = 967,
  [SMALL_STATE(68)] = 977,
  [SMALL_STATE(69)] = 987,
  [SMALL_STATE(70)] = 997,
  [SMALL_STATE(71)] = 1007,
  [SMALL_STATE(72)] = 1017,
  [SMALL_STATE(73)] = 1027,
  [SMALL_STATE(74)] = 1037,
  [SMALL_STATE(75)] = 1047,
  [SMALL_STATE(76)] = 1057,
  [SMALL_STATE(77)] = 1067,
  [SMALL_STATE(78)] = 1077,
  [SMALL_STATE(79)] = 1087,
  [SMALL_STATE(80)] = 1097,
  [SMALL_STATE(81)] = 1107,
  [SMALL_STATE(82)] = 1115,
  [SMALL_STATE(83)] = 1125,
  [SMALL_STATE(84)] = 1135,
  [SMALL_STATE(85)] = 1145,
  [SMALL_STATE(86)] = 1155,
  [SMALL_STATE(87)] = 1165,
  [SMALL_STATE(88)] = 1171,
  [SMALL_STATE(89)] = 1179,
  [SMALL_STATE(90)] = 1186,
  [SMALL_STATE(91)] = 1193,
  [SMALL_STATE(92)] = 1198,
  [SMALL_STATE(93)] = 1205,
  [SMALL_STATE(94)] = 1212,
  [SMALL_STATE(95)] = 1217,
  [SMALL_STATE(96)] = 1224,
  [SMALL_STATE(97)] = 1229,
  [SMALL_STATE(98)] = 1234,
  [SMALL_STATE(99)] = 1241,
  [SMALL_STATE(100)] = 1248,
  [SMALL_STATE(101)] = 1253,
  [SMALL_STATE(102)] = 1257,
  [SMALL_STATE(103)] = 1261,
  [SMALL_STATE(104)] = 1265,
  [SMALL_STATE(105)] = 1269,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [5] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(11),
  [8] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataCtor, 1, .production_id = 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataCtor, 2, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(89),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(90),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(92),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properName, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properName, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeAtom, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAtom, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(81),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeVarBinding, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeVarBinding, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2), SHIFT_REPEAT(94),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 5, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataDecl, 5, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newtypeDecl, 6, .production_id = 7),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newtypeDecl, 6, .production_id = 7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 7, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataDecl, 7, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDecl, 5, .production_id = 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeDecl, 5, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 6, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataDecl, 6, .production_id = 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newtypeDecl, 5, .production_id = 6),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newtypeDecl, 5, .production_id = 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDecl, 4, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeDecl, 4, .production_id = 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(50),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2), SHIFT_REPEAT(60),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(20),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(93),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2), SHIFT_REPEAT(103),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [258] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
