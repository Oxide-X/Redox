#pragma once
#include <string>
#include <vector>

namespace Redox::Lexer {
enum class TokenType { Identifier, Number, String, Keyword, Plus, Minus, Equal, LParen, RParen, LBrace, RBrace, Semicolon, EndOfFile };
struct Token { TokenType type; std::string lexeme; size_t line; size_t column; };
class Lexer {
public:
    explicit Lexer(const std::string& source);
    std::vector<Token> tokenize();
private:
    std::string source;
    size_t position = 0;
    size_t line = 1;
    size_t column = 1;
    char current() const;
    void advance();
    Token nextToken();
};
} // namespace Redox::Lexer
