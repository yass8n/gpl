# ifndef FOR_H_
# define FOR_H_
# include "statement.h"
# include "game_object.h"
# include "statement_block.h"
class For : public Statement
{
  public:
    void execute();
    For(Statement_block * init_stmt, Expression * exp, Statement_block * assign_stmt, Statement_block * statement_block);
  private:
    Expression * m_exp;
    Statement_block * m_init_stmt;
    Statement_block * m_assign_stmt;
    Statement_block * m_statement_block;
  
};
#endif
