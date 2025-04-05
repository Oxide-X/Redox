#pragma once
#include "../lexer/Lexer.h"
#include "../ast/AST.h"

namespace Redox::Parser {
class Parser {
public:
    explicit Parser(const std::vector<Lexer::Token>& tokens);
    std::unique_ptr<AST::Stmt> parse();
private:
    std::vector<Lexer::Token> tokens;
    size_t current = 0;
    const Lexer::Token& peek() const;
    const Lexer::Token& previous() const;
    bool match(Lexer::TokenType type);
    const Lexer::Token& consume(Lexer::TokenType type, const std::string& message);
};
} // namespace Redox::Parser
