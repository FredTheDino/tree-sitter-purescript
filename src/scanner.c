#include <assert.h>
#include <stdio.h>
#include <tree_sitter/parser.h>

// TODO[et]: Line and block comments
enum TokenType { BEGIN, END, CONT };

struct State {
  uint32_t indentLevel;
};

#define STATE_SIZE sizeof(struct State)

void *tree_sitter_purescript_external_scanner_create() {
  struct State *state = malloc(STATE_SIZE);
  state->indentLevel = 0;
  return state;
}

void tree_sitter_purescript_external_scanner_destroy(void *payload) {
  free(payload);
}

unsigned tree_sitter_purescript_external_scanner_serialize(void *payload,
                                                           char *buffer) {
  char *p = (char *)payload;
  for (int i = 0; i < STATE_SIZE; i++) {
    buffer[i] = p[i];
  }
  return STATE_SIZE;
}

void tree_sitter_purescript_external_scanner_deserialize(void *payload,
                                                         const char *buffer,
                                                         unsigned length) {
  if (length == 0)
    return;

  assert(length == STATE_SIZE);
  char *p = (char *)payload;
  for (int i = 0; i < STATE_SIZE; i++) {
    p[i] = buffer[i];
  }
}

bool isWhitespace(int32_t c) {
  return c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' ||
         c == '\r';
}

bool isNewline(int32_t c) { return c == '\n'; }

bool eatUntilNonWhitespace(TSLexer *lexer) {
  bool linebreak = false;
  while (isWhitespace(lexer->lookahead)) {
    linebreak |= isNewline(lexer->lookahead);
    lexer->advance(lexer, !linebreak);
  }
  return linebreak;
}

bool tree_sitter_purescript_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  struct State *state = (struct State *)payload;

  if ((valid_symbols[BEGIN] || valid_symbols[END] || valid_symbols[CONT]) &&
      eatUntilNonWhitespace(lexer)) {
    uint32_t indent = lexer->get_column(lexer);
    if (valid_symbols[CONT] && state->indentLevel == indent) {
      state->indentLevel = indent;
      lexer->result_symbol = CONT;
      return true;
    }
    if (valid_symbols[BEGIN] && indent > state->indentLevel) {
      state->indentLevel = indent;
      lexer->result_symbol = BEGIN;
      return true;
    }
    if (valid_symbols[END] && indent < state->indentLevel) {
      state->indentLevel = indent;
      lexer->result_symbol = END;
      return true;
    }
  }

  if (valid_symbols[CONT] && lexer->eof(lexer)) {
    lexer->result_symbol = CONT;
    return true;
  } else {
    return false;
  }
}
