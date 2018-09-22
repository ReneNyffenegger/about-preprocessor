all: eleventh-argument count-arguments print-count-arguments debug-variable-arguments

eleventh-argument: eleventh-argument.c eleventh-argument.h
	gcc eleventh-argument.c -o eleventh-argument

count-arguments: count-arguments.c count-arguments.h eleventh-argument.h
	gcc count-arguments.c -o count-arguments

print-count-arguments: print-count-arguments.c count-arguments.h eleventh-argument.h
	gcc print-count-arguments.c -o print-count-arguments

debug-variable-arguments: debug-variable-arguments.c debug-variable-arguments.h count-arguments.h eleventh-argument.h
	gcc debug-variable-arguments.c -o debug-variable-arguments
