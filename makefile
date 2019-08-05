sll:main.o list.o node.o file.o
	gcc main.o list.o node.o -o sll
main.o: main.c main.h list.h node.h file.h
	gcc -c main.c
list.o: list.c main.h list.h
	gcc -c list.c
node.o: node.c main.h node.h
	gcc -c node.c
file.o: file.c main.h file.h
	gcc -c file.c
