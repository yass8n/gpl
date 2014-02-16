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

void Symbol_table::print(ostream &os)
{
  std::map<string, Symbol*>::iterator it;
  for (it = m_map.begin(); it != m_map.end(); it ++)
  {
  it->second->print(os);
  }
}
void Symbol_table::set (string name, Symbol &symbol)
{
  m_map[name]=&symbol;
}
bool Symbol_table::lookup(string name)
{
  std::map<string, Symbol*>::iterator it;
  for (it = m_map.begin(); it != m_map.end(); it ++)
  {
    if (name == it->first)
      return false;
  }
  return true;
}
