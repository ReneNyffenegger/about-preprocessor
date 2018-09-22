all: a.out c++

c++: c++.i
	gcc -x c++ $< -o $@

a.out: prog.i
	gcc $<

c++.i: prog.c
	gcc -x c++ -E $< -o $@

prog.i: prog.c
	gcc -E $< -o prog.i

