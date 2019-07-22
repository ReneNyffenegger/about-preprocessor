#define PASTE_TWO_TOKENS(token_1, token_2) token_1 ## token_2

PASTE_TWO_TOKENS(Hello, World)                // HelloWorld

#define T1 Hello
#define T2 World

PASTE_TWO_TOKENS(T1, T2)                      // T1T2

#define PASTE_TWO_TOKENS_INDIRECT(token_1, token_2) PASTE_TWO_TOKENS(token_1 , token_2)

PASTE_TWO_TOKENS_INDIRECT( T1 , T2    )       // HelloWorld
PASTE_TWO_TOKENS_INDIRECT( T1 , UNDEF )       // Hello

PASTE_TWO_TOKENS(Cnt, __COUNTER__)            // Cnt__COUNTER__
PASTE_TWO_TOKENS_INDIRECT(Cnt, __COUNTER__)   // Cnt0
PASTE_TWO_TOKENS_INDIRECT(Cnt, __COUNTER__)   // Cnt1
