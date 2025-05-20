#ifndef TOKEN_H
#define TOKEN_H

#include "TokenType.h"
#include <ostream>
#include <string>

using namespace std;

class Token {
public:
  TokenType type;
  string literal;
  int lineNo;
  int position;

  Token() = default;

  Token(TokenType type, string literal, int lineNo, int position);
};

// Overload operator<< for printing Token object
ostream &operator<<(ostream &os, const TokenType);

#endif // !TOKEN_H
