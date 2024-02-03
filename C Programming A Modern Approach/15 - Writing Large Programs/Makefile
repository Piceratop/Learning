justify: justify.obj word.obj line.obj
	gcc -o justify justify.obj word.obj line.obj

justify.obj: justify.c word.h line.h
	gcc -c justify.c -o justify.obj

word.obj: word.c word.h
	gcc -c word.c -o word.obj

line.obj: line.c line.h
	gcc -c line.c -o line.obj