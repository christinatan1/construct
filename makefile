all: structMain.o struct.o
	gcc -o program structMain.o struct.o

struct.o: struct.c structHeaders.h
	gcc -c struct.c

structMain.o: structMain.c structHeaders.h
	gcc -c structMain.c

run:
	./program

clean:
	rm *.o
	rm *~
