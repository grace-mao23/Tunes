#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "library.h"

int main() {
    srand(time(NULL));

    printf("\n\nLINKED LIST TESTS\n\n\n");

    printf("Testing Insert Front and Print List\n\n");
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

    printf("\nTesting Songcmp Full (inputs are strings)\n\n");
    struct song_node *compare = NULL;
    printf("Comparing [gmtn: furioso melodia] = [gmtn: furioso melodia]\n");
    compare = insert_front(compare, "furioso melodia", "gmtn");
    printf("%d\n", songcmp_full(compare, "furioso melodia", "gmtn"));
    printf("Comparing [ed sheeran: the a team] > [ariana grande: one last time]\n");
    compare = insert_front(compare, "the a team", "ed sheeran");
    printf("%d\n", songcmp_full(compare, "one last time", "ariana grande"));
    printf("Comparing [p!nk: what about us] < [zedd: clarity]\n");
    compare = insert_front(compare, "what about us", "p!nk");
    printf("%d\n", songcmp_full(compare, "clarity", "zedd"));
    printf("Comparing [ariana grande: breathin] < [ariana grande: one last time]\n");
    compare = insert_front(compare, "breathin", "ariana grande");
    printf("%d\n", songcmp_full(compare, "one last time", "ariana grande"));
    printf("Comparing [ariana grande: santa tell me] > [ariana grande: break up with your girlfriend]\n");
    compare = insert_front(compare, "santa tell me", "ariana grande");
    printf("%d\n", songcmp_full(compare, "break up with your girlfriend", "ariana grande"));


    printf("\nTesting Songcmp Full (inputs are pointers)\n\n");
    struct song_node *compare1 = NULL;
    struct song_node *compare2 = NULL;
    printf("Comparing [gmtn: furioso melodia] = [gmtn: furioso melodia]\n");
    compare1 = insert_front(compare1, "furioso melodia", "gmtn");
    compare2 = insert_front(compare2, "furioso melodia", "gmtn");
    printf("%d\n", songcmp_short(compare1, compare2));
    printf("Comparing [ed sheeran: the a team] > [ariana grande: one last time]\n");
    compare1 = insert_front(compare1, "the a team", "ed sheeran");
    compare2 = insert_front(compare2, "one last time", "ariana grande");
    printf("%d\n", songcmp_short(compare1, compare2));
    printf("Comparing [p!nk: what about us] < [zedd: clarity]\n");
    compare1 = insert_front(compare1, "what about us", "p!nk");
    compare2 = insert_front(compare2, "clarity", "zedd");
    printf("%d\n", songcmp_short(compare1, compare2));
    printf("Comparing [ariana grande: breathin] < [ariana grande: one last time]\n");
    compare1 = insert_front(compare1, "breathin", "ariana grande");
    compare2 = insert_front(compare2, "one last time", "ariana grande");
    printf("%d\n", songcmp_short(compare1, compare2));
    printf("Comparing [ariana grande: santa tell me] > [ariana grande: break up with your girlfriend]\n");
    compare1 = insert_front(compare1, "santa tell me", "ariana grande");
    compare2 = insert_front(compare2, "break up with your boyfriend", "ariana grande");
    printf("%d\n", songcmp_short(compare1, compare2));

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

    printf("\nTesting Remove\n");
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

    printf("\nTesting Size\n");
    printf("–––Size of []\n");
    struct song_node *nothing = NULL;
    printf("Should be: 0\nPrinted: ");
    printf("%d\n", size(nothing));
    printf("–––Size of head\n");
    printf("Should be: 8\nPrinted: ");
    printf("%d\n", size(head));
    printf("–––Size of One-Item List\n");
    nothing = insert_front(nothing, "holder", "place");
    printf("Should be: 1\nPrinted: ");
    printf("%d\n", size(nothing));
    printf("–––Size of Two-Item List\n");
    nothing = insert_front(nothing, "steven", "even");
    printf("Should be: 2\nPrinted: ");
    printf("%d\n", size(nothing));
    printf("–––Size of Compare\n");
    printf("Should be: 5\nPrinted: ");
    printf("%d\n", size(compare));

    printf("\nTesting Random\n");
    printf("–––Test 1\n");
    print_list(find_random(head));
    printf("–––Test 2\n");
    print_list(find_random(head));
    printf("–––Test 3\n");
    print_list(find_random(head));
    printf("–––Test 4\n");
    print_list(find_random(head));
    printf("–––Test 5\n");
    print_list(find_random(head));

    printf("\nTesting Free List\n");
    head = free_list(head);
    printf("list after freeing: \n");
    print_list(head);

    printf("\n\nLIBRATY TESTS\n\n\n");

    printf("Testing Letter to Char\n");
    printf("Testing a\n");
    printf("Should be: 0\nPrinted: %d\n", letterChar('a'));
    printf("Testing d\n");
    printf("Testing y\n");
    printf("Testing z\n");
    printf("Testing 6\n");
    printf("Testing )\n");

    printf("\nTesting Add Node and Print Library\n\n");
    struct song_node *table[27];
    int i = 0;
    for (; i < 27; i++) {
        table[i] = NULL;
    }
    printf("–––Empty Library\n");
    print_library(table);
    printf("\n–––Adding \"black magic\" by little mix\n");
    add_song(table, "black magic", "little mix");
    print_library(table);
    printf("–––Adding \"the one that got away\" by katy perry\n");
    add_song(table, "the one that got away", "katy perry");
    print_library(table);
    printf("–––Adding \"i kissed a girl\" by katy perry\n");
    add_song(table, "i kissed a girl", "katy perry");
    print_library(table);
    printf("–––Adding \"furioso melodia\" by gmtn\n");
    add_song(table, "furioso melodia", "gmtn");
    print_library(table);
    printf("–––Adding \"the a team\" by ed sheeran\n");
    add_song(table, "the a team", "ed sheeran");
    print_library(table);
    printf("–––Adding \"beautiful people\" by ed sheeran\n");
    add_song(table, "beautiful people", "ed sheeran");
    print_library(table);
    printf("–––Adding \"just give me a reason\" by p!nk\n");
    add_song(table, "just give me a reason", "p!nk");
    print_library(table);
    printf("–––Adding \"despacito\" by luis fonsi\n");
    add_song(table, "despacito", "luis fonsi");
    print_library(table);
    /*
    printf("–––Adding \"lights\" by ellie goulding\n");
    add_song(table, "lights", "ellie goulding");
    print_library(table);
    printf("–––Adding \"rap god\" by eminem\n");
    add_song(table, "rap god", "eminem");
    print_library(table);*/
    printf("–––Adding \"santa tell me\" by ariana grande\n");
    add_song(table, "santa tell me", "ariana grande");
    print_library(table);

    printf("\nTesting Search Song\n");
    printf("–––Searching for \"beautiful people\" by ed sheeran\n");
    head = search_song(table, "beautiful people", "ed sheeran");
    print_list(head);

    return 0;
}
