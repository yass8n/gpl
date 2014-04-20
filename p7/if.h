# ifndef IF_H_
# define IF_H_
# include "statement.h"
# include "game_object.h"
# include "statement_block.h"
class If : public Statement
{
  public:
    void execute();
    If(Expression *exp, Statement_block * if_block, Statement_block *else_block);
  private:
    Expression * m_exp;
    Statement_block * m_if;
    Statement_block * m_else;
  
};
#endif
