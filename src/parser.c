#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 2
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
  aux_sym_type_variable_token1 = 9,
  anon_sym_AT = 10,
  aux_sym_expression_token1 = 11,
  aux_sym_expression_token2 = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LPAREN = 15,
  anon_sym_COLON = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACK = 18,
  anon_sym_COMMA = 19,
  anon_sym_RBRACK = 20,
  anon_sym__ = 21,
  aux_sym_typeAtom_token1 = 22,
  aux_sym__qualProperName_token1 = 23,
  aux_sym__qualSymbol_token1 = 24,
  aux_sym__qualSymbol_token2 = 25,
  anon_sym_LPAREN_DOT_DOT_RPAREN = 26,
  sym_begin = 27,
  sym_end = 28,
  sym_cont = 29,
  sym_module = 30,
  sym__decl = 31,
  sym_dataDecl = 32,
  sym_dataCtor = 33,
  sym_typeDecl = 34,
  sym__type = 35,
  sym_function_definition = 36,
  sym__ident = 37,
  sym__pattern = 38,
  sym__argument = 39,
  sym_expression = 40,
  sym_properName = 41,
  sym_typeVarBinding = 42,
  sym_typeAtom = 43,
  sym__qualProperName = 44,
  sym__qualSymbol = 45,
  aux_sym_module_repeat1 = 46,
  aux_sym_module_repeat2 = 47,
  aux_sym_dataDecl_repeat1 = 48,
  aux_sym_dataDecl_repeat2 = 49,
  aux_sym_dataCtor_repeat1 = 50,
  aux_sym_function_definition_repeat1 = 51,
  aux_sym_expression_repeat1 = 52,
  aux_sym_expression_repeat2 = 53,
  aux_sym_expression_repeat3 = 54,
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
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_name, 2},
  [3] =
    {field_name, 0},
  [4] =
    {field_body, 3},
    {field_name, 1},
  [6] =
    {field_body, 4},
    {field_name, 1},
  [8] =
    {field_body, 3},
    {field_body, 4},
    {field_name, 1},
  [11] =
    {field_body, 4},
    {field_body, 5},
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
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 22,
  [38] = 19,
  [39] = 21,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 5,
  [47] = 47,
  [48] = 36,
  [49] = 49,
  [50] = 50,
  [51] = 20,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 53,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 54,
  [65] = 65,
  [66] = 66,
  [67] = 55,
  [68] = 61,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 63,
  [81] = 65,
  [82] = 66,
  [83] = 83,
  [84] = 5,
  [85] = 85,
  [86] = 5,
  [87] = 40,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(67);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(77);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_module);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_where);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_data);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'p') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'y') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_expression_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_typeAtom_token1);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(72);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(25);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'd') ADVANCE(73);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'h') ADVANCE(63);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'l') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'o') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'p') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'r') ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 't') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'u') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'y') ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
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
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0},
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
    [sym_module] = STATE(95),
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
    STATE(6), 3,
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
    STATE(6), 3,
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
    STATE(6), 3,
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
  [81] = 2,
    ACTIONS(21), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(23), 9,
      sym_cont,
      anon_sym_PIPE,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [97] = 2,
    ACTIONS(25), 2,
      aux_sym_data_token1,
      aux_sym__qualSymbol_token1,
    ACTIONS(27), 9,
      sym_cont,
      anon_sym_PIPE,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
      anon_sym__,
      aux_sym_typeAtom_token1,
      aux_sym__qualProperName_token1,
      aux_sym__qualSymbol_token2,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
  [113] = 6,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_data,
    ACTIONS(33), 1,
      anon_sym_type,
    ACTIONS(35), 1,
      aux_sym_type_variable_token1,
    STATE(25), 1,
      sym__ident,
    STATE(9), 5,
      sym__decl,
      sym_dataDecl,
      sym_typeDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [136] = 6,
    ACTIONS(31), 1,
      anon_sym_data,
    ACTIONS(33), 1,
      anon_sym_type,
    ACTIONS(35), 1,
      aux_sym_type_variable_token1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym__ident,
    STATE(10), 5,
      sym__decl,
      sym_dataDecl,
      sym_typeDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [159] = 6,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_data,
    ACTIONS(44), 1,
      anon_sym_type,
    ACTIONS(47), 1,
      aux_sym_type_variable_token1,
    STATE(25), 1,
      sym__ident,
    STATE(9), 5,
      sym__decl,
      sym_dataDecl,
      sym_typeDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [182] = 6,
    ACTIONS(31), 1,
      anon_sym_data,
    ACTIONS(33), 1,
      anon_sym_type,
    ACTIONS(35), 1,
      aux_sym_type_variable_token1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym__ident,
    STATE(9), 5,
      sym__decl,
      sym_dataDecl,
      sym_typeDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [205] = 6,
    ACTIONS(31), 1,
      anon_sym_data,
    ACTIONS(33), 1,
      anon_sym_type,
    ACTIONS(35), 1,
      aux_sym_type_variable_token1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym__ident,
    STATE(7), 5,
      sym__decl,
      sym_dataDecl,
      sym_typeDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [228] = 8,
    ACTIONS(56), 1,
      aux_sym_expression_token1,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__ident,
    STATE(48), 1,
      sym_expression,
    ACTIONS(54), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [254] = 8,
    ACTIONS(56), 1,
      aux_sym_expression_token1,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__ident,
    STATE(36), 1,
      sym_expression,
    ACTIONS(54), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [280] = 7,
    ACTIONS(56), 1,
      aux_sym_expression_token1,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__ident,
    STATE(34), 1,
      sym_expression,
    ACTIONS(54), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [303] = 7,
    ACTIONS(56), 1,
      aux_sym_expression_token1,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__ident,
    STATE(73), 1,
      sym_expression,
    ACTIONS(54), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [326] = 7,
    ACTIONS(70), 1,
      aux_sym_expression_token1,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_expression,
    STATE(39), 1,
      sym__ident,
    ACTIONS(68), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [349] = 7,
    ACTIONS(70), 1,
      aux_sym_expression_token1,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym__ident,
    STATE(78), 1,
      sym_expression,
    ACTIONS(68), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [372] = 7,
    ACTIONS(56), 1,
      aux_sym_expression_token1,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__ident,
    STATE(33), 1,
      sym_expression,
    ACTIONS(54), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [395] = 2,
    ACTIONS(80), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [407] = 2,
    ACTIONS(84), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [419] = 2,
    ACTIONS(88), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [431] = 2,
    ACTIONS(92), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [443] = 4,
    ACTIONS(94), 1,
      anon_sym_EQ,
    ACTIONS(96), 1,
      aux_sym_type_variable_token1,
    STATE(56), 1,
      sym__ident,
    STATE(24), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [458] = 4,
    ACTIONS(98), 1,
      anon_sym_EQ,
    ACTIONS(100), 1,
      aux_sym_type_variable_token1,
    STATE(56), 1,
      sym__ident,
    STATE(24), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [473] = 4,
    ACTIONS(96), 1,
      aux_sym_type_variable_token1,
    ACTIONS(103), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym__ident,
    STATE(23), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [488] = 4,
    ACTIONS(105), 1,
      aux_sym_data_token1,
    ACTIONS(107), 1,
      aux_sym_type_variable_token1,
    STATE(40), 1,
      sym__ident,
    STATE(44), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [503] = 4,
    ACTIONS(105), 1,
      aux_sym_data_token1,
    ACTIONS(107), 1,
      aux_sym_type_variable_token1,
    STATE(40), 1,
      sym__ident,
    STATE(50), 3,
      sym__type,
      sym_properName,
      sym_typeVarBinding,
  [518] = 4,
    ACTIONS(109), 1,
      anon_sym_EQ,
    ACTIONS(111), 1,
      aux_sym_type_variable_token1,
    STATE(87), 1,
      sym__ident,
    STATE(32), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [532] = 4,
    ACTIONS(111), 1,
      aux_sym_type_variable_token1,
    ACTIONS(113), 1,
      anon_sym_EQ,
    STATE(87), 1,
      sym__ident,
    STATE(31), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [546] = 4,
    ACTIONS(115), 1,
      anon_sym_EQ,
    ACTIONS(117), 1,
      aux_sym_type_variable_token1,
    STATE(87), 1,
      sym__ident,
    STATE(30), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [560] = 4,
    ACTIONS(111), 1,
      aux_sym_type_variable_token1,
    ACTIONS(120), 1,
      anon_sym_EQ,
    STATE(87), 1,
      sym__ident,
    STATE(30), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [574] = 4,
    ACTIONS(111), 1,
      aux_sym_type_variable_token1,
    ACTIONS(122), 1,
      anon_sym_EQ,
    STATE(87), 1,
      sym__ident,
    STATE(30), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [588] = 3,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
  [600] = 3,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
  [612] = 2,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 3,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [621] = 4,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_expression_repeat2,
  [634] = 1,
    ACTIONS(90), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [641] = 1,
    ACTIONS(78), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [648] = 1,
    ACTIONS(86), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [655] = 2,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
  [664] = 2,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
  [673] = 2,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
  [682] = 2,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
  [691] = 2,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
  [700] = 2,
    ACTIONS(164), 1,
      anon_sym_COLON,
    ACTIONS(162), 3,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [709] = 2,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
  [718] = 3,
    ACTIONS(166), 1,
      aux_sym_type_variable_token1,
    STATE(47), 1,
      aux_sym_expression_repeat1,
    ACTIONS(169), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [729] = 4,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_expression_repeat2,
  [742] = 2,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
  [751] = 2,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 3,
      anon_sym_data,
      anon_sym_type,
      aux_sym_type_variable_token1,
  [760] = 1,
    ACTIONS(82), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [767] = 3,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(183), 1,
      sym_cont,
    STATE(72), 1,
      aux_sym_dataDecl_repeat2,
  [777] = 3,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      aux_sym_type_variable_token1,
    STATE(47), 1,
      aux_sym_expression_repeat1,
  [787] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_expression_repeat2,
  [797] = 3,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      aux_sym_type_variable_token1,
    STATE(82), 1,
      aux_sym_expression_repeat3,
  [807] = 2,
    ACTIONS(193), 1,
      anon_sym_AT,
    ACTIONS(191), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [815] = 3,
    ACTIONS(195), 1,
      aux_sym_data_token1,
    STATE(3), 1,
      sym_properName,
    STATE(88), 1,
      sym_dataCtor,
  [825] = 3,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(197), 1,
      sym_cont,
    STATE(69), 1,
      aux_sym_dataDecl_repeat2,
  [835] = 3,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      aux_sym_type_variable_token1,
    STATE(47), 1,
      aux_sym_expression_repeat1,
  [845] = 3,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_where,
    STATE(60), 1,
      aux_sym_module_repeat1,
  [855] = 3,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      aux_sym_type_variable_token1,
    STATE(47), 1,
      aux_sym_expression_repeat1,
  [865] = 3,
    ACTIONS(195), 1,
      aux_sym_data_token1,
    STATE(3), 1,
      sym_properName,
    STATE(77), 1,
      sym_dataCtor,
  [875] = 3,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      aux_sym_type_variable_token1,
    STATE(59), 1,
      aux_sym_expression_repeat1,
  [885] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_expression_repeat2,
  [895] = 3,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      aux_sym_type_variable_token1,
    STATE(61), 1,
      aux_sym_expression_repeat1,
  [905] = 3,
    ACTIONS(189), 1,
      aux_sym_type_variable_token1,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_expression_repeat3,
  [915] = 3,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      aux_sym_type_variable_token1,
    STATE(66), 1,
      aux_sym_expression_repeat3,
  [925] = 3,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      aux_sym_type_variable_token1,
    STATE(47), 1,
      aux_sym_expression_repeat1,
  [935] = 3,
    ACTIONS(206), 1,
      anon_sym_PIPE,
    ACTIONS(209), 1,
      sym_cont,
    STATE(69), 1,
      aux_sym_dataDecl_repeat2,
  [945] = 3,
    ACTIONS(211), 1,
      anon_sym_DOT,
    ACTIONS(213), 1,
      anon_sym_where,
    STATE(60), 1,
      aux_sym_module_repeat1,
  [955] = 3,
    ACTIONS(195), 1,
      aux_sym_data_token1,
    STATE(3), 1,
      sym_properName,
    STATE(52), 1,
      sym_dataCtor,
  [965] = 3,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      sym_cont,
    STATE(69), 1,
      aux_sym_dataDecl_repeat2,
  [975] = 2,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [983] = 3,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_expression_repeat2,
  [993] = 3,
    ACTIONS(211), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_where,
    STATE(70), 1,
      aux_sym_module_repeat1,
  [1003] = 3,
    ACTIONS(224), 1,
      aux_sym_type_variable_token1,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_expression_repeat3,
  [1013] = 3,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(229), 1,
      sym_cont,
    STATE(58), 1,
      aux_sym_dataDecl_repeat2,
  [1023] = 2,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 2,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [1031] = 3,
    ACTIONS(233), 1,
      aux_sym_type_variable_token1,
    STATE(92), 1,
      sym__pattern,
    STATE(97), 1,
      sym__ident,
  [1041] = 3,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      aux_sym_type_variable_token1,
    STATE(53), 1,
      aux_sym_expression_repeat1,
  [1051] = 3,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      aux_sym_type_variable_token1,
    STATE(68), 1,
      aux_sym_expression_repeat1,
  [1061] = 3,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      aux_sym_type_variable_token1,
    STATE(76), 1,
      aux_sym_expression_repeat3,
  [1071] = 2,
    ACTIONS(235), 1,
      aux_sym_data_token1,
    STATE(75), 1,
      sym_properName,
  [1078] = 1,
    ACTIONS(23), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1083] = 2,
    ACTIONS(235), 1,
      aux_sym_data_token1,
    STATE(89), 1,
      sym_properName,
  [1090] = 1,
    ACTIONS(23), 2,
      anon_sym_DOT,
      anon_sym_where,
  [1095] = 1,
    ACTIONS(142), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1100] = 1,
    ACTIONS(209), 2,
      sym_cont,
      anon_sym_PIPE,
  [1105] = 1,
    ACTIONS(202), 2,
      anon_sym_DOT,
      anon_sym_where,
  [1110] = 2,
    ACTIONS(237), 1,
      aux_sym_data_token1,
    STATE(29), 1,
      sym_properName,
  [1117] = 2,
    ACTIONS(237), 1,
      aux_sym_data_token1,
    STATE(28), 1,
      sym_properName,
  [1124] = 1,
    ACTIONS(239), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [1129] = 1,
    ACTIONS(241), 1,
      sym_cont,
  [1133] = 1,
    ACTIONS(243), 1,
      anon_sym_EQ,
  [1137] = 1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
  [1141] = 1,
    ACTIONS(247), 1,
      sym_cont,
  [1145] = 1,
    ACTIONS(193), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 113,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 254,
  [SMALL_STATE(14)] = 280,
  [SMALL_STATE(15)] = 303,
  [SMALL_STATE(16)] = 326,
  [SMALL_STATE(17)] = 349,
  [SMALL_STATE(18)] = 372,
  [SMALL_STATE(19)] = 395,
  [SMALL_STATE(20)] = 407,
  [SMALL_STATE(21)] = 419,
  [SMALL_STATE(22)] = 431,
  [SMALL_STATE(23)] = 443,
  [SMALL_STATE(24)] = 458,
  [SMALL_STATE(25)] = 473,
  [SMALL_STATE(26)] = 488,
  [SMALL_STATE(27)] = 503,
  [SMALL_STATE(28)] = 518,
  [SMALL_STATE(29)] = 532,
  [SMALL_STATE(30)] = 546,
  [SMALL_STATE(31)] = 560,
  [SMALL_STATE(32)] = 574,
  [SMALL_STATE(33)] = 588,
  [SMALL_STATE(34)] = 600,
  [SMALL_STATE(35)] = 612,
  [SMALL_STATE(36)] = 621,
  [SMALL_STATE(37)] = 634,
  [SMALL_STATE(38)] = 641,
  [SMALL_STATE(39)] = 648,
  [SMALL_STATE(40)] = 655,
  [SMALL_STATE(41)] = 664,
  [SMALL_STATE(42)] = 673,
  [SMALL_STATE(43)] = 682,
  [SMALL_STATE(44)] = 691,
  [SMALL_STATE(45)] = 700,
  [SMALL_STATE(46)] = 709,
  [SMALL_STATE(47)] = 718,
  [SMALL_STATE(48)] = 729,
  [SMALL_STATE(49)] = 742,
  [SMALL_STATE(50)] = 751,
  [SMALL_STATE(51)] = 760,
  [SMALL_STATE(52)] = 767,
  [SMALL_STATE(53)] = 777,
  [SMALL_STATE(54)] = 787,
  [SMALL_STATE(55)] = 797,
  [SMALL_STATE(56)] = 807,
  [SMALL_STATE(57)] = 815,
  [SMALL_STATE(58)] = 825,
  [SMALL_STATE(59)] = 835,
  [SMALL_STATE(60)] = 845,
  [SMALL_STATE(61)] = 855,
  [SMALL_STATE(62)] = 865,
  [SMALL_STATE(63)] = 875,
  [SMALL_STATE(64)] = 885,
  [SMALL_STATE(65)] = 895,
  [SMALL_STATE(66)] = 905,
  [SMALL_STATE(67)] = 915,
  [SMALL_STATE(68)] = 925,
  [SMALL_STATE(69)] = 935,
  [SMALL_STATE(70)] = 945,
  [SMALL_STATE(71)] = 955,
  [SMALL_STATE(72)] = 965,
  [SMALL_STATE(73)] = 975,
  [SMALL_STATE(74)] = 983,
  [SMALL_STATE(75)] = 993,
  [SMALL_STATE(76)] = 1003,
  [SMALL_STATE(77)] = 1013,
  [SMALL_STATE(78)] = 1023,
  [SMALL_STATE(79)] = 1031,
  [SMALL_STATE(80)] = 1041,
  [SMALL_STATE(81)] = 1051,
  [SMALL_STATE(82)] = 1061,
  [SMALL_STATE(83)] = 1071,
  [SMALL_STATE(84)] = 1078,
  [SMALL_STATE(85)] = 1083,
  [SMALL_STATE(86)] = 1090,
  [SMALL_STATE(87)] = 1095,
  [SMALL_STATE(88)] = 1100,
  [SMALL_STATE(89)] = 1105,
  [SMALL_STATE(90)] = 1110,
  [SMALL_STATE(91)] = 1117,
  [SMALL_STATE(92)] = 1124,
  [SMALL_STATE(93)] = 1129,
  [SMALL_STATE(94)] = 1133,
  [SMALL_STATE(95)] = 1137,
  [SMALL_STATE(96)] = 1141,
  [SMALL_STATE(97)] = 1145,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [5] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(6),
  [8] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataCtor_repeat1, 2), SHIFT_REPEAT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataCtor, 1, .production_id = 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataCtor, 2, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properName, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properName, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeAtom, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAtom, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(90),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(91),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(25),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(56),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2), SHIFT_REPEAT(87),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeVarBinding, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeVarBinding, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 7, .production_id = 7),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataDecl, 7, .production_id = 7),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 6, .production_id = 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataDecl, 6, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 6, .production_id = 6),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataDecl, 6, .production_id = 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDecl, 4, .production_id = 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeDecl, 4, .production_id = 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(45),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 5, .production_id = 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataDecl, 5, .production_id = 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDecl, 5, .production_id = 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeDecl, 5, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(85),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2), SHIFT_REPEAT(57),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(15),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2), SHIFT_REPEAT(94),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [245] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
