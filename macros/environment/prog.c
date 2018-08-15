#include <stdio.h>

// #define STRINGIFY(MACRO) #MACRO
#define QUOTE_MACRO_VALUE(MACRO) #MACRO
#define print_definition(MACRO) printf("%-20s = %-20s\n", #MACRO, QUOTE_MACRO_VALUE(MACRO))

#define print_undefined(MACRO)  printf("%-20s = n/a\n", #MACRO)
int main() {

#ifdef __amd64
  print_definition(__amd64);
#else
  print_undefined(__amd64);
#endif

#ifdef __APPLE__
  print_definition(__APPLE__);
#else
  print_undefined(__APPLE__);
#endif

#ifdef BYTE_ORDER
  print_definition(BYTE_ORDER);
#else
  print_undefined(BYTE_ORDER);
#endif

#ifdef __cplusplus
  print_definition(__cplusplus);
#else
  print_undefined(__cplusplus);
#endif

#ifdef __CYGWIN__
  print_definition(__CYGWIN__);
#else
  print_undefined(__CYGWIN__);
#endif

#ifdef __DATE__
  print_definition(__DATE__);
#else
  print_undefined(__DATE__);
#endif

#ifdef __ELF__
  print_definition(__ELF__);
#else
  print_undefined(__ELF__);
#endif

#ifdef __GNUC__
  print_definition(__GNUC__);
#else
  print_undefined(__GNUC__);
#endif

#ifdef __GNUG__
  print_definition(__GNUG__);
#else
  print_undefined(__GNUG__);
#endif

#ifdef i386
  print_definition(i386);
#else
  print_undefined(i386);
#endif

#ifdef __i386__
  print_definition(__i386__);
#else
  print_undefined(__i386__);
#endif

#ifdef _LIBC
  print_definition(_LIBC);
#else
  print_undefined(_LIBC);
#endif

#ifdef __MINGW32__
  print_definition(__MINGW32__);
#else
  print_undefined(__MINGW32__);
#endif

#ifdef __linux__
  print_definition(__linux__);
#else
  print_undefined(__linux__);
#endif

#ifdef __MACH__
  print_definition(__MACH__);
#else
  print_undefined(__MACH__);
#endif

#ifdef _M_AMD64
  print_definition(_M_AMD64);
#else
  print_undefined(_M_AMD64);
#endif

#ifdef _M_ARM
  print_definition(_M_ARM);
#else
  print_undefined(_M_ARM);
#endif

#ifdef _M_X64
  print_definition(_M_X64);
#else
  print_undefined(_M_X64);
#endif

#ifdef __STDC__
  print_definition(__STDC__);
#else
  print_undefined(__STDC__);
#endif

#ifdef __STRICT_ANSI__
  print_definition(__STRICT_ANSI__);
#else
  print_undefined(__STRICT_ANSI__);
#endif

#ifdef __TIME__
  print_definition(__TIME__);
#else
  print_undefined(__TIME__);
#endif

#ifdef unix
  print_definition(unix);
#else
  print_undefined(unix);
#endif

#ifdef __unix
  print_definition(__unix);
#else
  print_undefined(__unix);
#endif

#ifdef __unix__
  print_definition(__unix__);
#else
  print_undefined(__unix__);
#endif

#ifdef WINNT
  print_definition(WINNT);
#else
  print_undefined(WINNT);
#endif

#ifdef __WINNT
  print_definition(__WINNT);
#else
  print_undefined(__WINNT);
#endif

#ifdef __WINNT__
  print_definition(__WINNT__);
#else
  print_undefined(__WINNT__);
#endif

#ifdef _WIN32
  print_definition(_WIN32);
#else
  print_undefined(_WIN32);
#endif

#ifdef _WIN64
  print_definition(_WIN64);
#else
  print_undefined(_WIN64);
#endif

#ifdef _X86_
  print_definition(_X86_);
#else
  print_undefined(_X86_);
#endif

#ifdef __x86_64
  print_definition(__x86_64);
#else
  print_undefined(__x86_64);
#endif

#ifdef __x86_64__
  print_definition(__x86_64__);
#else
  print_undefined(__x86_64__);
#endif


}
