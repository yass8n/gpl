# include "symbol.h"
# include "animation_block.h"
# include "game_object.h"
# include "indent.h"
  
Symbol::Symbol()
{
  m_string= "NULL";
  m_int = 0;
  m_double = 0;
}
void Symbol::set_game_object(string name, Game_object *game_object)
{
  m_type = GAME_OBJECT;
  m_name = name;
  m_game_object = game_object;
}
void Symbol::set_animation_block(string name, Animation_block * block)
{
  m_type = ANIMATION_BLOCK;
  m_name = name;
  m_animation_block = block;
}
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
Game_object * Symbol::get_game_object()
{
  return m_game_object;
}
void Symbol::set_member_variable(string param, int value)
{
  m_game_object->set_member_variable(param, value);
}

void Symbol::get_member_variable(string id3, int &i)
{
  m_game_object->get_member_variable(id3, i);
}
void Symbol::get_member_variable(string id3, double &d)
{
  m_game_object->get_member_variable(id3, d);
}
void Symbol::get_member_variable(string id3, string  &s)
{
  m_game_object->get_member_variable(id3, s);
}
void Symbol::get_member_variable(string id3, Animation_block *&a)
{
  m_game_object->get_member_variable(id3, a);
}
void Symbol::get_member_variable_type(string id3, Gpl_type &type)
{
  m_game_object->get_member_variable_type(id3, type);
}
Gpl_type Symbol::get_type()
{
  return m_type;
}
string Symbol::get_name()
{
  return m_name;
}
int Symbol::get_int()
{
  return m_int;
}
double Symbol::get_double()
{
  return m_double;
}
string Symbol::get_string()
{
  return m_string;
}
Animation_block * Symbol::get_animation_block()
{
  return m_animation_block;
}

   
void Symbol::print(ostream &os)
{
  if (m_type == INT)
    os << "int " << m_name << " " << m_int << endl;
  if (m_type == DOUBLE)
    os << "double "<< m_name << " " << m_double << endl;
  if (m_type == STRING)
    os << "string " << m_name << " \"" << m_string << "\""<<endl;
  if (m_type == GAME_OBJECT)
  {
    os << "game_object ";
    os << m_name << endl;
    indent ++;
    os <<  m_game_object << endl;
    indent--;
  }
  if (m_type == ANIMATION_BLOCK)
  {
    os << "animation_block ";
    os << m_name << endl;
    indent ++;
    os <<  m_animation_block << endl;
    indent--;
  }
}
