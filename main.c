#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "tunes.h"

int main() {
    srand(time(NULL));
    printf("\n\n%s\n\n", "TESTING INSERT FRONT AND PRINT NODE");
    struct song_node *head = NULL;
    head = insert_front(head, "the one that got away", "katy perry");
    printf("%s\n", "Inserting \"the one that got away\" by katy perry");
    print_list(head);
    head = insert_front(head, "i kissed a girl", "katy perry");
    printf("%s\n", "Inserting \"i kissed a girl\" by katy perry");
    print_list(head);
    head = insert_front(head, "the a team", "ed sheeran");
    printf("%s\n", "Inserting \"the a team\" by ed sheeran");
    print_list(head);
    head = insert_front(head, "beautiful people", "ed sheeran");
    printf("%s\n", "Inserting \"beautiful people\" by ed sheeran");
    print_list(head);


    printf("\n\n%s\n\n", "TESTING INSERT SORT");
    head = insert_sort(head, "just give me a reason", "p!nk");
    printf("%s\n", "Inserting \"just give me a reason\" by p!nk");
    print_list(head);

  return 0;
}
