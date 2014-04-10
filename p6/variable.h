#ifndef VARIABLE_H_
#define VARIABLE_H_
# include <iostream>
using namespace std;
# include "symbol.h"
# include "symbol_table.h"
# include <assert.h>
//# include "saver.h"
class Animation_block;
class Expression;
class Variable{
  public:
    Variable(string id);
    Variable();
    Variable(string id, Expression *exp);
    int get_int_value();
    Animation_block* return_animation_block();
    double get_double_value();
    string get_string_value();
    string get_name();
    Gpl_type get_type();
    bool included();
    string m_id;
    int eval_int();
    string eval_string();
    double eval_double();
  private:
    string m_string_type;
    bool m_included;
    Symbol *m_sym;
    Expression *m_exp;
};
#endif
