#ifndef EXPRESSION_H_
#define EXPRESSION_H_
# include "variable.h"
# include "Gpl_type.h"
# include <assert.h>


class Expression {
  public:
    Expression();
    Expression(Operator_type, Expression*, Expression*);
    Expression(Variable *var);
    Expression(Gpl_type gpl, int x);
    int eval_int();
    Gpl_type get_type(); 
    int evaluate_type();
    void set_type(Gpl_type type);
    void set_type_using_number( int type);
  private:
    string m_string_type;
    Operator_type m_op_type;
    int m_int;
    Variable *m_var;
    Gpl_type m_gpl_type;
    Expression* m_right;
    Expression* m_left;

};
#endif
