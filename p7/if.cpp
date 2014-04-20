# include "if.h"
void If::execute()
{
  if(m_exp->eval_int())
    m_if->execute();
  else if (m_else)
    m_else->execute();
}
If::If(Expression *exp, Statement_block * if_block, Statement_block *else_block)
{
  m_exp = exp;
  m_if = if_block;
  m_else = else_block;
}
