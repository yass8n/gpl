# include "animation_block.h"
#include "indent.h"
#include "gpl_assert.h"
# include "game_object.h"
# include "symbol.h"
using namespace std;

Animation_block::Animation_block(int forward_line, 
                                 Symbol *parameter, string name) 
                                 : Statement_block(-1)
{
    // m_forward_line is only used for debuggin
    m_forward_line = forward_line;
    m_name = name;

    // should do some error checking on parameter
    m_parameter_symbol = parameter;
    m_is_set = false;

}

void 
Animation_block::execute(Game_object *argument)
{
    if (Statement_block::empty() == false)
    {
    Game_object *formal_parameter= m_parameter_symbol->get_game_object();
    m_parameter_symbol->change_game_object(argument);
    Statement_block::execute();
    m_parameter_symbol->change_game_object(formal_parameter);
    }
}
bool Animation_block::is_set()
{
  if(m_is_set == true)
    return true;
  else
    return false;
}
bool Animation_block::set_it()
{
  m_is_set = true;
}
Symbol * Animation_block::get_parameter_symbol()
{
  return m_parameter_symbol;
}

ostream &
Animation_block::print(ostream &os) const
{
    os << indent << "Animation_block[" << m_line;
    
    os << "]" << endl
       << indent << "{" << endl;
    indent++;
    os << indent << "animation block not implemented yet" << endl;
    indent--;
    os << indent << "}";
    return os;
}

ostream &
operator<<(ostream &os, const Animation_block &animation_block)
{
    return animation_block.print(os);
}

ostream &
operator<<(ostream &os, const Animation_block *animation_block)
{
    if (!animation_block)
    {
        os << indent << "NULL";
        return os;
    }

    return animation_block->print(os);
}
