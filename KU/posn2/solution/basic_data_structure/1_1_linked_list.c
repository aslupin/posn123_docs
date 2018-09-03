#include<stdio.h>

typedef struct node {
	char s[11];
	struct node *next;
} node_t;

node_t *head;

void insert(char *s);
node_t *get(char *s);
void delete(char *s);
void print_all();
int size();

int main(){
	node_t *current;
	insert("helloworld");
	insert("hellomarti");
	insert("onetwothre");
	insert("fourfivesi");
	print_all();
	printf("size = %d\n",size());
	current = get("hellomarti");
	printf("%s\n", current->s);
	print_all();
	delete("onetwothre");
	delete("helloworld");
	print_all();
}
