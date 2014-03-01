#ifndef VARIABLE_H_
#define VARIABLE_H_
# include <iostream>
using namespace std;
# include "symbol.h"
# include "symbol_table.h"
# include <assert.h>

class Variable{
  public:
    Variable(string id);
    int get_int_value();
    string get_name()
    { return m_id; };
    Gpl_type get_type();
  private:
    string m_id;
    string m_string_type;
    Symbol *m_sym;
};
#endif
