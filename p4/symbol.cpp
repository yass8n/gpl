# include "symbol.h"
  
void Symbol::set(string name, string type, int int_val, double double_val, string string_val)
{
  m_name = name;
  if (type == "INT")
    m_type = INT;
  if (type == "DOUBLE")
    m_type = DOUBLE;
  if (type == "STRING")
    m_type = STRING;

  m_int = int_val;
  m_string = string_val;
  m_double = double_val;
}
Symbol::Symbol()
{
  m_string= "NULL";
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
  if (m_type == 1)
    os << "int " << m_name << " " << m_int << endl;
  if (m_type == 2)
    os << "double "<< m_name << " " << m_double << endl;
  if (m_type == 4)
    os << "string " << m_name << " \"" << m_string << "\""<<endl;
}
