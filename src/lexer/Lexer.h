#ifndef Lexer_H
#define Lexer_H

#include "Token/Token.h"
#include "Token/TokenType.h"
#include <string>

class Lexer {
public:
  string sourcePath;
  string sourceCode;
  int position;
  int readPosition;
  int lineNo;
  char currentChar;

  Lexer(string sourcePath, int position, int readPosition, int lineNo,
        int currentChar);

  void readChar();

  Token nextChar();

  void skipWhiteSpace();
};

#endif // !Lexer_H
