# include "symbol.h"
# include "animation_block.h"
# include "game_object.h"
# include "indent.h"

  
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
Symbol::Symbol()
{
  m_string= "NULL";
  m_int = 0;
  m_double = 0;
}
Gpl_type Symbol::get_type()
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
string Symbol::return_string()
{
  return m_string;
}
Animation_block * Symbol::return_animation_block()
{
  return m_animation_block;
}
string Symbol::return_type()
{
  string str;
  if (m_type == 1)
  {
    str = "INT";
    return str;
  }
  if (m_type == 2)
  {
    str = "DOUBLE";
    return str;
  }
  if (m_type == 4)
  {
    str = "STRING";
    return str;
  }
  if (m_type == 8)
  {
    str = "GAME_OBJECT";
    return str;
  }
  if (m_type == 16)
  {
    str = "ANIMATION_BLOCK";
    return str;
  }
}
   
void Symbol::print(ostream &os)
{
  if (m_type == 1)
    os << "int " << m_name << " " << m_int << endl;
  if (m_type == 2)
    os << "double "<< m_name << " " << m_double << endl;
  if (m_type == 4)
    os << "string " << m_name << " \"" << m_string << "\""<<endl;
  if (m_type == 8)
  {
    os << "game_object ";
    os << m_name << endl;
    indent ++;
    os <<  m_game_object << endl;
    indent--;
  }
  if (m_type == 16)
  {
    os << "animation_block ";
    os << m_name << endl;
    indent ++;
    os <<  m_animation_block << endl;
    indent--;
  }
}
