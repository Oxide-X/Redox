#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

#include <string>

using namespace std;

enum class TokenType {
  // Keywords
  ifKeyword,
  elseKeyword,
  whileKeyword,
  returnKeyword,

  // Arithmatic Operators
  plus,    // +
  minus,   // -
  astrisk, // *
  slash,   // /

  // Symbols
  lParen, // (
  rParen, // )
  lBrace, // {
  rBrace, // }
  semicolon,

  // DataTypes
  integer,
  floating, // renamed from FLOAT to avoid conflict with keyword `float`
  boolean,  // renamed from BOOL to avoid confusion with `bool`
  character,
  string,

  // Others
  identifier,
  endOfFile,
  unknown
};

// Convert TokenType to string for better printing
string tokenTypeToString(TokenType type);

#endif // TOKEN_TYPE_H
