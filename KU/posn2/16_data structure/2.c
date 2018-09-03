#include <stdio.h>
#include <string.h>
typedef struct node{
    char s[1000];
    struct node *next;
}node_t;

node_t* head=NULL;
node_t* tail;
node_t dummy;

void push(char *str){
    node_t* newnode = (node_t*)malloc(sizeof(node_t));
    
     newnode->next = head->next;
     head->next = newnode;
    
    
    

}
void print_rev(){
    node_t* p = head;
    while(p->next != NULL){
        
        printf("%s ",p->s);
        p= p->next;
    }
}

main(){
    tail = head;
    head = &dummy;
    push("h");
    push("e");
    push("l");
    push("l");
    push("o");
    print_rev();
    


}
