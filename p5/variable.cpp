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
    cout << "now in var constructor and its in the table -> " << m_sym->return_name() << endl;
  }
  else
  {
    cout << "not in table" << endl;
    m_sym = NULL;
  }
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
