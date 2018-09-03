#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    char s[11];
    struct node *next;
}node_t;

node_t *head = NULL;
node_t dummy1;
node_t *tail;


void insert(char *s){
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    strcpy(new_node->s,s);
    
    tail->next = new_node; //dummy next -> newnode
    new_node->next = NULL;
    tail = new_node;
}
node_t *get(char *s){
    node_t* point=head->next;
    
    while(point != NULL){
        if(!strcmp(point->s,s)){
            return point;
            }
            point = point->next;
        }
    }

void delete(char *s){
    node_t* p = head->next;
    node_t* prev_node=NULL;
   while(strcmp(p->s,s)){
        prev_node = p;
        p = p->next;
   }
   if(p == head->next)
    head->next = p->next;
    
   else
    prev_node->next = p->next;
   
       
    }


void print_all(){
    node_t* point = head->next;
    while(point != NULL){
        printf("%s ",point->s);
        point = point->next;
    }
}
int size(){
    int n=0;
    node_t* point=head->next;
    while(point != NULL){
        n+=1;
        point = point->next;
    }
    return n;

}

int main(){
    dummy1.next = NULL;
    
    head = &dummy1;
    //tail=  &dummy1;
    tail = head;
    node_t *current;
    
  
    insert("helloworld");
    insert("hellomarti");
    insert("onetwothre");
    insert("fourfivesi");
    print_all();
    printf("\nsize = %d\n",size());
    current = get("hellomarti");
    printf("%s\n", current->s);
    print_all();
    delete("fourfivesi");
    delete("onetwothre");
    delete("helloworld");
    
    
    printf("\n");
    print_all();
    }
