#include "eleventh-argument.h"

// Note: With GCC, the preprocessor eliminates the comma in
//   , ## __VA_ARGS__
// IF __VA_ARGS__ is empty. (https://gcc.gnu.org/onlinedocs/cpp/Variadic-Macros.html)
// This is necessary to correctly count the arguments
//
#define COUNT_ARGUMENTS(...) ELEVENTH_ARGUMENT(dummy, ## __VA_ARGS__, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
