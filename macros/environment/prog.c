#include <stdio.h>

#define QUOTE_MACRO_VALUE(MACRO) #MACRO
#define print_definition(MACRO) printf("%-24s = %s\n", #MACRO, QUOTE_MACRO_VALUE(MACRO))

#define print_undefined(MACRO)  printf("%-24s = n/a\n", #MACRO)
int main() {

#ifdef _ARM_                    // {
    print_definition(_ARM_);
#else
    print_undefined(_ARM_);
#endif // }

#ifdef _ARM64_                  // {
    print_definition(_ARM64_);
#else
    print_undefined(_ARM64_);
#endif // }

#ifdef _AMD64_                  // {
    print_definition(_AMD64_);
#else
    print_undefined(_AMD64_);
#endif // }

#ifdef __amd64                  // {
 //
 // 2021-02-12: lower case __amd64, really?
 //
    print_definition(__amd64);
#else
    print_undefined(__amd64);
#endif // }

#ifdef __APPLE__                // {
    print_definition(__APPLE__);
#else
    print_undefined(__APPLE__);
#endif // }

#ifdef __ASSEMBLER__            // {
 //
 // Defined if preprocessing assembly language (at least
 // when using GNU)
 //
    print_definition(__ASSEMBLER__);
#else
    print_undefined(__ASSEMBLER__);
#endif // }

#ifdef __BYTE_ORDER__           // {
//
// On intel machines and gcc compilers, the value of __BYTE_ORDER__
// is 1234 (which corresponds to the value of __ORDER_LITTLE_ENDIAN__).
//
    print_definition(__BYTE_ORDER__);
#else
    print_undefined(__BYTE_ORDER__);
#endif // }

#ifdef __clang__                // {
    print_definition(__clang__);
#else
    print_undefined(__clang__);
#endif // }

#ifdef __cplusplus              // {
 //
 // Only defined when compiled with a C++ compiler.
 // It is then used to represent the version of the compiler (for
 // example: 201402L)
 //
    print_definition(__cplusplus);
#else
    print_undefined(__cplusplus);
#endif  // }

#ifdef __CYGWIN__               // {
    print_definition(__CYGWIN__);
#else
    print_undefined(__CYGWIN__);
#endif // }

#ifdef __DATE__                 // {
 //
 // Evaluates to a 11 character string literal that
 // represents the date of the compilation.
 // The format is "Mmm dd yyyy", for example:
 //    "Feb  2 2019"
 //
    print_definition(__DATE__);
#else
    print_undefined(__DATE__);
#endif // }

#ifdef __ELF__                  // {
    print_definition(__ELF__);
#else
    print_undefined(__ELF__);
#endif // }

#ifdef __GNUC__                 // {
 //
 // __GNUC__ is defined by all GNU compilers that
 // use the C preprocessor (C, C++, Objective-C and Fortran).
 // Apparently, __GNUC__ is also defined when compiling
 // with clang.
 //
    print_definition(__GNUC__);
#else
    print_undefined(__GNUC__);
#endif // }

#ifdef __GNUC_STDC_INLINE__     // {
    print_definition(__GNUC_STDC_INLINE__);
#else
    print_undefined(__GNUC_STDC_INLINE__);
#endif // }

#ifdef __GNUG__                 // {
 //
 // Equivalent to:
 //   __GNUC__ && __cplusplus
 //
    print_definition(__GNUG__);
#else
    print_undefined(__GNUG__);
#endif // }

#ifdef _IA64_                   // {
    print_definition(_IA64_);
#else
    print_undefined(_IA64_);
#endif // }

#ifdef i386                     // {
    print_definition(i386);
#else
    print_undefined(i386);
#endif // }

#ifdef __i386__                 // {
    print_definition(__i386__);
#else
    print_undefined(__i386__);
#endif // }

#ifdef _LIBC                    // {
    print_definition(_LIBC);
#else
    print_undefined(_LIBC);
#endif // }

#ifdef __LINE__                 // {
 //
 // Evaluates to the current line number
 // in the current source file. However, the
 // value can be changed with a #line preprocessor
 // directive.
 //
    print_definition(__LINE__);
#else
    print_undefined(__LINE__);
#endif // }

#ifdef __MINGW32__              // {
    print_definition(__MINGW32__);
#else
    print_undefined(__MINGW32__);
#endif // }

#ifdef __linux__                // {
    print_definition(__linux__);
#else
    print_undefined(__linux__);
#endif // }

#ifdef __MACH__                 // {
    print_definition(__MACH__);
#else
    print_undefined(__MACH__);
#endif // }

#ifdef _MSC_FULL_VER            // {
 //
 // This macro might be defined by
 // Visual Studio cl. Compare to
 // _MSC_VER.
 //
    print_definition(_MSC_FULL_VER);
#else
    print_undefined(_MSC_FULL_VER);
#endif // }

#ifdef _MSC_VER                 // {
 //
 // This macro is defined when compiling with
 // Visual Studio cl and evaluates to
 // the major number of the compiler.
 //
    print_definition(_MSC_VER);
#else
    print_undefined(_MSC_VER);
#endif // }

#ifdef _M_AMD64                 // {
 //
 // Microsoft's Visual C compiler defines _M_AMD64
 // to 1 if a 64-bit ARM processor is targeted.
 //
    print_definition(_M_AMD64);
#else
    print_undefined(_M_AMD64);
#endif // }

#ifdef _M_ARM                   // {
    print_definition(_M_ARM);
#else
    print_undefined(_M_ARM);
#endif // }

#ifdef _M_IA64                  // {
 //
 // Microsoft's compiler defines on
 // macro for 64-bit Intel platforms.
 //
    print_definition(_M_IA64);
#else
    print_undefined(_M_IA64);
#endif // }

#ifdef _M_IX86                  // {
 //
 // Microsoft's Visual C compiler and MinGW/GCC define _M_IX86
 // to 600 if 32-bit Intel processors are targeted.
 //
    print_definition(_M_IX86);
#else
    print_undefined(_M_IX86);
#endif // }

#ifdef _M_X64                   // {
 //
 // Microsoft's Visual C compiler defines _M_X64
 // to 100 if a x64 processor is targeted.
 //
    print_definition(_M_X64);
#else
    print_undefined(_M_X64);
#endif // }

#ifdef __OBJC__  // {
 //
 // Defined if Objective-C compiler is used.
 //
    print_definition(__OBJC__);
#else
    print_undefined(__OBJC__);
#endif // }

#ifdef __ORDER_LITTLE_ENDIAN__  // {
 //
 // See __BYTE_ORDER__
 //
     print_definition(__ORDER_LITTLE_ENDIAN__);
#else
    print_undefined(__ORDER_LITTLE_ENDIAN__);
#endif // }

#ifdef __ORDER_BIG_ENDIAN__     // {
    print_definition(__ORDER_BIG_ENDIAN__);
#else
    print_undefined(__ORDER_BIG_ENDIAN__);
#endif // }

#ifdef __STDC__                 // {
 //
 // __STDC__ being 1 signifies that compiler
 // conforms to ISO Standard C
 //
    print_definition(__STDC__);
#else
    print_undefined(__STDC__);
#endif // }

#ifdef __STDC_HOSTED__          // {
 //
 // If 1, the compiler's target is
 // a hosted environment.
 //
    print_definition(__STDC_HOSTED__);
#else
    print_undefined(__STDC_HOSTED__);
#endif // }

#ifdef __STDC_NO_COMPLEX__       // {
 //
 // If defined, complex.h is not available.
 //
    print_definition(__STDC_NO_COMPLEX__);
#else
    print_undefined(__STDC_NO_COMPLEX__);
#endif // }

#ifdef __STDC_NO_VLA__          // {
 //
 // If defined, the compiler does not
 // support variable length arrays.
 //
    print_definition(__STDC_NO_VLA__);
#else
    print_undefined(__STDC_NO_VLA__);
#endif // }

#ifdef __STDC_UTF_16__          // {
    print_definition(__STDC_UTF_16__);
#else
    print_undefined(__STDC_UTF_16__);
#endif // }

#ifdef __STDC_UTF_32__          // {
    print_definition(__STDC_UTF_32__);
#else
    print_undefined(__STDC_UTF_32__);
#endif // }

#ifdef __STDC_VERSION__         // {
 //
 // __STDC_VERSION__ was introduced with C94, its
 // value is yyyymmL and signifies:
 //    199409L -> 1989 C standard as amended in 1994
 //    199901L -> 1999 revision of the C standard
 //    201112L -> 2011 revision of the C standard
 //    201710L -> 2017 revision of the C standard
 // Additionally, __STDC_VERSION__ can also assume
 // some experimental values
 //
    print_definition(__STDC_VERSION__);
#else
    print_undefined(__STDC_VERSION__);
#endif // }

#ifdef __STDC_IEC_559__         // {
 //
 // __STDC_IEC_559__ and __STDC_IEC_559_COMPLEX__ indicate floating
 // point characteristics.
 //
 // Apparently, C++ (also?) has the constants
 //   std::numeric_limits<float>::is_iec559
 //
    print_definition(__STDC_IEC_559__);
#else
    print_undefined(__STDC_IEC_559__);
#endif // }

#ifdef __STDC_IEC_559_COMPLEX__ // {
    print_definition(__STDC_IEC_559_COMPLEX__);
#else
    print_undefined(__STDC_IEC_559_COMPLEX__);
#endif // }

#ifdef __STRICT_ANSI__          // {
    print_definition(__STRICT_ANSI__);
#else
    print_undefined(__STRICT_ANSI__);
#endif // }

#ifdef __TIME__                 // {
 //
 // Similar to __DATE__. The format
 // is "hh:mm:ss", for example:
 //    "15:08:42"
 //
    print_definition(__TIME__);
#else
    print_undefined(__TIME__);
#endif // }

#ifdef unix                     // {
    print_definition(unix);
#else
    print_undefined(unix);
#endif // }

#ifdef __unix                   // {
    print_definition(__unix);
#else
    print_undefined(__unix);
#endif // }

#ifdef __unix__                 // {
    print_definition(__unix__);
#else
    print_undefined(__unix__);
#endif // }

#ifdef WINNT                    // {
    print_definition(WINNT);
#else
    print_undefined(WINNT);
#endif // }

#ifdef __WINNT                  // {
    print_definition(__WINNT);
#else
    print_undefined(__WINNT);
#endif // }

#ifdef __WINNT__                // {
    print_definition(__WINNT__);
#else
    print_undefined(__WINNT__);
#endif // }

#ifdef _WIN32                   // {
 //
 // _WIN32 is defined on both, a 32-bit and
 // 64-bit Windows environment.
 //
    print_definition(_WIN32);
#else
    print_undefined(_WIN32);
#endif // }

#ifdef _WIN64                   // {
 //
 // _WIN64 is defined on a
 // 64-bit Windows environment.
 //
    print_definition(_WIN64);
#else
    print_undefined(_WIN64);
#endif // }

#ifdef _X86_                    // {
    print_definition(_X86_);
#else
    print_undefined(_X86_);
#endif // }

#ifdef __x86_64                 // {
    print_definition(__x86_64);
#else
    print_undefined(__x86_64);
#endif // }

#ifdef __x86_64__               // {
    print_definition(__x86_64__);
#else
    print_undefined(__x86_64__);
#endif // }

}
