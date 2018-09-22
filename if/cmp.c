#include <stdio.h>

//
// https://renenyffenegger.ch/notes/development/languages/C-C-plus-plus/CPP/preprocessor/macros/stringify
//
#define QuoteIdent(ident) #ident
#define QuoteMacro(macro) QuoteIdent(macro)


#define NUM_1   9
#define NUM_2   1111

#if NUM_1 > NUM_2
   #define txt_num QuoteMacro(NUM_1) " > " QuoteMacro(NUM_2) "\n"
#else
   #define txt_num QuoteMacro(NUM_1) " < " QuoteMacro(NUM_2) "\n"
#endif


#define CHAR_1   'f'
#define CHAR_2   'y'

#if CHAR_1 > CHAR_2
   #define txt_char QuoteMacro(CHAR_1) " > " QuoteMacro(CHAR_2) "\n"
#else
   #define txt_char QuoteMacro(CHAR_1) " < " QuoteMacro(CHAR_2) "\n"
#endif

#define STRING_1   foo
#define STRING_2   bar

#if STRING_1 > STRING_2
   #define text_str QuoteMacro(STRING_1) " > " QuoteMacro(STRING_2) "\n"
#else
   #define text_str QuoteMacro(STRING_1) " < " QuoteMacro(STRING_2) "\n"
#endif

int main() {
  printf(txt_num);
  printf(txt_char);
  printf(text_str);
}
