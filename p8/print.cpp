# include "print.h"
# include <sstream>

Print::Print(int line_number, Expression * exp)
{
  m_line_number = line_number;
  m_exp = exp;
}
void Print::execute()
{
  stringstream printing;
  if (m_exp->get_type() == INT)
  {
    printing << m_exp->eval_int();
  }
  if (m_exp->get_type() == DOUBLE)
  {
    printing << m_exp->eval_double();
  }
  if (m_exp->get_type() == STRING)
  {
    printing << m_exp->eval_string();
  }
  cout << "gpl[" << m_line_number << "]: " << printing.str() << endl;
}
