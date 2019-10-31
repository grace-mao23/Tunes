struct song_node{
  char title[100];
  char artist[100];
  struct song_node *next;
};

void print_list(struct song_node *n);
struct song_node *insert_front(struct song_node *n, char *name, char *author);
struct song_node *insert_sort(struct song_node *n, char *name, char *author);
int songcmp_full(struct song_node *p, char *name, char *author);
int songcmp_short(struct song_node *p, struct song_node *q);
struct song_node *find_song(struct song_node *p, char *name, char *author);
struct song_node *find_artist(struct song_node *p, char *author);
struct song_node *find_random(struct song_node *p);
int size(struct song_node *p);
struct song_node *remove_node(struct song_node *front, char *name, char *artist);
struct song_node *free_list(struct song_node *n);
