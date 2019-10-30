#include <stdio.h>
#include <stdlib.h>
#include "tunes.h"

// insert node at front
struct song_node * insert_front(struct song_node *n, char *artist, char *title) {
    struct song_node *p = malloc(sizeof(struct song_node));
    strcopy(p->title, title);
    strcopy(p->artist, artist);
    p->next = n;
    return p;
}

// insert node in order


// print the entire list
void print_list(struct song_node *n) {
    printf("[");
    while (n) {
        printf(" %s: %s |", n->artist, n->title);
        n = n->next;
    }
    printf("]\n");
}

// helper function to compare songs
// 0 means equal
// positive means first is larger
// negative means first is smaller
int songcmp(struct song_node *p, char *name, char *artist) {

}

// find song based on artist and song name
struct song_node * find_song(struct song_node *p, char *name, char *artist) {
  while (p) {
    if (songcmp(p, name, artist) == 0) {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

// find first song based on artist
struct song_node * find_first(struct song_node *p, char *artist) {
  while (p) {
    if (strcmp(p->artist, artist) == 0) {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

// return a pointer to random element in list


// remove a single specified node
struct song_node * removeNode(struct song_node *front, char *name, char *artist) {
    struct song_node *p = front;
    struct song_node *prev = NULL;
    while (p) {
        if (songcmp(p, name, artist) == 0) {
            if (prev) {
                prev->next = p->next;
                free(p);
                return front;
            } else {
                front = p->next;
                free(p);
                return front;
            }
        }
        prev=p;
        p=p->next;
    }
    return front;
}


// free the entire list
struct song_node * free_list(struct song_node * n) {
    struct song_node *p;
    while(n) {
        p = n->next;
        free(n);
        n = p;
    }
    n = NULL;
    return n;
}
