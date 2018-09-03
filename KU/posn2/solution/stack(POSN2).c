#include<stdio.h>

typedef struct node {
	char s[11];
	struct node *next;
} node_t;

node_t *head=NULL;
node_t *tale=NULL;


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


void push(char *s){
    node_t* NewNode=(node_t*)malloc(sizeof(node_t));
    strcpy(NewNode->s,s);
    if(head==NULL) tale=NewNode;
    NewNode->next=head;
    head = NewNode;
}

node_t *pop(){
    node_t* n=head;
    head=head->next;
    return n;
}

char *top(){
    return head->s;
}
void print_all(){
    node_t *n=head;
    for(;n!=NULL;n=n->next) printf(n->s);
}

int size(){
    int ret=0;
    node_t *n=head;
    for(;n!=NULL;n=n->next) ret++;
    return ret;
}

