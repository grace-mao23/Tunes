struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};

void print_list(struct song_node * n);
struct song_node * free_list(struct song_node * n);
