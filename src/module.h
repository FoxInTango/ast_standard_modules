#include <libast/libast.h>
#include <libmodule/libmodule.h>
AST_SYMBOL(map);
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