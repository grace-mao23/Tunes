#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tunes.h"

int main() {
    srand(time(NULL));
    printf("%s\n\n", "INSERT FRONT AND PRINT NODE");
    struct song_node *head = NULL;
    head = insert_front(head, "the one that got away", "katy perry");
    printf("%s\n", "Inserting \"the one that got away\" by kate perry");
    print_list(head);

  return 0;
}
