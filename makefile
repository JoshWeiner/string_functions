all: string_functions.c
	gcc -o run string_functions.c

string_functions.c: string_functions.h
	gcc -c string_functions.c
