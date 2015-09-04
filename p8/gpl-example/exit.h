# ifndef EXIT_H_
# define EXIT_H_
# include "statement.h"
# include "game_object.h"
class Exit : public Statement
{
  public:
    void execute();
    Exit(int line_number, Expression *exp);
  private:
    Expression * m_exp;
    int m_line_number;
  
};
#endif
