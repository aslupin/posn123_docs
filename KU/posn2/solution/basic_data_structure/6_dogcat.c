#include<stdio.h>
#include<stdlib.h>

/*cat [type =1], dog [type =2] */
typedef struct node {
	char name[20];
	int type;
	struct node *next;
} node_t;

void enqueue(char *name, int type);
node_t * dequeue_any();
node_t * dequeue_dog();
node_t * dequeue_cat();

int main() {
	node_t *pointer;
	enqueue("Alax", 1);
	enqueue("Yaya", 1);
	enqueue("Amix", 1);
	enqueue("Bob", 2);
	eneueue("Hope", 1);
	enqueue("Lala", 2);
	enqueue("Paul",2);
	enqueue("Snoopy", 1);

	pointer = dequeue_any();
	printf("dequeue = %s\n", pointer->name);
	pointer = dequeue_dog();
	printf("dequeue = %s\n", pointer->name);
	pointer = dequeue_dog();
	printf("dequeue = %s\n", pointer->name);

	/* result should be Alax, Bob, Lala */
}	

