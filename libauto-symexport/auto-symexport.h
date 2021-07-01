#pragma once

#define LIBAUTO_SYMEXPORT_SYMEXPORT //__declspec(dllexport)

#ifdef __cplusplus
extern "C"
{
#endif

LIBAUTO_SYMEXPORT_SYMEXPORT void
c_say_hello (const char*);

LIBAUTO_SYMEXPORT_SYMEXPORT extern int _c_data;
LIBAUTO_SYMEXPORT_SYMEXPORT extern const int _c_rdata;

#ifdef __cplusplus
}
#endif
