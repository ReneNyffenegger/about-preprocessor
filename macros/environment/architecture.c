#include <stdio.h>

int main() {

#if   defined(_X86_)

      printf("x86\n");

#elif defined(_AMD64_)

      printf("amd64\n");

#elif defined(_IA64_)

      printf("ia64\n");

#elif defined(_ARM_)

      printf("arm\n");

#elif defined(_ARM64_)

      printf("arm64\n");

#else
      printf("unknown\n");
#endif

}
