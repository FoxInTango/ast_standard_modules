#include <libast/libast.h>
#include <libmodule/libmodule.h>
#include <libcpp/libcpp.h>
using namespace foxintango;
AST_SYMBOL(ast_map);
class foxintangoAPI ASTModuleInterface :public ModuleInterface {
public:
    ASTModuleInterface();
    virtual ~ASTModuleInterface();
public:
    virtual bool  containClass(const char* name);
    virtual void* createObject(const char* name, const Model& model = Model());

    virtual bool  containFunction(const char* name);
    virtual void* exportFunction(const char* name);

    virtual bool containVariable(const char* name);
    virtual void* exportVariable(const char* name);
};

#ifdef(STATIC_LINKED_MODULE)
    extern ASTModuleInterface foxintangoAPI MODULE_INTERFACE_INSTANCE;
#endif
