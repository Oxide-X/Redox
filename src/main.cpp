#include "lexer/Lexer.h"
#include "parser/Parser.h"
#include "semantic/SemanticAnalyzer.h"
#include "codegen/CodeGenerator.h"
#include "utils/Diagnostics.h"
#include <fstream>
#include <sstream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        Redox::Utils::Diagnostics::error(0, "No input file specified");
        return 1;
    }
    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        Redox::Utils::Diagnostics::error(0, "Could not open file: " + std::string(argv[1]));
        return 1;
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string source = buffer.str();
    Redox::Lexer::Lexer lexer(source);
    auto tokens = lexer.tokenize();
    Redox::Parser::Parser parser(tokens);
    auto ast = parser.parse();
    Redox::Semantic::SemanticAnalyzer analyzer;
    analyzer.analyze(*ast);
    Redox::CodeGen::CodeGenerator codegen;
    codegen.generate(*ast);
    return 0;
}
