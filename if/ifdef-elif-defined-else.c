#include <stdio.h>

int main() {

#ifdef __GNUC__

  printf("This program was compiled with the GNU compiler.\n");

#elif defined _MSC_VER

  printf("This program was compiled with the Microsoft compiler.\n");

#else

  printf("This program was neither compiled with the GNU nor the Microsoft compiler.\n");

#endif

}
