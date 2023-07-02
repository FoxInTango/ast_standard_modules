#include "module.h"
#include <libast/libast.h>
#include <libcpp/libcpp.h>
using namespace foxintango;

Array<ASTElement*> ast_symbols;

ASTModuleInterface::ASTModuleInterface(){}
ASTModuleInterface::~ASTModuleInterface(){}
bool ASTModuleInterface::containVariable(const char* name) {
    return false;
}

void* ASTModuleInterface::exportVariable(const char* name) {
    AST_EXPORT(map);
    return 0;
}

ASTModuleInterface foxintangoAPI MODULE_INTERFACE_INSTANCE;