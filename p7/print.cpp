# include "print.h"

Print::Print(int line_number, Expression * exp)
{
  m_line_number = line_number;
  m_exp = exp;
}
void Print::execute()
{
  cout << "gpl[" << m_line_number << "]: " << m_exp->eval_string() << endl;
}
