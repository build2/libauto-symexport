#pragma once

#include <iosfwd>
#include <string>

#define LIBAUTO_SYMEXPORT_SYMEXPORT //__declspec(dllexport)

namespace auto_symexport
{
  LIBAUTO_SYMEXPORT_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);

  LIBAUTO_SYMEXPORT_SYMEXPORT
  extern std::string say_hello_data;

  class LIBAUTO_SYMEXPORT_SYMEXPORT test
  {
  public:
    test ();
    ~test ();

    static const int const_data; // Placed to rdata.
  };

  class LIBAUTO_SYMEXPORT_SYMEXPORT virt_test
  {
    virt_test ();

  public:
    virtual ~virt_test ();

    static virt_test* create ();
  };
}

// For some reason this ends up in BSS only from C++ TU.
//
extern "C" LIBAUTO_SYMEXPORT_SYMEXPORT int _c_bss;
