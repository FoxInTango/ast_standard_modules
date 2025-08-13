#include "module.h"
#include <map>
#include <vector>
std::vector<ASTElementInterface*> AST_MODULE_SYMBOLS;

ASTModuleInterface::ASTModuleInterface(){}
ASTModuleInterface::~ASTModuleInterface(){}
bool ASTModuleInterface::containVariable(const char* name) {
    return false;
}

void* ASTModuleInterface::exportVariable(const char* name) {
    AST_EXPORT(ast_map);
    return &AST_MODULE_SYMBOLS;
}

ASTModuleInterface foxintangoAPI MODULE_INTERFACE_INSTANCE;