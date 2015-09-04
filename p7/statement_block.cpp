#include "statement_block.h"
#include "gpl_assert.h"
# include "game_object.h"
# include "statement.h"
using namespace std;


Statement_block::Statement_block(int block_line)
{
  m_line = block_line;
}
void Statement_block::insert(Statement *statement)
{
  m_vect.push_back(statement);
}

// Return true if this statement_block has no statements, false otherwise
// Implement this function for p7 (but you won't need it until p8)
bool Statement_block::empty()
{
  // This function MUST be defined for p8
  // If you forget to define it, none of your animations will work
  // So define it when you implement p7

  // **** remove this assert when you implement empty();
  //assert(false); 

  // place holder to keep the compiler from issuing a warning
  if(m_vect.empty() == true)
    return true;
  else 
    return false;
}

// this function is called for all non-animation_block statement_blocks
// Implement it for p7
void Statement_block::execute()
{
  vector <Statement *>::iterator iter;
  for (iter = m_vect.begin(); iter != m_vect.end(); iter++)
    (*iter)->execute();
}

ostream & Statement_block::print(ostream &os) const
{
  os << indent << "Statement_block[" << m_line;
  
  os << "]" << endl
     << indent << "{" << endl;
  indent++;
  os << indent << "statement block not implemented yet" << endl;
  indent--;
  os << indent << "}";
  return os;
}


ostream & operator<<(ostream &os, const Statement_block &statement_block)
{
  return statement_block.print(os);
}

ostream & operator<<(ostream &os, const Statement_block *statement_block)
{
  if (!statement_block)
  {
      os << indent << "NULL";
      return os;
  }

  return statement_block->print(os);
}
