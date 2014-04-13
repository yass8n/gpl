# ifndef PRINT_H_
# define PRINT_H_
# include "statement.h"
# include "Game_object.h"
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
