#pragma once
#include "../ast/AST.h"

namespace Redox::Semantic {
class SemanticAnalyzer {
public:
    void analyze(const AST::Stmt& stmt);
};
} // namespace Redox::Semantic
