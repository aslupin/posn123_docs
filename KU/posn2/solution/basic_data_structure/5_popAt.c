#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node * next;
} node_t;

node_t* head = NULL;

int popAt(int n);

void push(int data){
	node_t* new_node = (node_t*) malloc(sizeof(node_t));
	new_node->data = data;
	new_node->next = head;
	head = new_node;
}

int pop(){
	int returned_data;
	node_t* temp_node;
	temp_node = head;
	if(head){
		head = head->next;
	}
	returned_data = temp_node->data;
	free(temp_node);
	return returned_data;
}

int top(){
	return head->data;
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
	push(3);
	push(4);
	push(50);
	push(300);
	push(39);
	push(5);
	push(10);
	push(20);
	printf("pop %d\n", pop());
	print_all();	
	printf("popAt %d\n", popAt(3));
	print_all();
	printf("popAt %d\n", popAt(5));

}
