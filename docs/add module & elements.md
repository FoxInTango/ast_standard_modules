1,实现相应类型 ASTElement 和 接口
  AST_SYMBOL(element_class_name)

  element_class_name::ns   = 
  element_class_name::name = 
  element_class_name::type = 
  element_class_name::execute {}
2,实现本模块ModuleInterface 及导出函数 ast_symbols
  virtual bool containVariable(const char* name);
  virtual void* exportVariable(const char* name){
      
  }