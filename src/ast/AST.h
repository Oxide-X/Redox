#pragma once
#include <memory>
#include <vector>
#include <string>

namespace Redox::AST {
class Expr { public: virtual ~Expr() = default; };
class Stmt { public: virtual ~Stmt() = default; };
class Type { public: virtual ~Type() = default; };
} // namespace Redox::AST
