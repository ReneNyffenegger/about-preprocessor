#include "eleventh-argument.h"
#include <stdio.h>

int main() {
  printf("The 11th argument is: %s\n",
      ELEVENTH_ARGUMENT("one", "two", 3, 4, five, "six", 7, '8', "9", ten, "eleven", twelve, 13, "14"));
}
