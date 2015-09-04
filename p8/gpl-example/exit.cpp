# include "exit.h"
void Exit::execute()
{
  cout << "gpl[" << m_line_number << "]: exit(" << m_exp->eval_int() << ")"<<endl;
  exit(m_exp->eval_int());
}
Exit::Exit(int line_number, Expression * exp)
{
  m_line_number = line_number;
  m_exp = exp;
}
