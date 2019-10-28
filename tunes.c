#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

void print_list(struct song_node * n) {
  printf("[");
  while (n) {
    printf(" %s: %s |", n->artist, n->name);
    n = n->next;
  }
  printf("]\n");
}



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
