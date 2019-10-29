ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o tunes.o
	$(CC) -o program main.o tunes.o

main.o: main.c tunes.h
	$(CC) -c main.c tunes.h

tunes.o: tunes.c tunes.h
	$(CC) -c tunes.c tunes.h

run:
	./program

memcheck:
	valgrind --leak-check=yes ./program
