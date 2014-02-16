# include "symbol.h"
  
void Symbol::set(string name, string type, int int_val, double double_val, string string_val)
{
  m_name = name;
  m_type = INT;
  m_int = int_val;
  m_string = string_val;
  m_double = double_val;
}
Symbol::Symbol()
{
  m_name= "NULL";
  m_int = 0;
  m_double = 0;
}
Gpl_type Symbol::return_type()
{
  return m_type;
}
string Symbol::return_name()
{
  return m_name;
}
int Symbol::return_int()
{
  return m_int;
}
double Symbol::return_double()
{
  return m_double;
}
void Symbol::print(ostream &os)
{
  cout << m_type;
  //os << m_type << " " << m_name << " " << m_int << m_double << endl;
}
