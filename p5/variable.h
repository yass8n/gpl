#ifndef VARIABLE_H_
#define VARIABLE_H_
# include <iostream>
using namespace std;
# include "symbol.h"
# include "symbol_table.h"
# include <assert.h>
//# include "saver.h"

class Expression;
class Variable{
  public:
    Variable(string id);
    Variable(string id, Expression *exp);
    int get_int_value();
    double get_double_value();
    string get_string_value();
    string get_name()
    { return m_id; };
    Gpl_type get_type();
    string m_id;
    int eval_int();
    string eval_string();
    double eval_double();
  private:
    string m_string_type;
    Symbol *m_sym;
    Expression *m_exp;
};
#endif
