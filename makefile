ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o tunes.o
	$(CC) -o program main.o tunes.o

main.o: main.c headers.h
	$(CC) -c main.c headers.h

tunes.o: tunes.c headers.h
	$(CC) -c tunes.c headers.h

run:
	./program

memcheck:
	valgrind --leak-check=yes ./program
