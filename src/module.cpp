#include "module.h"
Array<ASTElement*> ast_symbols;

ASTModuleInterface::ASTModuleInterface(){}
ASTModuleInterface::~ASTModuleInterface(){}
bool ASTModuleInterface::containVariable(const char* name) {
    return false;
}

void* ASTModuleInterface::exportVariable(const char* name) {
    AST_EXPORT(ast_map);
    return 0;
}

ASTModuleInterface foxintangoAPI MODULE_INTERFACE_INSTANCE;