#include "count-arguments.h"
#include <stdio.h>

#define CONCAT(a, b) a ## b
#define CONCAT2(a, b) CONCAT(a, b)

#define DEBUG_VARIABLE_ARGUMENTS(FORMAT, ...) CONCAT2(DEBUG_, COUNT_ARGUMENTS(__VA_ARGS__))(FORMAT, ##__VA_ARGS__)

#define DEBUG_0(FORMAT)                   printf(FORMAT)
#define DEBUG_1(FORMAT, ARG1)             printf(FORMAT, ARG1)
#define DEBUG_2(FORMAT, ARG1, ARG2)       printf(FORMAT, ARG1, ARG2)
#define DEBUG_3(FORMAT, ARG1, ARG2, ARG3) printf(FORMAT, ARG1, ARG2, ARG3)
