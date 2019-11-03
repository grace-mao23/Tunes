ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o tunes.o library.o
	$(CC) -o program main.o tunes.o library.o

main.o: main.c tunes.h library.h
	$(CC) -c main.c tunes.h library.h

library.o: library.c library.h tunes.h
	$(CC) -c library.c library.h tunes.h

tunes.o: tunes.c tunes.h
	$(CC) -c tunes.c tunes.h

run:
	./program

clean:
	rm *.o
	rm *.gch

memcheck:
	valgrind --leak-check=yes ./program
