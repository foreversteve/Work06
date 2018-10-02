all: structs.o
	gcc structs.o
structs.o: structs.c
	gcc -c structs.c
run:
	./a.out