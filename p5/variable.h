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
    double get_double_value();
    string get_string_value();
    string get_name()
    { return m_id; };
    Gpl_type get_type();
    string m_id;
  private:
    string m_string_type;
    Symbol *m_sym;
};
#endif
