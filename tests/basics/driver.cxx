#include <cassert>
#include <sstream>
#include <stdexcept>

#include <libauto-symexport/version.hxx>
#include <libauto-symexport/auto-symexport.h>
#include <libauto-symexport/auto-symexport.hxx>

int main ()
{
  using namespace std;
  using namespace auto_symexport;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }

  test t;
  delete virt_test::create ();

  c_say_hello ("World");
}
