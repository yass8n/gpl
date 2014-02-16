/***
  Example of a singleton

***/
#include <iostream>
using namespace std;
// global_counter is used to demonstrate that all instances of class Foo
// are the same.  In other words, that class Foo is a singleton
//
int global_counter = 42;

// class Foo is a singleton
class Foo
{
  public:
    static Foo *instance();
    void print() {cout << "Foo(m_id = " << m_id << ")" << endl;}
  private:
    static Foo *m_instance;

    int m_id;

    // Note that the constructor is private
    Foo() {m_id = global_counter++;};

    // disable default copy constructor and default assignment
    // done as a precaution, they should never be called
    Foo(const Foo &);
    const Foo &operator=(const Foo &);
  
};
// Usually the above would be in a file called foo.h

// Usually the below would be in a file called foo.cpp
// Declare the storage for

/* static */ Foo *Foo::m_instance = NULL;
