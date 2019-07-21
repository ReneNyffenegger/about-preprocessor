#define MACRO_VA_ARGS(...) RESULT(__VA_ARGS__)

MACRO_VA_ARGS()
MACRO_VA_ARGS(one)
MACRO_VA_ARGS(two,three)
MACRO_VA_ARGS(foo, bar, baz)
