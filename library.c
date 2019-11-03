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
void print_artist(struct song_node *table[27], char *author) {
    int letter = letterChar(author[0]);
    struct song_node *artista = search_artist(table, author);
    if (artista != NULL) {
        struct song_node *first = artista;
        struct song_node *second = first->next;
        while (second != NULL) {
            if (strcmp(author, first->artist) == 0) {
                printf("\"%s\" by %s\n", first->title, author);
            }
            first = second;
            second = second->next;
        }
        if (strcmp(author, first->artist) == 0) {
            printf("\"%s\" by %s\n", first->title, author);
        }
    } else {
        printf("artist not found\n");
    }
}

// shuffle
void print_random(struct song_node *table[27]) {
    struct song_node *entirety = NULL;
    int i = 0;
    for (; i < 27; i++) {
        if (table[i] != NULL) {
            struct song_node *first = table[i];
            struct song_node *second = first->next;
            while (second != NULL) {
                entirety = insert_front(entirety, first->title, first->artist);
                first = second;
                second = second->next;
            }
            entirety = insert_front(entirety, first->title, first->artist);
        }
    }
    if (size(entirety) == 0) {
        printf("no songs in library\n");
    } else {
        int number = (rand() % (size(entirety) - 1)) + 1;
        for (; number > 0; number--) {
            struct song_node *current = find_random(entirety);
            printf("\"%s\" by %s\n", current->title, current->artist);
        }
    }
}

// delete a song
void remove_song(struct song_node *table[27], char *name, char *author) {
    int letter = letterChar(author[0]);
    table[letter] = remove_node(table[letter], name, author);
}

// clear the library
void free_library(struct song_node *table[27]) {
    int i = 0;
    for (; i < 27; i++) {
        if (table[i] != NULL) {
            free_list(table[i]);
        }
    }
}
