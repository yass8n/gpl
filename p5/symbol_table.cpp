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
