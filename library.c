#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

// helper function to turn character into number 0 to 26
int letterChar(char c) {
    if (c >= 97 && c <= 122) {
        return ((int)c) % 97;
    } else {
        return 26;
    }
}

// add song nodes
void add_song(struct song_node *table[27], char *name, char *author) {
    int place = letterChar(author[0]);
    table[place] = insert_sort(table[place], name, author);
}

// search for a song given song and artist name
struct song_node * search_song(struct song_node *table[27], char *name, char *author) {
    int letter = letterChar(author[0]);
    return find_song(table[letter], name, author);
}

// search for an artist
struct song_node * search_artist(struct song_node *table[27], char *author) {
    int letter = letterChar(author[0]);
    return find_artist(table[letter], author);
}

// print out all entries under a certain letter
void print_letter(struct song_node *table[27], char letter) {
    int i = letterChar(letter);
    print_list(table[i]);
}


// print out entire library
void print_library(struct song_node *table[27]) {
    int i = 0;
    for (; i < 27; i++) {
        if (table[i] != NULL) {
            printf("%c list\n", i + 97);
            print_list(table[i]);
        }
    }
}

// print out all the songs of a certain artist
void print_library(struc song_node *table[27], char *author) {
    int letter = letterChar(author[0]);
    
}

// shuffle


// delete a song


// clear the library
