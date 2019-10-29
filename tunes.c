#include <stdio.h>
#include <stdlib.h>
#include "tunes.h"

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
