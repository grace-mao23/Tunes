struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};

void print_list(struct song_node * n);
struct song_node * free_list(struct song_node * n);
struct song_node * insert_front(struct song_node * n, char * artist, char * title);
int songcmp(struct song_node * p, char * name, char * artist);
struct song_node * removeNode(struct song_node *front, char * name, char * artist);
