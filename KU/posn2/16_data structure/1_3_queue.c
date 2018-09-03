#include<stdio.h>
#include<string.h>

typedef struct node {
    char s[11];
    struct node *next;
} node_t;

node_t *head = NULL;
node_t *tail;
node_t  dummy;
void enqueue(char *data){
    node_t* newnode = (node_t*)malloc(sizeof(node_t));
    strcpy(newnode->s,data);
    
    tail->next = newnode;
    newnode->next = NULL;
    tail = newnode;
}
node_t* dequeue(){
    char strturn[1000];
    node_t* p = head->next;
    strcpy(strturn,p->s);
    head->next = head->next->next;
    free(p);
    return strturn;
    
}
int size(){
    int n=0;
    node_t* p = head->next;
    while(p != NULL){
        n++;
        p = p->next;
    }
    return n;
}
void print_all(){
    node_t* p = head;
    while(p != NULL){
        printf("%s ",p->s);
        p = p->next;
    }
}
int main(){
    //tail->next = head;
    dummy.next = NULL;
    head = &dummy;
    tail = head;
    node_t *temp;
    enqueue("HelloWorld");
    enqueue("HelloDrama");
    enqueue("ByeByeBook");
    enqueue("IloveCieie");
    print_all();
    temp = dequeue();
    printf("\ndequeue %s\n", temp->s);
    // print_all();
    temp = dequeue();
    printf("dequeue %s\n", temp->s);
    // print_all();
    printf("size %d\n",size());

}
