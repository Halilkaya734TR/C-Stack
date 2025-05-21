all: compile run

compile:
	gcc -O3 -o stack.exe stack.c

run:
	./stack.exe