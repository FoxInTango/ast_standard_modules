#include "module.h"
Array<ASTElementInterface*> ast_symbols;

ASTModuleInterface::ASTModuleInterface(){}
ASTModuleInterface::~ASTModuleInterface(){}
bool ASTModuleInterface::containVariable(const char* name) {
    return false;
}

void* ASTModuleInterface::exportVariable(const char* name) {
    AST_EXPORT(ast_map);
    return &ast_symbols;
}

ASTModuleInterface foxintangoAPI MODULE_INTERFACE_INSTANCE;