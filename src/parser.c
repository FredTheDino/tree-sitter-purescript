#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_moduleName_token1 = 1,
  aux_sym_moduleName_token2 = 2,
  anon_sym_as = 3,
  anon_sym_hiding = 4,
  anon_sym_role = 5,
  anon_sym_nominal = 6,
  anon_sym_representational = 7,
  anon_sym_phantom = 8,
  aux_sym_qualOp_token1 = 9,
  anon_sym_DASH = 10,
  anon_sym_COLON = 11,
  aux_sym_qualSymbol_token1 = 12,
  anon_sym_LPAREN_DOT_DOT_RPAREN = 13,
  aux_sym_label_token1 = 14,
  aux_sym_label_token2 = 15,
  anon_sym_ado = 16,
  anon_sym_case = 17,
  anon_sym_class = 18,
  anon_sym_data = 19,
  anon_sym_derive = 20,
  anon_sym_do = 21,
  anon_sym_else = 22,
  anon_sym_false = 23,
  anon_sym_forall = 24,
  anon_sym_foreign = 25,
  anon_sym_import = 26,
  anon_sym_if = 27,
  anon_sym_in = 28,
  anon_sym_let = 29,
  anon_sym_module = 30,
  anon_sym_newtype = 31,
  anon_sym_of = 32,
  anon_sym_then = 33,
  anon_sym_true = 34,
  anon_sym_type = 35,
  anon_sym_where = 36,
  sym_char = 37,
  aux_sym_number_token2 = 38,
  anon_sym_COLON_COLON = 39,
  anon_sym_DOT = 40,
  anon_sym__ = 41,
  anon_sym_LBRACE = 42,
  anon_sym_RBRACE = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  anon_sym_PIPE = 46,
  anon_sym_COMMA = 47,
  anon_sym_BQUOTE = 48,
  anon_sym_BSLASH = 49,
  anon_sym_LBRACK = 50,
  anon_sym_RBRACK = 51,
  anon_sym_EQ = 52,
  anon_sym_AT = 53,
  anon_sym_classs = 54,
  sym_begin = 55,
  sym_end = 56,
  sym_sep = 57,
  sym_moduleName = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_moduleName_token1] = "moduleName_token1",
  [aux_sym_moduleName_token2] = "moduleName_token2",
  [anon_sym_as] = "as",
  [anon_sym_hiding] = "hiding",
  [anon_sym_role] = "role",
  [anon_sym_nominal] = "nominal",
  [anon_sym_representational] = "representational",
  [anon_sym_phantom] = "phantom",
  [aux_sym_qualOp_token1] = "qualOp_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_COLON] = ":",
  [aux_sym_qualSymbol_token1] = "qualSymbol_token1",
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = "(..)",
  [aux_sym_label_token1] = "label_token1",
  [aux_sym_label_token2] = "label_token2",
  [anon_sym_ado] = "ado",
  [anon_sym_case] = "case",
  [anon_sym_class] = "class",
  [anon_sym_data] = "data",
  [anon_sym_derive] = "derive",
  [anon_sym_do] = "do",
  [anon_sym_else] = "else",
  [anon_sym_false] = "false",
  [anon_sym_forall] = "forall",
  [anon_sym_foreign] = "foreign",
  [anon_sym_import] = "import",
  [anon_sym_if] = "if",
  [anon_sym_in] = "in",
  [anon_sym_let] = "let",
  [anon_sym_module] = "module",
  [anon_sym_newtype] = "newtype",
  [anon_sym_of] = "of",
  [anon_sym_then] = "then",
  [anon_sym_true] = "true",
  [anon_sym_type] = "type",
  [anon_sym_where] = "where",
  [sym_char] = "char",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT] = ".",
  [anon_sym__] = "_",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [anon_sym_COMMA] = ",",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_AT] = "@",
  [anon_sym_classs] = "classs",
  [sym_begin] = "begin",
  [sym_end] = "end",
  [sym_sep] = "sep",
  [sym_moduleName] = "moduleName",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_moduleName_token1] = aux_sym_moduleName_token1,
  [aux_sym_moduleName_token2] = aux_sym_moduleName_token2,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_hiding] = anon_sym_hiding,
  [anon_sym_role] = anon_sym_role,
  [anon_sym_nominal] = anon_sym_nominal,
  [anon_sym_representational] = anon_sym_representational,
  [anon_sym_phantom] = anon_sym_phantom,
  [aux_sym_qualOp_token1] = aux_sym_qualOp_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_qualSymbol_token1] = aux_sym_qualSymbol_token1,
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = anon_sym_LPAREN_DOT_DOT_RPAREN,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [aux_sym_label_token2] = aux_sym_label_token2,
  [anon_sym_ado] = anon_sym_ado,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_derive] = anon_sym_derive,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_foreign] = anon_sym_foreign,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_newtype] = anon_sym_newtype,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_where] = anon_sym_where,
  [sym_char] = sym_char,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_classs] = anon_sym_classs,
  [sym_begin] = sym_begin,
  [sym_end] = sym_end,
  [sym_sep] = sym_sep,
  [sym_moduleName] = sym_moduleName,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_moduleName_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_moduleName_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hiding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_role] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nominal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_representational] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phantom] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qualOp_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qualSymbol_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ado] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_derive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_classs] = {
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
  [sym_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_moduleName] = {
    .visible = true,
    .named = true,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '(') ADVANCE(146);
      if (lookahead == ')') ADVANCE(147);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '[') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '`') ADVANCE(150);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '|') ADVANCE(148);
      if (lookahead == '}') ADVANCE(145);
      if (('*' <= lookahead && lookahead <= '/')) ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('!' <= lookahead && lookahead <= '$') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == 163) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(139);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 94:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 95:
      if (lookahead == 'w') ADVANCE(86);
      END_STATE();
    case 96:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 97:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_moduleName_token1);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_moduleName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_moduleName_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_moduleName_token2);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_moduleName_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_moduleName_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_role);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_nominal);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_representational);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_phantom);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_qualOp_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(141);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_qualSymbol_token1);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '<' ||
          ('>' <= lookahead && lookahead <= '@') ||
          lookahead == 163) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ado);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_derive);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_newtype);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '<' ||
          ('>' <= lookahead && lookahead <= '@') ||
          lookahead == 163) ADVANCE(115);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_classs);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
};

enum {
  ts_external_token_begin = 0,
  ts_external_token_end = 1,
  ts_external_token_sep = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_begin] = sym_begin,
  [ts_external_token_end] = sym_end,
  [ts_external_token_sep] = sym_sep,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_begin] = true,
    [ts_external_token_end] = true,
    [ts_external_token_sep] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_moduleName_token1] = ACTIONS(1),
    [aux_sym_moduleName_token2] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_hiding] = ACTIONS(1),
    [anon_sym_role] = ACTIONS(1),
    [anon_sym_nominal] = ACTIONS(1),
    [anon_sym_representational] = ACTIONS(1),
    [anon_sym_phantom] = ACTIONS(1),
    [aux_sym_qualOp_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_qualSymbol_token1] = ACTIONS(1),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [aux_sym_label_token2] = ACTIONS(1),
    [anon_sym_ado] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_derive] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [anon_sym_foreign] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_newtype] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_classs] = ACTIONS(1),
    [sym_begin] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [sym_sep] = ACTIONS(1),
  },
  [1] = {
    [sym_moduleName] = STATE(3),
    [aux_sym_moduleName_token1] = ACTIONS(3),
    [aux_sym_moduleName_token2] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleName, 1),
  [9] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
