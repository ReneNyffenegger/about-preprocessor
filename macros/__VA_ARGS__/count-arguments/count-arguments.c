#include <stdio.h>
#include "count-arguments.h"


int main() {

  printf("              has %d arguments\n"    , COUNT_ARGUMENTS());
  printf("one           has %d arguments\n"    , COUNT_ARGUMENTS(one));
  printf("1, 2, 3, 4, 5 has %d arguments\n"    , COUNT_ARGUMENTS(1, 2, 3, 4, 5));
  printf("foo, bar, baz has %d arguments\n"    , COUNT_ARGUMENTS(foo, bar, baz));
  printf("\"xyz\",\"abcde\" has %d arguments\n", COUNT_ARGUMENTS("xyz", "abcde"));


}
