#pragma once
#include "../ast/AST.h"
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>

namespace Redox::CodeGen {
class CodeGenerator {
public:
    CodeGenerator();
    void generate(const AST::Stmt& stmt);
private:
    llvm::LLVMContext context;
    std::unique_ptr<llvm::Module> module;
};
} // namespace Redox::CodeGen
