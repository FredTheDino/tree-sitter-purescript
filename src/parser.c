#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  aux_sym_type_variable_token1 = 8,
  anon_sym_AT = 9,
  aux_sym_expression_token1 = 10,
  aux_sym_expression_token2 = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_LPAREN = 14,
  anon_sym_COLON = 15,
  anon_sym_RPAREN = 16,
  anon_sym_LBRACK = 17,
  anon_sym_COMMA = 18,
  anon_sym_RBRACK = 19,
  anon_sym__ = 20,
  aux_sym_typeAtom_token1 = 21,
  aux_sym__qualProperName_token1 = 22,
  aux_sym__qualSymbol_token1 = 23,
  aux_sym__qualSymbol_token2 = 24,
  anon_sym_LPAREN_DOT_DOT_RPAREN = 25,
  sym_begin = 26,
  sym_end = 27,
  sym_cont = 28,
  sym_module = 29,
  sym__decl = 30,
  sym_dataDecl = 31,
  sym_dataCtor = 32,
  sym_function_definition = 33,
  sym__ident = 34,
  sym__pattern = 35,
  sym__argument = 36,
  sym_expression = 37,
  sym_properName = 38,
  sym_typeVarBinding = 39,
  sym_typeAtom = 40,
  sym__qualProperName = 41,
  sym__qualSymbol = 42,
  aux_sym_module_repeat1 = 43,
  aux_sym_module_repeat2 = 44,
  aux_sym_dataDecl_repeat1 = 45,
  aux_sym_dataDecl_repeat2 = 46,
  aux_sym_dataCtor_repeat1 = 47,
  aux_sym_function_definition_repeat1 = 48,
  aux_sym_expression_repeat1 = 49,
  aux_sym_expression_repeat2 = 50,
  aux_sym_expression_repeat3 = 51,
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
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
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
    {field_body, 3},
    {field_body, 4},
    {field_name, 1},
  [9] =
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
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
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
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 21,
  [35] = 25,
  [36] = 22,
  [37] = 23,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 42,
  [57] = 45,
  [58] = 58,
  [59] = 44,
  [60] = 54,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 58,
  [66] = 55,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 5,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 5,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'w') ADVANCE(61);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(69);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_module);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_where);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_data);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_data);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
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
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_expression_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_typeAtom_token1);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__qualProperName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(65);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'a') ADVANCE(25);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'd') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'e') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'h') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'l') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'o') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'r') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 't') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (lookahead == 'u') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__qualSymbol_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
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
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
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
    [sym_module] = STATE(87),
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
  [113] = 8,
    ACTIONS(31), 1,
      aux_sym_expression_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__ident,
    STATE(30), 1,
      sym_expression,
    ACTIONS(29), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [139] = 8,
    ACTIONS(31), 1,
      aux_sym_expression_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__ident,
    STATE(29), 1,
      sym_expression,
    ACTIONS(29), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [165] = 7,
    ACTIONS(31), 1,
      aux_sym_expression_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__ident,
    STATE(38), 1,
      sym_expression,
    ACTIONS(29), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [188] = 7,
    ACTIONS(45), 1,
      aux_sym_expression_token1,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym__ident,
    STATE(73), 1,
      sym_expression,
    ACTIONS(43), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [211] = 5,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_data,
    ACTIONS(57), 1,
      aux_sym_type_variable_token1,
    STATE(20), 1,
      sym__ident,
    STATE(15), 4,
      sym__decl,
      sym_dataDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [230] = 7,
    ACTIONS(45), 1,
      aux_sym_expression_token1,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_expression,
    STATE(34), 1,
      sym__ident,
    ACTIONS(43), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [253] = 7,
    ACTIONS(31), 1,
      aux_sym_expression_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__ident,
    STATE(67), 1,
      sym_expression,
    ACTIONS(29), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [276] = 5,
    ACTIONS(55), 1,
      anon_sym_data,
    ACTIONS(57), 1,
      aux_sym_type_variable_token1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym__ident,
    STATE(17), 4,
      sym__decl,
      sym_dataDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [295] = 5,
    ACTIONS(55), 1,
      anon_sym_data,
    ACTIONS(57), 1,
      aux_sym_type_variable_token1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym__ident,
    STATE(17), 4,
      sym__decl,
      sym_dataDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [314] = 5,
    ACTIONS(55), 1,
      anon_sym_data,
    ACTIONS(57), 1,
      aux_sym_type_variable_token1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym__ident,
    STATE(14), 4,
      sym__decl,
      sym_dataDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [333] = 5,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_data,
    ACTIONS(70), 1,
      aux_sym_type_variable_token1,
    STATE(20), 1,
      sym__ident,
    STATE(17), 4,
      sym__decl,
      sym_dataDecl,
      sym_function_definition,
      aux_sym_module_repeat2,
  [352] = 7,
    ACTIONS(31), 1,
      aux_sym_expression_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__ident,
    STATE(33), 1,
      sym_expression,
    ACTIONS(29), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token2,
  [375] = 4,
    ACTIONS(73), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      aux_sym_type_variable_token1,
    STATE(41), 1,
      sym__ident,
    STATE(24), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [390] = 4,
    ACTIONS(75), 1,
      aux_sym_type_variable_token1,
    ACTIONS(77), 1,
      anon_sym_EQ,
    STATE(41), 1,
      sym__ident,
    STATE(19), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [405] = 2,
    ACTIONS(81), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [416] = 2,
    ACTIONS(85), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [427] = 2,
    ACTIONS(89), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [438] = 4,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      aux_sym_type_variable_token1,
    STATE(41), 1,
      sym__ident,
    STATE(24), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [453] = 2,
    ACTIONS(98), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [464] = 4,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      aux_sym_type_variable_token1,
    STATE(81), 1,
      sym__ident,
    STATE(27), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [478] = 4,
    ACTIONS(102), 1,
      aux_sym_type_variable_token1,
    ACTIONS(104), 1,
      anon_sym_EQ,
    STATE(81), 1,
      sym__ident,
    STATE(28), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [492] = 4,
    ACTIONS(106), 1,
      anon_sym_EQ,
    ACTIONS(108), 1,
      aux_sym_type_variable_token1,
    STATE(81), 1,
      sym__ident,
    STATE(28), 2,
      sym_typeVarBinding,
      aux_sym_dataDecl_repeat1,
  [506] = 4,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_expression_repeat2,
  [519] = 4,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_expression_repeat2,
  [532] = 3,
    ACTIONS(119), 1,
      aux_sym_type_variable_token1,
    STATE(31), 1,
      aux_sym_expression_repeat1,
    ACTIONS(122), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [543] = 2,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 3,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [552] = 3,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [563] = 1,
    ACTIONS(79), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [570] = 1,
    ACTIONS(96), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [577] = 1,
    ACTIONS(83), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [584] = 1,
    ACTIONS(87), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [591] = 3,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [602] = 2,
    ACTIONS(138), 1,
      anon_sym_COLON,
    ACTIONS(136), 3,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [611] = 3,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      sym_cont,
    STATE(62), 1,
      aux_sym_dataDecl_repeat2,
  [621] = 2,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(144), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [629] = 3,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      aux_sym_type_variable_token1,
    STATE(31), 1,
      aux_sym_expression_repeat1,
  [639] = 3,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 1,
      aux_sym_type_variable_token1,
    STATE(59), 1,
      aux_sym_expression_repeat3,
  [649] = 3,
    ACTIONS(150), 1,
      aux_sym_type_variable_token1,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_expression_repeat3,
  [659] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_expression_repeat2,
  [669] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 1,
      aux_sym_type_variable_token1,
    STATE(44), 1,
      aux_sym_expression_repeat3,
  [679] = 2,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [687] = 3,
    ACTIONS(158), 1,
      aux_sym_data_token1,
    STATE(3), 1,
      sym_properName,
    STATE(79), 1,
      sym_dataCtor,
  [697] = 3,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      sym_cont,
    STATE(62), 1,
      aux_sym_dataDecl_repeat2,
  [707] = 3,
    ACTIONS(158), 1,
      aux_sym_data_token1,
    STATE(3), 1,
      sym_properName,
    STATE(52), 1,
      sym_dataCtor,
  [717] = 3,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(162), 1,
      sym_cont,
    STATE(49), 1,
      aux_sym_dataDecl_repeat2,
  [727] = 3,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(164), 1,
      sym_cont,
    STATE(40), 1,
      aux_sym_dataDecl_repeat2,
  [737] = 3,
    ACTIONS(166), 1,
      aux_sym_type_variable_token1,
    STATE(83), 1,
      sym__pattern,
    STATE(88), 1,
      sym__ident,
  [747] = 3,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      aux_sym_type_variable_token1,
    STATE(42), 1,
      aux_sym_expression_repeat1,
  [757] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      aux_sym_type_variable_token1,
    STATE(65), 1,
      aux_sym_expression_repeat1,
  [767] = 3,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      aux_sym_type_variable_token1,
    STATE(31), 1,
      aux_sym_expression_repeat1,
  [777] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_expression_repeat2,
  [787] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      aux_sym_type_variable_token1,
    STATE(31), 1,
      aux_sym_expression_repeat1,
  [797] = 3,
    ACTIONS(150), 1,
      aux_sym_type_variable_token1,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_expression_repeat3,
  [807] = 3,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      aux_sym_type_variable_token1,
    STATE(56), 1,
      aux_sym_expression_repeat1,
  [817] = 2,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [825] = 3,
    ACTIONS(174), 1,
      anon_sym_PIPE,
    ACTIONS(177), 1,
      sym_cont,
    STATE(62), 1,
      aux_sym_dataDecl_repeat2,
  [835] = 3,
    ACTIONS(158), 1,
      aux_sym_data_token1,
    STATE(3), 1,
      sym_properName,
    STATE(51), 1,
      sym_dataCtor,
  [845] = 2,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [853] = 3,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      aux_sym_type_variable_token1,
    STATE(31), 1,
      aux_sym_expression_repeat1,
  [863] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      aux_sym_type_variable_token1,
    STATE(58), 1,
      aux_sym_expression_repeat1,
  [873] = 2,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [881] = 3,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(188), 1,
      anon_sym_where,
    STATE(68), 1,
      aux_sym_module_repeat1,
  [891] = 3,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_expression_repeat2,
  [901] = 3,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(195), 1,
      anon_sym_where,
    STATE(74), 1,
      aux_sym_module_repeat1,
  [911] = 3,
    ACTIONS(197), 1,
      aux_sym_type_variable_token1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_expression_repeat3,
  [921] = 2,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [929] = 2,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 2,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [937] = 3,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(208), 1,
      anon_sym_where,
    STATE(68), 1,
      aux_sym_module_repeat1,
  [947] = 1,
    ACTIONS(188), 2,
      anon_sym_DOT,
      anon_sym_where,
  [952] = 1,
    ACTIONS(23), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [957] = 2,
    ACTIONS(210), 1,
      aux_sym_data_token1,
    STATE(75), 1,
      sym_properName,
  [964] = 2,
    ACTIONS(212), 1,
      aux_sym_data_token1,
    STATE(26), 1,
      sym_properName,
  [971] = 1,
    ACTIONS(177), 2,
      sym_cont,
      anon_sym_PIPE,
  [976] = 1,
    ACTIONS(23), 2,
      anon_sym_DOT,
      anon_sym_where,
  [981] = 1,
    ACTIONS(214), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [986] = 2,
    ACTIONS(210), 1,
      aux_sym_data_token1,
    STATE(70), 1,
      sym_properName,
  [993] = 1,
    ACTIONS(216), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [998] = 1,
    ACTIONS(218), 1,
      sym_cont,
  [1002] = 1,
    ACTIONS(220), 1,
      sym_cont,
  [1006] = 1,
    ACTIONS(222), 1,
      anon_sym_EQ,
  [1010] = 1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [1014] = 1,
    ACTIONS(146), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 113,
  [SMALL_STATE(8)] = 139,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 253,
  [SMALL_STATE(14)] = 276,
  [SMALL_STATE(15)] = 295,
  [SMALL_STATE(16)] = 314,
  [SMALL_STATE(17)] = 333,
  [SMALL_STATE(18)] = 352,
  [SMALL_STATE(19)] = 375,
  [SMALL_STATE(20)] = 390,
  [SMALL_STATE(21)] = 405,
  [SMALL_STATE(22)] = 416,
  [SMALL_STATE(23)] = 427,
  [SMALL_STATE(24)] = 438,
  [SMALL_STATE(25)] = 453,
  [SMALL_STATE(26)] = 464,
  [SMALL_STATE(27)] = 478,
  [SMALL_STATE(28)] = 492,
  [SMALL_STATE(29)] = 506,
  [SMALL_STATE(30)] = 519,
  [SMALL_STATE(31)] = 532,
  [SMALL_STATE(32)] = 543,
  [SMALL_STATE(33)] = 552,
  [SMALL_STATE(34)] = 563,
  [SMALL_STATE(35)] = 570,
  [SMALL_STATE(36)] = 577,
  [SMALL_STATE(37)] = 584,
  [SMALL_STATE(38)] = 591,
  [SMALL_STATE(39)] = 602,
  [SMALL_STATE(40)] = 611,
  [SMALL_STATE(41)] = 621,
  [SMALL_STATE(42)] = 629,
  [SMALL_STATE(43)] = 639,
  [SMALL_STATE(44)] = 649,
  [SMALL_STATE(45)] = 659,
  [SMALL_STATE(46)] = 669,
  [SMALL_STATE(47)] = 679,
  [SMALL_STATE(48)] = 687,
  [SMALL_STATE(49)] = 697,
  [SMALL_STATE(50)] = 707,
  [SMALL_STATE(51)] = 717,
  [SMALL_STATE(52)] = 727,
  [SMALL_STATE(53)] = 737,
  [SMALL_STATE(54)] = 747,
  [SMALL_STATE(55)] = 757,
  [SMALL_STATE(56)] = 767,
  [SMALL_STATE(57)] = 777,
  [SMALL_STATE(58)] = 787,
  [SMALL_STATE(59)] = 797,
  [SMALL_STATE(60)] = 807,
  [SMALL_STATE(61)] = 817,
  [SMALL_STATE(62)] = 825,
  [SMALL_STATE(63)] = 835,
  [SMALL_STATE(64)] = 845,
  [SMALL_STATE(65)] = 853,
  [SMALL_STATE(66)] = 863,
  [SMALL_STATE(67)] = 873,
  [SMALL_STATE(68)] = 881,
  [SMALL_STATE(69)] = 891,
  [SMALL_STATE(70)] = 901,
  [SMALL_STATE(71)] = 911,
  [SMALL_STATE(72)] = 921,
  [SMALL_STATE(73)] = 929,
  [SMALL_STATE(74)] = 937,
  [SMALL_STATE(75)] = 947,
  [SMALL_STATE(76)] = 952,
  [SMALL_STATE(77)] = 957,
  [SMALL_STATE(78)] = 964,
  [SMALL_STATE(79)] = 971,
  [SMALL_STATE(80)] = 976,
  [SMALL_STATE(81)] = 981,
  [SMALL_STATE(82)] = 986,
  [SMALL_STATE(83)] = 993,
  [SMALL_STATE(84)] = 998,
  [SMALL_STATE(85)] = 1002,
  [SMALL_STATE(86)] = 1006,
  [SMALL_STATE(87)] = 1010,
  [SMALL_STATE(88)] = 1014,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
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
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(78),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(20),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(41),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat1, 2), SHIFT_REPEAT(81),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(39),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 5, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataDecl, 5, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 6, .production_id = 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataDecl, 6, .production_id = 5),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2), SHIFT_REPEAT(48),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataDecl_repeat2, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 6, .production_id = 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataDecl, 6, .production_id = 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(77),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(13),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2), SHIFT_REPEAT(86),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataDecl, 7, .production_id = 7),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataDecl, 7, .production_id = 7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeVarBinding, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [224] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
