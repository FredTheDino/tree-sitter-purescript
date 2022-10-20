#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  aux_sym_module_name_token1 = 3,
  anon_sym_DOT = 4,
  anon_sym_data = 5,
  anon_sym_EQ = 6,
  anon_sym_PIPE = 7,
  aux_sym_type_variable_token1 = 8,
  anon_sym_AT = 9,
  aux_sym_expression_token1 = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_LPAREN = 13,
  anon_sym_COLON = 14,
  anon_sym_RPAREN = 15,
  anon_sym_LBRACK = 16,
  anon_sym_COMMA = 17,
  anon_sym_RBRACK = 18,
  sym_module = 19,
  sym_module_name = 20,
  sym__top_definition = 21,
  sym_data = 22,
  sym_type_variable = 23,
  sym__type = 24,
  sym_function_definition = 25,
  sym_identifier = 26,
  sym__pattern = 27,
  sym__argument = 28,
  sym_expression = 29,
  aux_sym_module_repeat1 = 30,
  aux_sym_module_name_repeat1 = 31,
  aux_sym_data_repeat1 = 32,
  aux_sym_data_repeat2 = 33,
  aux_sym_function_definition_repeat1 = 34,
  aux_sym_expression_repeat1 = 35,
  aux_sym_expression_repeat2 = 36,
  aux_sym_expression_repeat3 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [aux_sym_module_name_token1] = "module_name_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_data] = "data",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [aux_sym_type_variable_token1] = "type_variable_token1",
  [anon_sym_AT] = "@",
  [aux_sym_expression_token1] = "expression_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_module] = "module",
  [sym_module_name] = "module_name",
  [sym__top_definition] = "_top_definition",
  [sym_data] = "data",
  [sym_type_variable] = "type_variable",
  [sym__type] = "_type",
  [sym_function_definition] = "function_definition",
  [sym_identifier] = "identifier",
  [sym__pattern] = "_pattern",
  [sym__argument] = "_argument",
  [sym_expression] = "expression",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_module_name_repeat1] = "module_name_repeat1",
  [aux_sym_data_repeat1] = "data_repeat1",
  [aux_sym_data_repeat2] = "data_repeat2",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_expression_repeat2] = "expression_repeat2",
  [aux_sym_expression_repeat3] = "expression_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_where] = anon_sym_where,
  [aux_sym_module_name_token1] = aux_sym_module_name_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_type_variable_token1] = aux_sym_type_variable_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_module] = sym_module,
  [sym_module_name] = sym_module_name,
  [sym__top_definition] = sym__top_definition,
  [sym_data] = sym_data,
  [sym_type_variable] = sym_type_variable,
  [sym__type] = sym__type,
  [sym_function_definition] = sym_function_definition,
  [sym_identifier] = sym_identifier,
  [sym__pattern] = sym__pattern,
  [sym__argument] = sym__argument,
  [sym_expression] = sym_expression,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_module_name_repeat1] = aux_sym_module_name_repeat1,
  [aux_sym_data_repeat1] = aux_sym_data_repeat1,
  [aux_sym_data_repeat2] = aux_sym_data_repeat2,
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
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_module_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
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
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym__top_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_data] = {
    .visible = true,
    .named = true,
  },
  [sym_type_variable] = {
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
  [sym_identifier] = {
    .visible = true,
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
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_repeat2] = {
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
  field_arguments = 1,
  field_body = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 4},
  [6] = {.index = 13, .length = 4},
  [7] = {.index = 17, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 2},
    {field_name, 0},
  [3] =
    {field_arguments, 1},
    {field_body, 3},
    {field_name, 0},
  [6] =
    {field_body, 3},
    {field_body, 4},
    {field_name, 1},
  [9] =
    {field_body, 3},
    {field_body, 4},
    {field_body, 5},
    {field_name, 1},
  [13] =
    {field_arguments, 2},
    {field_body, 4},
    {field_body, 5},
    {field_name, 1},
  [17] =
    {field_arguments, 2},
    {field_body, 4},
    {field_body, 5},
    {field_body, 6},
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
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
  [30] = 30,
  [31] = 31,
  [32] = 17,
  [33] = 33,
  [34] = 34,
  [35] = 16,
  [36] = 8,
  [37] = 14,
  [38] = 29,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 42,
  [47] = 47,
  [48] = 48,
  [49] = 43,
  [50] = 39,
  [51] = 41,
  [52] = 45,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 53,
  [58] = 54,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(8);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_module_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_data);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 'a') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (lookahead == 't') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_type_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [aux_sym_module_name_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(77),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_data,
    ACTIONS(9), 1,
      aux_sym_type_variable_token1,
    STATE(10), 1,
      sym_identifier,
    STATE(4), 4,
      sym__top_definition,
      sym_data,
      sym_function_definition,
      aux_sym_module_repeat1,
  [19] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_data,
    ACTIONS(16), 1,
      aux_sym_type_variable_token1,
    STATE(10), 1,
      sym_identifier,
    STATE(3), 4,
      sym__top_definition,
      sym_data,
      sym_function_definition,
      aux_sym_module_repeat1,
  [38] = 5,
    ACTIONS(7), 1,
      anon_sym_data,
    ACTIONS(9), 1,
      aux_sym_type_variable_token1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_identifier,
    STATE(3), 4,
      sym__top_definition,
      sym_data,
      sym_function_definition,
      aux_sym_module_repeat1,
  [57] = 6,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_expression,
    ACTIONS(21), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
  [77] = 6,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym_expression,
    ACTIONS(21), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
  [97] = 5,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_expression,
    ACTIONS(33), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
  [114] = 2,
    ACTIONS(43), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [125] = 4,
    ACTIONS(45), 1,
      anon_sym_EQ,
    ACTIONS(47), 1,
      aux_sym_type_variable_token1,
    STATE(59), 1,
      sym_identifier,
    STATE(9), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [140] = 4,
    ACTIONS(50), 1,
      anon_sym_EQ,
    ACTIONS(52), 1,
      aux_sym_type_variable_token1,
    STATE(59), 1,
      sym_identifier,
    STATE(15), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [155] = 5,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_expression,
    ACTIONS(33), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
  [172] = 5,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_expression,
    ACTIONS(21), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
  [189] = 5,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_expression,
    ACTIONS(21), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
  [206] = 2,
    ACTIONS(56), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [217] = 4,
    ACTIONS(52), 1,
      aux_sym_type_variable_token1,
    ACTIONS(58), 1,
      anon_sym_EQ,
    STATE(59), 1,
      sym_identifier,
    STATE(9), 3,
      sym__pattern,
      sym__argument,
      aux_sym_function_definition_repeat1,
  [232] = 2,
    ACTIONS(62), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [243] = 2,
    ACTIONS(66), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [254] = 5,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_expression,
    ACTIONS(21), 2,
      aux_sym_type_variable_token1,
      aux_sym_expression_token1,
  [271] = 4,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym_data_repeat2,
    ACTIONS(70), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [285] = 4,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym_data_repeat2,
    ACTIONS(76), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [299] = 4,
    ACTIONS(72), 1,
      anon_sym_PIPE,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_data_repeat2,
    ACTIONS(83), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [313] = 4,
    ACTIONS(72), 1,
      anon_sym_PIPE,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_data_repeat2,
    ACTIONS(87), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [327] = 4,
    ACTIONS(72), 1,
      anon_sym_PIPE,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_data_repeat2,
    ACTIONS(91), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [341] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(95), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [350] = 2,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 3,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [359] = 3,
    ACTIONS(101), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      aux_sym_type_variable_token1,
    STATE(33), 2,
      sym_type_variable,
      aux_sym_data_repeat1,
  [370] = 3,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [381] = 3,
    ACTIONS(111), 1,
      aux_sym_type_variable_token1,
    STATE(28), 1,
      aux_sym_expression_repeat1,
    ACTIONS(114), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [392] = 4,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_expression_repeat2,
  [405] = 3,
    ACTIONS(103), 1,
      aux_sym_type_variable_token1,
    ACTIONS(120), 1,
      anon_sym_EQ,
    STATE(26), 2,
      sym_type_variable,
      aux_sym_data_repeat1,
  [416] = 3,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 2,
      anon_sym_data,
      aux_sym_type_variable_token1,
  [427] = 1,
    ACTIONS(64), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [434] = 3,
    ACTIONS(126), 1,
      anon_sym_EQ,
    ACTIONS(128), 1,
      aux_sym_type_variable_token1,
    STATE(33), 2,
      sym_type_variable,
      aux_sym_data_repeat1,
  [445] = 2,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(131), 3,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [454] = 1,
    ACTIONS(60), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [461] = 1,
    ACTIONS(41), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [468] = 1,
    ACTIONS(54), 4,
      aux_sym_type_variable_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [475] = 4,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_expression_repeat2,
  [488] = 3,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      aux_sym_type_variable_token1,
    STATE(28), 1,
      aux_sym_expression_repeat1,
  [498] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_expression_repeat2,
  [508] = 3,
    ACTIONS(144), 1,
      aux_sym_type_variable_token1,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_expression_repeat3,
  [518] = 3,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      aux_sym_type_variable_token1,
    STATE(51), 1,
      aux_sym_expression_repeat3,
  [528] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_expression_repeat2,
  [538] = 2,
    STATE(22), 1,
      sym__type,
    ACTIONS(148), 2,
      aux_sym_module_name_token1,
      aux_sym_type_variable_token1,
  [546] = 3,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(137), 1,
      aux_sym_type_variable_token1,
    STATE(28), 1,
      aux_sym_expression_repeat1,
  [556] = 3,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      aux_sym_type_variable_token1,
    STATE(41), 1,
      aux_sym_expression_repeat3,
  [566] = 2,
    STATE(21), 1,
      sym__type,
    ACTIONS(150), 2,
      aux_sym_module_name_token1,
      aux_sym_type_variable_token1,
  [574] = 3,
    ACTIONS(52), 1,
      aux_sym_type_variable_token1,
    STATE(69), 1,
      sym__pattern,
    STATE(73), 1,
      sym_identifier,
  [584] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_expression_repeat2,
  [594] = 3,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      aux_sym_type_variable_token1,
    STATE(28), 1,
      aux_sym_expression_repeat1,
  [604] = 3,
    ACTIONS(144), 1,
      aux_sym_type_variable_token1,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_expression_repeat3,
  [614] = 3,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(137), 1,
      aux_sym_type_variable_token1,
    STATE(28), 1,
      aux_sym_expression_repeat1,
  [624] = 3,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      aux_sym_type_variable_token1,
    STATE(39), 1,
      aux_sym_expression_repeat1,
  [634] = 3,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(137), 1,
      aux_sym_type_variable_token1,
    STATE(45), 1,
      aux_sym_expression_repeat1,
  [644] = 3,
    ACTIONS(154), 1,
      anon_sym_where,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_module_name_repeat1,
  [654] = 2,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [662] = 3,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      aux_sym_type_variable_token1,
    STATE(50), 1,
      aux_sym_expression_repeat1,
  [672] = 3,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(137), 1,
      aux_sym_type_variable_token1,
    STATE(52), 1,
      aux_sym_expression_repeat1,
  [682] = 2,
    ACTIONS(160), 1,
      anon_sym_AT,
    ACTIONS(158), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [690] = 3,
    ACTIONS(162), 1,
      aux_sym_type_variable_token1,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_expression_repeat3,
  [700] = 2,
    STATE(24), 1,
      sym__type,
    ACTIONS(167), 2,
      aux_sym_module_name_token1,
      aux_sym_type_variable_token1,
  [708] = 1,
    ACTIONS(169), 3,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
      anon_sym_AT,
  [714] = 3,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(171), 1,
      anon_sym_where,
    STATE(65), 1,
      aux_sym_module_name_repeat1,
  [724] = 2,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 2,
      aux_sym_type_variable_token1,
      anon_sym_RBRACE,
  [732] = 3,
    ACTIONS(175), 1,
      anon_sym_where,
    ACTIONS(177), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_module_name_repeat1,
  [742] = 1,
    ACTIONS(175), 2,
      anon_sym_where,
      anon_sym_DOT,
  [747] = 1,
    ACTIONS(180), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [752] = 2,
    ACTIONS(182), 1,
      aux_sym_module_name_token1,
    STATE(72), 1,
      sym_module_name,
  [759] = 1,
    ACTIONS(184), 2,
      anon_sym_EQ,
      aux_sym_type_variable_token1,
  [764] = 1,
    ACTIONS(186), 1,
      aux_sym_module_name_token1,
  [768] = 1,
    ACTIONS(188), 1,
      aux_sym_module_name_token1,
  [772] = 1,
    ACTIONS(190), 1,
      anon_sym_where,
  [776] = 1,
    ACTIONS(160), 1,
      anon_sym_AT,
  [780] = 1,
    ACTIONS(192), 1,
      aux_sym_module_name_token1,
  [784] = 1,
    ACTIONS(194), 1,
      aux_sym_module_name_token1,
  [788] = 1,
    ACTIONS(196), 1,
      anon_sym_EQ,
  [792] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [796] = 1,
    ACTIONS(200), 1,
      aux_sym_module_name_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 77,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 140,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 189,
  [SMALL_STATE(14)] = 206,
  [SMALL_STATE(15)] = 217,
  [SMALL_STATE(16)] = 232,
  [SMALL_STATE(17)] = 243,
  [SMALL_STATE(18)] = 254,
  [SMALL_STATE(19)] = 271,
  [SMALL_STATE(20)] = 285,
  [SMALL_STATE(21)] = 299,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 327,
  [SMALL_STATE(24)] = 341,
  [SMALL_STATE(25)] = 350,
  [SMALL_STATE(26)] = 359,
  [SMALL_STATE(27)] = 370,
  [SMALL_STATE(28)] = 381,
  [SMALL_STATE(29)] = 392,
  [SMALL_STATE(30)] = 405,
  [SMALL_STATE(31)] = 416,
  [SMALL_STATE(32)] = 427,
  [SMALL_STATE(33)] = 434,
  [SMALL_STATE(34)] = 445,
  [SMALL_STATE(35)] = 454,
  [SMALL_STATE(36)] = 461,
  [SMALL_STATE(37)] = 468,
  [SMALL_STATE(38)] = 475,
  [SMALL_STATE(39)] = 488,
  [SMALL_STATE(40)] = 498,
  [SMALL_STATE(41)] = 508,
  [SMALL_STATE(42)] = 518,
  [SMALL_STATE(43)] = 528,
  [SMALL_STATE(44)] = 538,
  [SMALL_STATE(45)] = 546,
  [SMALL_STATE(46)] = 556,
  [SMALL_STATE(47)] = 566,
  [SMALL_STATE(48)] = 574,
  [SMALL_STATE(49)] = 584,
  [SMALL_STATE(50)] = 594,
  [SMALL_STATE(51)] = 604,
  [SMALL_STATE(52)] = 614,
  [SMALL_STATE(53)] = 624,
  [SMALL_STATE(54)] = 634,
  [SMALL_STATE(55)] = 644,
  [SMALL_STATE(56)] = 654,
  [SMALL_STATE(57)] = 662,
  [SMALL_STATE(58)] = 672,
  [SMALL_STATE(59)] = 682,
  [SMALL_STATE(60)] = 690,
  [SMALL_STATE(61)] = 700,
  [SMALL_STATE(62)] = 708,
  [SMALL_STATE(63)] = 714,
  [SMALL_STATE(64)] = 724,
  [SMALL_STATE(65)] = 732,
  [SMALL_STATE(66)] = 742,
  [SMALL_STATE(67)] = 747,
  [SMALL_STATE(68)] = 752,
  [SMALL_STATE(69)] = 759,
  [SMALL_STATE(70)] = 764,
  [SMALL_STATE(71)] = 768,
  [SMALL_STATE(72)] = 772,
  [SMALL_STATE(73)] = 776,
  [SMALL_STATE(74)] = 780,
  [SMALL_STATE(75)] = 784,
  [SMALL_STATE(76)] = 788,
  [SMALL_STATE(77)] = 792,
  [SMALL_STATE(78)] = 796,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(70),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(62),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(62),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 7, .production_id = 7),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 7, .production_id = 7),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat2, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_repeat2, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_repeat2, 2), SHIFT_REPEAT(75),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 5, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 5, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 6, .production_id = 6),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 6, .production_id = 6),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 6, .production_id = 5),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 6, .production_id = 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat2, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_repeat2, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(34),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(67),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(18),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2), SHIFT_REPEAT(76),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(71),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
