#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	char s[11];
	struct node *next;
} node_t;

node_t *head =NULL;
node_t dummy;

void insert(char *s){
node_t* newnode = (node_t*)malloc(sizeof(node_t));
newnode->next = head->next;
head->next = newnode;

}
node_t *get(char *s){

}
void delete(char *s);
void print_all();
int size();

int main(){
    head = &dummy;
    
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
