#include <stdio.h>
#include <stdlib.h>
#include "tunes.h"

// print the entire list
void print_list(struct song_node *n) {
    printf("[");
    while (n) {
        printf(" %s: %s |", n->artist, n->title);
        n = n->next;
    }
    printf("]\n");
}

// insert node at front
struct song_node *insert_front(struct song_node *n, char *name, char *author) {
    struct song_node *p = malloc(sizeof(struct song_node));
    strcopy(p->title, name);
    strcopy(p->artist, author);
    p->next = n;
    return p;
}

// insert node in order
struct song_node *insert_sort(struct song_node *n, char *name, char *author) {
    struct song_node *p = malloc(sizeof(struct song_node));
    strcopy(p->title, name);
    strcopy(p->artist, author);
    struct node *head = first;
    struct node *second = first->next;

    if (songcmp(first, name) > 0) {
        p->next = first;
        return p;
    }
    while(second != NULL) {
        if (songcmp(second, p) > 0) {
            p->next = second;
            first->next = p;
            return head;
        }
        first = second;
        second = second->next;
    }
    first->next = p;
    return head;
}

// helper function to compare songs
// 0 means equal
// positive means first is larger
// negative means first is smaller
int songcmp_old(struct song_node *p, char *name, char *author) {
    if (strcmp(p->artist, author) != 0) {
        return strcmp(p->artist, author);
    } else {
        return strcmp(p->title, name);
    }
}

int songcmp_new(struct song_node *p, struct song_node *q) {
    if (strcmp(p->artist, q->artist) != 0) {
        return strcmp(p->artist, q->artist);
    } else {
        return strcmp(p->title, q->title);
    }
}

// find song based on artist and song name
struct song_node *find_song(struct song_node *p, char *name, char *author) {
  while (p) {
    if (songcmp_old(p, name, author) == 0) {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

// find first song based on artist
struct song_node *find_artist(struct song_node *p, char *author) {
  while (p) {
    if (strcmp(p->artist, author) == 0) {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

// return a pointer to random element in list


// remove a single specified node
struct song_node *remove_node(struct song_node *front, char *name, char *author) {
    struct song_node *p = front;
    struct song_node *prev = NULL;
    while (p) {
        if (songcmp(p, name, author) == 0) {
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
        prev = p;
        p = p->next;
    }
    return front;
}


// free the entire list
struct song_node *free_list(struct song_node *n) {
    struct song_node *p;
    while(n) {
        p = n->next;
        free(n);
        n = p;
    }
    n = NULL;
    return n;
}
