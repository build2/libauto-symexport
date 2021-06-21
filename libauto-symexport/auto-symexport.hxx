#pragma once

#include <iosfwd>
#include <string>

#define LIBAUTO_SYMEXPORT_SYMEXPORT //__declspec(dllexport)

namespace auto_symexport
{
  LIBAUTO_SYMEXPORT_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);

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
LIBAUTO_SYMEXPORT_SYMEXPORT extern "C" int _c_bss;
