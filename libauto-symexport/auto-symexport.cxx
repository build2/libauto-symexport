#include <libauto-symexport/auto-symexport.hxx>

#include <iostream>
#include <stdexcept>

using namespace std;

namespace auto_symexport
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }

  string say_hello_data = "Hello data";

  test::test ()
  {
  }

  test::~test ()
  {
  }

  const int test::const_data = 123;

  virt_test::virt_test ()
  {
  }

  virt_test::~virt_test ()
  {
  }

  virt_test* virt_test::create ()
  {
    return new virt_test;
  }
}

int _c_bss;
