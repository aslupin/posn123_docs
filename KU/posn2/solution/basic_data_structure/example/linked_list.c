#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node * next;
} node_t;

node_t* head = NULL;

void insert(int data){
	
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

node_t * get(int data){
	node_t * current_node, *returned_node;
	current_node = head;
	returned_node = NULL;
	while(current_node){
		if(current_node->data == data){
			returned_node = current_node;
			break;
		}
		current_node = current_node->next;
	}
	return returned_node;
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
	node_t * my_node;
	insert(4);
	insert(5);
	insert(6);
	insert(20);
	insert(30);
	print_all();	


}
