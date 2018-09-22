#include "debug-variable-arguments.h"

int main() {

  DEBUG_VARIABLE_ARGUMENTS("hello, world\n");
  DEBUG_VARIABLE_ARGUMENTS("The number is: %d\n", 42);
  DEBUG_VARIABLE_ARGUMENTS("%d %s\n", 99, "Bottles");
  DEBUG_VARIABLE_ARGUMENTS("%s - %s - %s", "foo", "bar", "baz");
}
