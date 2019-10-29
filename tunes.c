#include <stdio.h>
#include <stdlib.h>
#include "tunes.h"

// insert node at front
struct song_node * insert_front(struct song_node * n, char * artist, char * title) {
  struct node *p = malloc(sizeof(struct song_node));
  p->name = title;
  p->artist = artist;
  p->next = n;
  return p;
}

// insert node in order


// print the entire list
void print_list(struct song_node * n) {
  printf("[");
  while (n) {
    printf(" %s: %s |", n->artist, n->name);
    n = n->next;
  }
  printf("]\n");
}


// free the entire list
struct song_node * free_list(struct song_node * n) {
  struct song_node *p;
  while(n) {
    p = n->next;
    free(n);
    n = p;
  }
  n=NULL;
  return n;
}
