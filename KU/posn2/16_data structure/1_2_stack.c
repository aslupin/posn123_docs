#include <stdio.h>
#include <string.h>

typedef struct node {
    char s[11];
    struct node *next;
} node_t;

node_t *head = NULL;
mode_t dummy1;
void push(char *data){
    node_t* newnode = (node_t*)malloc(sizeof(node_t));
    strcpy(newnode->s,data);
    
   newnode->next = head->next;
   head->next = newnode;
    
}
node_t* pop(){
    
char txt[1000];
node_t *p = head->next;
head->next = head->next->next;
strcpy(txt,p->s);
free(p);
return txt;
}

char *top(){
return head->next;
}

void print_all(){
    node_t* p = head->next;
    while(p != NULL){
        printf("%s ",p->s);
        p = p->next;
    }
}

int size(){
    int n=0;
    node_t* p = head;
    while(p->next != NULL){
        n++;
        p = p->next;
    }
    return n;
}

int main(){
    head = &dummy1;
    node_t *temp;
   // head = &dummy1;
    push("HelloWorld");
    push("HelloDrama");
    push("ByeByeBook");
    push("IloveCieie");
  // print_all();
    temp = pop();
    printf("pop %s\n", temp->s);
    printf("top %s\n", top());
    printf("size %d\n",size());
    print_all();
}
