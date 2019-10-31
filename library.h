#include "tunes.h"

int letterChar(char c);
void add_song(struct song_node *table[27], char *name, char *artist);
struct song_node *search_song(struct song_node *table[27], char *name, char *artist);
struct song_node *search_artist(struct song_node *table[27], char *artist);
void print_letter(struct song_node *table[27], char letter);
void print_library(struct song_node *table[27]);
