#include <libauto-symexport/auto-symexport.h>

#include <stdio.h>

void
c_say_hello (const char* n)
{
  printf ("Hello, %s!\n", n);
}

int _c_data = 123;
const int _c_rdata = 234;

int _c_common[3];
