#include <stdio.h>
#include "count-arguments.h"

#define PRINT_COUNT_OF_ARGUMENTS(...) printf("%-40s has %d arguments\n", #__VA_ARGS__, COUNT_ARGUMENTS(__VA_ARGS__));

int main() {


  PRINT_COUNT_OF_ARGUMENTS(1, 2, 3, 4);
  PRINT_COUNT_OF_ARGUMENTS("foo", "bar", "baz");
  PRINT_COUNT_OF_ARGUMENTS(x, y, z, "tq84", hello, world, 'etc');

}
