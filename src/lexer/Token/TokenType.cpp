#include "TokenType.h"

string tokenTypeToString(TokenType type) {
  switch (type) {
  case TokenType::ifKeyword:
    return "ifKeyword";
  case TokenType::elseKeyword:
    return "elseKeyword";
  case TokenType::whileKeyword:
    return "whileKeyword";
  case TokenType::returnKeyword:
    return "returnKeyword";

  case TokenType::plus:
    return "plus";
  case TokenType::minus:
    return "minus";
  case TokenType::astrisk:
    return "astrisk";
  case TokenType::slash:
    return "slash";

  case TokenType::lParen:
    return "lParen";
  case TokenType::rParen:
    return "rParen";
  case TokenType::lBrace:
    return "lBrace";
  case TokenType::rBrace:
    return "rBrace";
  case TokenType::semicolon:
    return "semicolon";

  case TokenType::integer:
    return "integer";
  case TokenType::floating:
    return "floating";
  case TokenType::boolean:
    return "boolean";
  case TokenType::character:
    return "character";
  case TokenType::string:
    return "string";

  case TokenType::identifier:
    return "identifier";
  case TokenType::endOfFile:
    return "endOfFile";
  case TokenType::unknown:
    return "unknown";
  default:
    return "UnknownoTokenType";
  }
}
