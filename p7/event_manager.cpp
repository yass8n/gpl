#include "event_manager.h"
#include "gpl_assert.h"
# include "statement_block.h"
using namespace std;

/* static */ Event_manager *Event_manager::m_instance = 0;

/* static */ Event_manager * Event_manager::instance()
{
  if (!m_instance)
    m_instance = new Event_manager();
  return m_instance;
}

Event_manager::Event_manager()
{
}

Event_manager::~Event_manager()
{
}
void Event_manager::insert(Statement_block * statement_block, int index)
{
  m_vect[index].push_back(statement_block);
}
bool Event_manager::empty()
{
  for (int j = 0; j < 24; j ++)
    for(int i = 0; i <m_vect[j].size(); i ++)
      if (!m_vect[i].empty())
        return false;
  return true;
}
void 
Event_manager::execute_handlers(Window::Keystroke keystroke)
{
  int index = keystroke;
  for (int i = 0; i < m_vect[index].size(); i++)
   m_vect[index][i]->execute();
}
