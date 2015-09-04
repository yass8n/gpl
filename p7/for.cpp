# include "for.h"
void For::execute()
{
  for(m_init_stmt->execute();
      m_exp->eval_int();
      m_assign_stmt->execute())
    m_statement_block->execute();

}
For::For(Statement_block *init_stmt, Expression * exp, Statement_block * assign_stmt, Statement_block * statement_block)
{
  m_init_stmt = init_stmt;
  m_exp = exp;
  m_assign_stmt = assign_stmt;
  m_statement_block = statement_block;
}
