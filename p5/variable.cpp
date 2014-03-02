# include "variable.h"
Variable::Variable(string id)
{
  Symbol_table *sym_table = Symbol_table::instance();
  assert(!sym_table->lookup(id));
  m_id = id;
  m_string_type = "simple";
  if (!sym_table->lookup(id))//its in the table
  { 
    m_sym = sym_table->get(id);
  }
  else
  {
    cout << "ERROR: .. variable ...it wasnt in the table" << endl;
    m_sym = NULL;
  }
}
/*
Variable::Variable(string id, Expression *exp)
{
  Symbol_table *sym_table = Symbol_table::instance();
  assert(!sym_table->lookup(id));
  m_id = id;
  m_string_type = "array";
  if (!sym_table->lookup(id))//its in the table
  { 
    m_sym = sym_table->get(id);
  }
  else
  {
    cout << "ERROR: .. variable ...it wasnt in the table" << endl;
    m_sym = NULL;
  }
}
*/
string Variable::get_string_value()
{
  assert(m_sym != NULL);
  assert(m_sym->return_type() == "STRING");
  return m_sym->return_string();
}
double Variable::get_double_value()
{
  assert(m_sym != NULL);
  assert(m_sym->return_type() == "DOUBLE");
  return m_sym->return_double();
}
int Variable::get_int_value()
{
  assert(m_sym != NULL);
  assert(m_sym->return_type() == "INT");
  return m_sym->return_int();
}
Gpl_type Variable::get_type()
{
  return m_sym->get_type();
}
