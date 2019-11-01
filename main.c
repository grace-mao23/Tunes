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
    head = insert_front(head, "black magic", "little mix");
    printf("–––Inserting \"black magic\" by little mix\n");
    print_list(head);
    head = insert_front(head, "the one that got away", "katy perry");
    printf("–––Inserting \"the one that got away\" by katy perry\n");
    print_list(head);
    head = insert_front(head, "i kissed a girl", "katy perry");
    printf("–––Inserting \"i kissed a girl\" by katy perry\n");
    print_list(head);
    head = insert_front(head, "furioso melodia", "gmtn");
    printf("–––Inserting \"furioso melodia\" by gmtn\n");
    print_list(head);
    head = insert_front(head, "the a team", "ed sheeran");
    printf("–––Inserting \"the a team\" by ed sheeran\n");
    print_list(head);
    head = insert_front(head, "beautiful people", "ed sheeran");
    printf("–––Inserting \"beautiful people\" by ed sheeran\n");
    print_list(head);


    printf("\nTesting Insert Sort\n\n");
    head = insert_sort(head, "just give me a reason", "p!nk");
    printf("–––Inserting \"just give me a reason\" by p!nk\n");
    print_list(head);
    head = insert_sort(head, "despacito", "luis fonsi");
    printf("–––Inserting \"despacito\" by luis fonsi\n");
    print_list(head);
    head = insert_sort(head, "lights", "ellie goulding");
    printf("–––Inserting \"lights\" by ellie goulding\n");
    print_list(head);
    head = insert_sort(head, "rap god", "eminem");
    printf("–––Inserting \"rap god\" by eminem\n");
    print_list(head);
    head = insert_sort(head, "santa tell me", "ariana grande");
    printf("–––Inserting \"santa tell me\" by ariana grande\n");
    print_list(head);

    printf("\nTesting Find Song\n\n");
    printf("–––Looking for [gtmn: furioso melodia]\n");
    print_list(find_song(head, "furioso melodia", "gmtn"));
    printf("–––Looking for [p!nk: just give me a reason]\n");
    print_list(find_song(head, "just give me a reason", "p!nk"));
    printf("–––Looking for [little mix: black magic]\n");
    print_list(find_song(head, "black magic", "little mix"));
    printf("–––Looking for [little mix: secret love song]\n");
    print_list(find_song(head, "secret love song", "little mix"));

    printf("\nTesting Find Artist\n\n");
    printf("–––Looking for [gtmn]\n");
    print_list(find_artist(head, "gmtn"));
    printf("–––Looking for [p!nk]\n");
    print_list(find_artist(head, "p!nk"));
    printf("–––Looking for [katy perry]\n");
    print_list(find_artist(head, "katy perry"));
    printf("–––Looking for [hatsune miku]\n");
    print_list(find_artist(head, "hatsune miku"));
  return 0;
}
