#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "tunes.h"

int main() {
    srand(time(NULL));
    printf("\n\nTESTING INSERT FRONT AND PRINT NODE\n\n");
    struct song_node *head = NULL;
    head = insert_front(head, "black magic", "little mix");
    printf("Inserting \"black magic\" by little mix\n");
    print_list(head);
    head = insert_front(head, "the one that got away", "katy perry");
    printf("Inserting \"the one that got away\" by katy perry\n");
    print_list(head);
    head = insert_front(head, "i kissed a girl", "katy perry");
    printf("Inserting \"i kissed a girl\" by katy perry\n");
    print_list(head);
    head = insert_front(head, "furioso melodia", "gmtn");
    printf("Inserting \"furioso melodia\" gmtn\n");
    print_list(head);
    head = insert_front(head, "the a team", "ed sheeran");
    printf("Inserting \"the a team\" by ed sheeran\n");
    print_list(head);
    head = insert_front(head, "beautiful people", "ed sheeran");
    printf("Inserting \"beautiful people\" by ed sheeran\n");
    print_list(head);


    printf("\n\nTESTING INSERT SORT\n\n");
    head = insert_sort(head, "just give me a reason", "p!nk");
    printf("Inserting \"just give me a reason\" by p!nk\n");
    print_list(head);
    head = insert_sort(head, "despacito", "luis fonsi");
    printf("Inserting \"despacito\" by luis fonsi\n");
    print_list(head);
    head = insert_sort(head, "despacito", "luis fonsi");
    printf("Inserting \"despacito\" by luis fonsi\n");
    print_list(head);
    head = insert_sort(head, "santa tell me", "ariana grande");
    printf("Inserting \"santa tell me\" by ariana grande\n");
    print_list(head);

  return 0;
}
