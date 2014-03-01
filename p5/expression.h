#ifndef EXPRESSION_H_
#define EXPRESSION_H_
# include "variable.h"
# include "Gpl_type.h"


class Expression {
  public:
    Expression();
    Expression(Gpl_type gpl, int x);
  private:
    Operator_type m_op;
    int m_int;
    Variable *m_var;
    Gpl_type m_gpl;

};
#endif
