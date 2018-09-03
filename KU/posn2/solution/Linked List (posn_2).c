#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node {
	char s[11];
	struct node *next;
} node_t;

node_t *head=NULL;
node_t *tale=NULL;


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

void insert(char *s){
    node_t* NewNode=(node_t*)malloc(sizeof(node_t));
    strcpy(NewNode->s,s);
    if(head==NULL) tale=NewNode;
    NewNode->next=head;
    head = NewNode;
}

node_t *get(char *s){
    node_t* n=head;
    while(strcmp(n->s,s) && n!=NULL) n=n->next;
    if(strcmp(n->s,s)==0) return n;
    else return 0;
}

void delete(char *s){
    node_t* n=head,*pre_n=NULL;
    while(strcmp(n->s,s) && n!=NULL) {
        pre_n=n;
        n=n->next;
    }
    if(strcmp(n->s,s)==0){
        if(tale==n) tale=pre_n;
        pre_n->next=n->next;
        free(n);
    }
}

void print_all(){
    //node_t *n=head;
    //for(;n!=NULL;n=n->next) printf(n->s);
    print(head);
}

void print(node_t* p){
    if(p->next!=NULL) print(p->next);
    printf(p->s);
    printf("\n");
}

int size(){
    int ret=0;
    node_t *n=head;
    for(;n!=NULL;n=n->next) ret++;
    return ret;
}
