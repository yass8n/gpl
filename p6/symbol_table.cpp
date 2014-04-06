# include "symbol_table.h"
using namespace std;

Symbol_table *Symbol_table::m_instance = NULL;

Symbol_table *Symbol_table::instance()
{
  if (m_instance == NULL)
  {
    m_instance = new Symbol_table();
  }
 
  return m_instance;
}
Symbol* Symbol_table::get(string id)
{
  std::map<string, Symbol*>::iterator it;
  vector <string>::iterator iter;
  for (it = m_map.begin(); it != m_map.end(); it ++)
  {
    if (id == it->first)
      return it->second;
  }
  return NULL;
}
bool Symbol_table::get(string name, int &value)
{
  Symbol *cur = find(name);
  if (!cur || !cur->get_type()==1)
    return false;

  value = cur->return_int();
  return true;
}
bool Symbol_table::get(string name, double &value)
{
  Symbol *cur = find(name);
  if (!cur || !cur->get_type()==2)
    return false;

  value = cur->return_int();
  return true;
}
bool Symbol_table::get(string name, string &value)
{
  Symbol *cur = find(name);
  if (!cur || !cur->get_type()==4)
    return false;

  value = cur->return_int();
  return true;
}
bool Symbol_table::get_type(string name, Gpl_type &type)
{
  Symbol *cur = find(name);
  if (!cur || !cur->get_type()==9)
    return false;

  type = cur->get_type();
  return true;
}
Symbol* Symbol_table::find(string name)
{
  std::map<string, Symbol*>::iterator it;
  vector <string>::iterator iter;
  for (it = m_map.begin(); it != m_map.end(); it ++)
  {
    if (name == it->first)
      return it->second;
  }
}

void Symbol_table::print(ostream &os)
{
  std::map<string, Symbol*>::iterator it;
  for (it = m_map.begin(); it != m_map.end(); it ++)
  {
    it->second->print(os);
  }
}
void Symbol_table::insert_in_vector(string id)
{
  id_vect.push_back(id);
}
void Symbol_table::set (string name, Symbol &symbol)
{
  m_map[name]=&symbol;
}
bool Symbol_table::lookup(string name)
{
  std::map<string, Symbol*>::iterator it;
  vector <string>::iterator iter;
  for (it = m_map.begin(); it != m_map.end(); it ++)
  {
    if (name == it->first)
      return false;
  }
  for (iter = id_vect.begin(); iter != id_vect.end(); iter ++)
  {
    if (name == *iter)
      return false;
  }
  return true;
}
