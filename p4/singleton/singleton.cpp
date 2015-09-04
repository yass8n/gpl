# include "singleton.h"


/* static */ Foo * Foo::instance()
{
  if (m_instance == NULL)
  {
    m_instance = new Foo();
  }
  return m_instance;
}

int
main()
{
  Foo *foo1 = Foo::instance();
  Foo *foo2 = Foo::instance();
  cout << "foo1 pointer = " << foo1 << " foo1->print() = ";
  foo1->print();
  cout << "foo2 pointer = " << foo2 << " foo2->print() = ";
  foo2->print();

  
  cout << "look, both foo1 and foo2 are the same" << endl;
}
