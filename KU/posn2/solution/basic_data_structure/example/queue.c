#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node * next;
} node_t;

node_t* head = NULL;

void enqueue(int data){
	node_t *new_node,*current_node,*previous_node;
        current_node = head;
        new_node = (node_t*)malloc(sizeof(node_t));
        new_node->data = data;
        new_node->next = NULL;
        if(head != NULL){
                while(current_node){
                        previous_node = current_node;
                        current_node = current_node->next;
                }
                previous_node->next = new_node;
                new_node->next = NULL;
        }else{
                head = new_node;
        }	
}

int dequeue(){
	int returned_data = 0;
	node_t * temp_node;
	temp_node = head;
	if(temp_node){
		head = temp_node->next;
		returned_data = temp_node->data;
		free(temp_node);
	}
	return returned_data;
}

void print_all(){
        node_t * current_node;
        current_node = head;
        while(current_node){
                printf("%d -> ",current_node->data);
                current_node = current_node->next;
        }
        printf("NULL\n");
}

int main() {
	enqueue(29);
	enqueue(30);
	enqueue(14);

	print_all();	
	
	printf("dequeue: %d\n", dequeue());
	print_all();
}
