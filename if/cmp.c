#include <stdio.h>

//
// https://renenyffenegger.ch/notes/development/languages/C-C-plus-plus/preprocessor/if
//


int main() {

#define NUM_1   9
#define NUM_2   1111

#if NUM_1 > NUM_2
    printf("  9 > 1111\n");
#else
    printf("! 9 > 1111\n");
#endif

#if NUM_1 < NUM_2
    printf("  9 < 1111\n");
#else
    printf("! 9 < 1111\n");
#endif


#define CHAR_1   'f'
#define CHAR_2   'y'

#if CHAR_1 > CHAR_2
   printf("  'f' > 'y'\n");
#else
   printf("! 'f' > 'y'\n");
#endif

#if CHAR_1 < CHAR_2
   printf("  'f' < 'y'\n");
#else
   printf("! 'f' < 'y'\n");
#endif

#define STRING_1   foo
#define STRING_2   bar

#if STRING_1 > STRING_2
   printf("  foo > bar\n");
#else
   printf("! foo > bar\n");
#endif

#if STRING_1 < STRING_2
   printf("  foo < bar\n");
#else
   printf("! foo < bar\n");
#endif

#if STRING_1 == STRING_2
   printf("  foo == bar\n");
#else
   printf("! foo == bar\n");
#endif

#if AN_UNDEFINED_MACRO > 2000
   printf("  AN_UNDEFINED_MACRO > 2000\n");
#else
   printf("! AN_UNDEFINED_MACRO > 2000\n");
#endif

#if AN_UNDEFINED_MACRO < 2000
   printf("  AN_UNDEFINED_MACRO < 2000\n");
#else
   printf("! AN_UNDEFINED_MACRO < 2000\n");
#endif

#if AN_UNDEFINED_MACRO == 0
   printf("  AN_UNDEFINED_MACRO == 0\n");
#else
   printf("! AN_UNDEFINED_MACRO == 0\n");
#endif

#if AN_UNDEFINED_MACRO > 0
   printf("  AN_UNDEFINED_MACRO > 0\n");
#else
   printf("! AN_UNDEFINED_MACRO > 0\n");
#endif

#if AN_UNDEFINED_MACRO < 0
   printf("  AN_UNDEFINED_MACRO < 0\n");
#else
   printf("! AN_UNDEFINED_MACRO < 0\n");
#endif

#if AN_UNDEFINED_MACRO > 1
   printf("  AN_UNDEFINED_MACRO > 1\n");
#else
   printf("! AN_UNDEFINED_MACRO > 1\n");
#endif

#if AN_UNDEFINED_MACRO < 1
   printf("  AN_UNDEFINED_MACRO < 1\n");
#else
   printf("! AN_UNDEFINED_MACRO < 1\n");
#endif

}
