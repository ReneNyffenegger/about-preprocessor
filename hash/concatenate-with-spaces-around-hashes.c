#include <stdio.h>

#define DECLARE_NUM_A(id1, id2) int id1##id2
#define DECLARE_NUM_B(id1, id2) int id1    ##id2
#define DECLARE_NUM_C(id1, id2) int id1    ##     id2

int main() {

  DECLARE_NUM_A( num, One   );
  DECLARE_NUM_B( num, Two   );
  DECLARE_NUM_C( num, Three );

  numOne   = 42;
  numTwo   = 99;
  numThree = -1;

  printf("The numbers are %d %d %d\n", numOne, numTwo, numThree);

}
