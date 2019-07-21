#define MACRO_WITH_3_PARAMS(p1, p2, p3) P1 = p1 | P2 = p2 | P3 = p3

#define MACRO_VA_ARGS(...) MACRO_WITH_3_PARAMS( __VA_ARGS__)

MACRO_VA_ARGS(foo, bar, baz)
