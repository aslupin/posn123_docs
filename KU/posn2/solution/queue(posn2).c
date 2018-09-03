#include<stdio.h>

typedef struct node {
	char s[11];
	struct node *next;
} node_t;

node_t *head=NULL;
node_t *tale=NULL;


void enqueue(char *data);
node_t* dequeue();
int size();

int main(){
	node_t *temp;
	enqueue("HelloWorld");
	//printf("^^");
	enqueue("HelloDrama");
	enqueue("ByeByeBook");
	enqueue("IloveCieie");
	temp = dequeue();
	printf("dequeue %s\n", temp->s);
	temp = dequeue();
	printf("dequeue %s\n", temp->s);

	printf("size %d\n",size());
}

void enqueue(char *data){
    node_t* NewNode=(node_t*)malloc(sizeof(node_t));
    strcpy(NewNode->s,data);
    if(head!=NULL) if(head->next==NULL) tale=NewNode;
    NewNode->next=head;
    head = NewNode;
}

node_t* dequeue(){
    node_t* n=head,*pre_n=NULL;
    while(n->next!=NULL){
        pre_n=n;
        n=n->next;
    }
    pre_n->next=NULL;
    return n;
}

int size(){
    int ret=0;
    node_t *n=head;
    for(;n!=NULL;n=n->next) ret++;
    return ret;
}

