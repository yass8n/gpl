# ifndef PRINT_H_
# define PRINT_H_
# include "statement.h"
# include "game_object.h"
class Print : public Statement
{
  public:
    Print(int line_number, Expression * exp);
    void execute();
  private:
    int m_line_number;
    Expression * m_exp;
  
};
#endif
