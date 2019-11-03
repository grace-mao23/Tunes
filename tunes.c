#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tunes.h"

// print the entire list
void print_list(struct song_node *n) {
    while (n != NULL) {
        printf(" \"%s\" by %s |", n->title, n->artist);
        n = n->next;
    }
    printf("\n");
}

// insert node at front
struct song_node *insert_front(struct song_node *n, char *name, char *author) {
    struct song_node *p = malloc(sizeof(struct song_node));
    strcpy(p->title, name);
    strcpy(p->artist, author);
    p->next = n;
    return p;
}

// insert node in order
struct song_node *insert_sort(struct song_node *n, char *name, char *author) {
    if (n == NULL) {
      return insert_front(n, name, author);
    }
    struct song_node *p = malloc(sizeof(struct song_node));
    strcpy(p->title, name);
    strcpy(p->artist, author);
    struct song_node *head = n;
    struct song_node *first = n;
    struct song_node *second = first->next;

    if (songcmp_short(first, p) > 0) {
        p->next = first;
        return p;
    }
    while (second != NULL) {
        if (songcmp_short(second, p) > 0) {
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
int songcmp_full(struct song_node *p, char *name, char *author) {
    if (strcmp(p->artist, author) != 0) {
        return strcmp(p->artist, author);
    } else {
        return strcmp(p->title, name);
    }
}

int songcmp_short(struct song_node *p, struct song_node *q) {
    if (strcmp(p->artist, q->artist) != 0) {
        return strcmp(p->artist, q->artist);
    } else {
        return strcmp(p->title, q->title);
    }
}

// find song based on artist and song name
struct song_node *find_song(struct song_node *p, char *name, char *author) {
    while (p) {
        if (songcmp_full(p, name, author) == 0) {
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
struct song_node *find_random(struct song_node *p) {
    if (size(p) == 0) {
        return NULL;
    }

    int i = rand() % size(p);
    struct song_node *first = p;
    struct song_node *second = first->next;

    while (i > 0) {
        i--;
        first = second;
        second = second->next;
    }
    return first;

}

// returns the size of a linked list
int size(struct song_node *p) {
    if (p == NULL) {
        return 0;
    }
    struct song_node *first = p;
    struct song_node *second = first->next;

    if (first == NULL) {
        return 0;
    }

    int i = 1;
    while (second != NULL) {
        i++;
        first = second;
        second = second->next;
    }
    return i;
}

// remove a single specified node
struct song_node *remove_node(struct song_node *front, char *name, char *author) {
    struct song_node *p = front;
    struct song_node *prev = NULL;
    while (p) {
        if (songcmp_full(p, name, author) == 0) {
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
    while(n != NULL) {
        p = n->next;
        printf("freeing node: [%s: %s]\n", n->artist, n->title);
        free(n);
        n = p;
    }
    n = NULL;
    return n;
}
