# include "assign.h"
Assign::Assign(Variable * v, Expression * e, string action)
{
  m_var = v;
  m_exp = e;
  m_action = action;
}

void Assign::execute()
{
  string name = m_var->get_name_for_assign_statement();
  Symbol_table *sym_table = Symbol_table::instance();
  Symbol * s = sym_table->get(name);
  Gpl_type type = s->get_type();
  if (m_var->return_string_type()!="member" && m_var->return_string_type()!= "member array" && m_var->return_string_type()!="member with variable index")
  {
    if (m_action == "=")
      set_equal(s, name, type, m_exp);
    if (m_action == "+=")
      set_plus(s, name, type, m_exp);
    if (m_action == "-=")
      set_minus(s, name, type, m_exp);
  }
  else
  {
    assert(s);
    Game_object *temp_object = s->return_game_object();
    Gpl_type type;
    temp_object->get_member_variable_type(m_var->return_param_id(), type);
    if (m_action == "=")
      set_equal_object(s, name, type, m_exp, temp_object);
    if (m_action == "+=")
      set_plus_object(s, name, type, m_exp, temp_object);
    if (m_action == "-=")
      set_minus_object(s, name, type, m_exp, temp_object);
  }
}
void Assign::set_equal_object(Symbol *s, string name, Gpl_type type, Expression * e, Game_object * temp_object)
{
    if (type == INT)
    {
      temp_object->set_member_variable(m_var->return_param_id(), e->eval_int());
    }
    if (type == DOUBLE)
      temp_object->set_member_variable(m_var->return_param_id(), e->eval_double());
    if (type == STRING)
      temp_object->set_member_variable(m_var->return_param_id(), e->eval_string());
    if (type == ANIMATION_BLOCK)
      temp_object->set_member_variable(m_var->return_param_id(), e->eval_animation_block());
}
void Assign::set_plus_object(Symbol *s, string name, Gpl_type type, Expression * e, Game_object *temp_object)
{
    if (type == INT)
    {
      int param;
      temp_object->get_member_variable(m_var->return_param_id(), param);
      temp_object->set_member_variable(m_var->return_param_id(), e->eval_int()+param);
    }
    if (type == DOUBLE)
    {
      double param;
      temp_object->get_member_variable(m_var->return_param_id(), param);
      temp_object->set_member_variable(m_var->return_param_id(), e->eval_double()+param);
    }
    if (type == STRING)
    {
      string param;
      temp_object->get_member_variable(m_var->return_param_id(), param);
      temp_object->set_member_variable(m_var->return_param_id(), e->eval_string()+param);
    }
    if (type == ANIMATION_BLOCK)
      temp_object->set_member_variable(m_var->return_param_id(), e->eval_animation_block());
}
void Assign::set_minus_object(Symbol *s, string name, Gpl_type type, Expression * e, Game_object * temp_object)
{
    if (type == INT)
    {
      int param;
      temp_object->get_member_variable(m_var->return_param_id(), param);
      temp_object->set_member_variable(m_var->return_param_id(), param - e->eval_int());
    }
    if (type == DOUBLE)
    {
      double param;
      temp_object->get_member_variable(m_var->return_param_id(), param);
      temp_object->set_member_variable(m_var->return_param_id(), param - e->eval_double());
    }
    if (type == STRING)
    {
      cout << "cant do this" << endl;
      temp_object->set_member_variable(m_var->return_param_id(), e->eval_string()+s->return_string());
    }
    if (type == ANIMATION_BLOCK)
      temp_object->set_member_variable(m_var->return_param_id(), e->eval_animation_block());
}

void Assign::set_plus(Symbol * s, string name, Gpl_type type, Expression * e)
{
  if (type == 1)
  {
    if (e->get_type() == 1)
    {
      s->set(name, "INT", e->eval_int() + s->return_int(), 0, "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "INT", e->eval_double() + s->return_int(), 0, "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else if (type == 2)
  {
    if (e->get_type() == 1)
    {
      s->set(name, "DOUBLE", 0, e->eval_int() + s->return_double(), "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "DOUBLE", 0, e->eval_double() + s->return_double(), "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else if (type == 4)
  {
    if (e->get_type() == 1)
    {
      stringstream value;
      value << s->return_string();
      value << e->eval_int();
      s->set(name, "STRING", 0, 0, value.str());
    }
    else if (e->get_type() == 2)
    {
      stringstream value;
      value << s->return_string();
      value << e->eval_double();
      s->set(name, "STRING", 0, 0, value.str());
    }
    else if (type == 4)
    {
      s->set(name, "STRING", 0, 0,s->return_string()+ e->eval_string());
    }
    else
      cout << "error in assignment" << endl;
  }
  else 
  {
    cout << "The type of the variable was not int, double, or string" << endl;
    cout << "from plus" << endl;
  }
}
void Assign::set_minus(Symbol * s, string name, Gpl_type type, Expression * e)
{
  if (type == 1)
  {
    if (e->get_type() == 1)
    {
      s->set(name, "INT", s->return_int()- e->eval_int() , 0, "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "INT" ,  s->return_int()-e->eval_double() , 0, "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else if (type == 2)
  {
    if (e->get_type() == 1)
    {
      s->set(name, "DOUBLE", 0,  s->return_double()- e->eval_int() , "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "DOUBLE", 0,  s->return_double()- e->eval_double() , "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else 
    cout << "The type of the variable was not int or double" << endl;
}


void Assign::set_equal(Symbol * s, string name, Gpl_type type, Expression * e)
{
  if (type == 1)
  {
    if (e->get_type() == 1)
    {
      s->set(name, "INT", e->eval_int(), 0, "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "INT", e->eval_double(), 0, "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else if (type == 2)
  {
    if (e->get_type() == 1)
    {
      s->set(name, "DOUBLE", 0, e->eval_int(), "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "DOUBLE", 0, e->eval_double(), "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else if (type == 4)
  {
    if (e->get_type() == 1)
    {
      stringstream value;
      value << e->eval_int();
      s->set(name, "STRING", 0, 0, value.str());
    }
    else if (e->get_type() == 2)
    {
      stringstream value;
      value << e->eval_double();
      s->set(name, "STRING", 0, 0,value.str());
    }
    else if (type == 4)
    {
      s->set(name, "STRING", 0, 0,e->eval_string());
    }
    else
      cout << "error in assignment" << endl;
  }
  else 
  {
    cout << "The type of the variable was not int, double, or string" << endl;
    cout << "from equal" << endl;
  }
}

