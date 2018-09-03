#include<stdio.h>

typedef struct node {
	char s[11];
	struct node *next;
} node_t;

node_t *head;

void enqueue(char *data);
node_t* dequeue();
int size();

int main(){
	node_t *temp;
	enqueue("HelloWorld");
	enqueue("HelloDrama");
	enqueue("ByeByeBook");
	enqueue("IloveCieie");
	temp = dequeue();
	printf("dequeue %s\n", temp->s);
	temp = dequeue();
	printf("dequeue %s\n", temp->s);
	
	printf("size %d\n",size());
}
