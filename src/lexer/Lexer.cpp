#include "Lexer.h"
#include "Token/Token.h"

Lexer::Lexer(string sourcePath, int position, int readPosition, int lineNo,
             int currentChar)
    : sourcePath(sourcePath), position(position), readPosition(readPosition),
      lineNo(lineNo) {
  readChar();
}

void Lexer::readChar() {
  if (readPosition > sourceCode.size())
    currentChar = '\0';
  else
    currentChar = sourceCode[readPosition];
  position = readPosition;
  readPosition += 1;
}

Token Lexer::nextChar() {
  Token token;
  skipWiteSpace();
}

void Lexer::skipWhiteSpace() {}
