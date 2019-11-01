#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "tunes.h"

int main() {
    srand(time(NULL));

    printf("\n\nLINKED LIST TESTS\n\n\n");
    printf("\nTesting Insert Front and Print List\n\n");
    struct song_node *head = NULL;
    printf("–––Inserting \"black magic\" by little mix\n");
    head = insert_front(head, "black magic", "little mix");
    print_list(head);
    printf("–––Inserting \"the one that got away\" by katy perry\n");
    head = insert_front(head, "the one that got away", "katy perry");
    print_list(head);
    printf("–––Inserting \"i kissed a girl\" by katy perry\n");
    head = insert_front(head, "i kissed a girl", "katy perry");
    print_list(head);
    printf("–––Inserting \"furioso melodia\" by gmtn\n");
    head = insert_front(head, "furioso melodia", "gmtn");
    print_list(head);
    printf("–––Inserting \"the a team\" by ed sheeran\n");
    head = insert_front(head, "the a team", "ed sheeran");
    print_list(head);
    printf("–––Inserting \"beautiful people\" by ed sheeran\n");
    head = insert_front(head, "beautiful people", "ed sheeran");
    print_list(head);

    printf("\nTesting Insert Sort\n\n");
    printf("–––Inserting \"just give me a reason\" by p!nk\n");
    head = insert_sort(head, "just give me a reason", "p!nk");
    print_list(head);
    printf("–––Inserting \"despacito\" by luis fonsi\n");
    head = insert_sort(head, "despacito", "luis fonsi");
    print_list(head);
    printf("–––Inserting \"lights\" by ellie goulding\n");
    head = insert_sort(head, "lights", "ellie goulding");
    print_list(head);
    printf("–––Inserting \"rap god\" by eminem\n");
    head = insert_sort(head, "rap god", "eminem");
    print_list(head);
    printf("–––Inserting \"santa tell me\" by ariana grande\n");
    head = insert_sort(head, "santa tell me", "ariana grande");
    print_list(head);

    printf("\nTesting Find Song\n\n");
    printf("–––Looking for [ariana grande: santa tell me]\n");
    print_list(find_song(head, "santa tell me", "ariana grande"));
    printf("–––Looking for [p!nk: just give me a reason]\n");
    print_list(find_song(head, "just give me a reason", "p!nk"));
    printf("–––Looking for [little mix: black magic]\n");
    print_list(find_song(head, "black magic", "little mix"));
    printf("–––Looking for [little mix: secret love song]\n");
    print_list(find_song(head, "secret love song", "little mix"));

    printf("\nTesting Find Artist\n\n");
    printf("–––Looking for [ariana grande]\n");
    print_list(find_artist(head, "ariana grande"));
    printf("–––Looking for [p!nk]\n");
    print_list(find_artist(head, "p!nk"));
    printf("–––Looking for [katy perry]\n");
    print_list(find_artist(head, "katy perry"));
    printf("–––Looking for [hatsune miku]\n");
    print_list(find_artist(head, "hatsune miku"));

    printf("\nTesting Remove:\n");
    printf("–––Removing [ariana grande: santa tell me]\n");
    head = remove_node(head, "santa tell me", "ariana grande");
    print_list(head);
    printf("–––Removing [katy perry: the one that got away]\n");
    head = remove_node(head, "the one that got away", "katy perry");
    print_list(head);
    printf("–––Removing [ed sheeran: beautiful people]\n");
    head = remove_node(head, "beautiful people", "ed sheeran");
    print_list(head);
    printf("–––Removing [ed sheeran: perfect]\n");
    head = remove_node(head, "perfect", "ed sheeran");
    print_list(head);
  return 0;
}
