#include "Token.h"

Token::Token(TokenType type, string literal, int lineNo, int position)
    : type(type), literal(literal), lineNo(lineNo), position(position) {}

ostream &operator<<(ostream &os, const Token &token) {
  os << "Token(type:" << tokenTypeToString(token.type)
     << ",literal: " << token.literal << ", position: " << token.position
     << ", line:" << token.lineNo << ")";

  return os;
}
