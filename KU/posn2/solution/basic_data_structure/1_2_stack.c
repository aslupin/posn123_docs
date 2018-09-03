#include<stdio.h>

typedef struct node {
	char s[11];
	struct node *next;
} node_t;

node_t *head;

void push(char *data);
node_t* pop();
char *top();
void print_all();
int size();

int main(){
	node_t *temp;
	push("HelloWorld");
	push("HelloDrama");
	push("ByeByeBook");
	push("IloveCieie");
	temp = pop();
	printf("pop %s\n", temp->s);
	printf("top %s\n", top());
	printf("size %d\n",size());
}
