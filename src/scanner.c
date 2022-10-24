#include <tree_sitter/parser.h>


// TODO[et]: Line and block comments
enum TokenType {
  BEGIN,
  END,
  SEP
};

struct State {
  uint32_t indentLevel;
};

void * tree_sitter_purescript_external_scanner_create() {
  State *state = malloc(sizeof(State));
  state->indentLevel = 0;
  return state;
}

void tree_sitter_purescript_external_scanner_destroy(void *payload) {
  free(payload)
}

unsigned tree_sitter_purescript_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  memcpy(buffer, payload, sizeof(State));
  return sizeof(State);
}

void tree_sitter_purescript_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  assert(length == sizeof(State));
  memcpy(payload, buffer, sizeof(State));
}

bool isWhitespace(int32_t c) {
  return c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r';
}

bool isNewline(int32_t c) {
  return c == '\n';
}

bool eatUntilNonWhitespace(TSLexer *lexer) {
  bool linebreak = false; 
  while (isWhitespace(lexer->lookahead)) {
    linebreak |= isNewline(lexer->lookahead);
    lexer->advance(lexer, true);
  }
  return linebreak;
}

bool tree_sitter_purescript_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  State *state = (State *) payload;

  if ((valid_symbols[BEGIN] || valid_symbols[END] || valid_symbols[SEP]) && eatUntilNonWhitespace(lexer)) {
    uint32_t indent = lexer->get_column(lexer);
    if (valid_symbols[SEP] && state.indentLevel == indent) {
      lexer.result_symbol = SEP;
      return true;
    }
    if (valid_symbols[BEGIN] && indent > state.indentLevel) {
      state.indentLevel = indent;
      lexer.result_symbol = BEGIN;
      return true;
    }
    if (valid_symbols[END] && (indent < state.indentLevel || (state.indentLevel == 0 && indent == 0))) {
      state.indentLevel = indent;
      lexer.result_symbol = END;
      return true;
    }
  }
  return false;
}


