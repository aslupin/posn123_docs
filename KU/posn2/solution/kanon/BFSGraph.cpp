#include<stdio.h>
#include<stdlib.h>

struct node{
	int u;
	struct node *next; 
};


node *insert(node *x,node *z){
        node *y;
        y=x;
        while(y->next!=NULL){
            y=y->next;
        }
        y->next=z;
}

//this program is start from 1 not 0;

int main(){
	int i,n,t;
	scanf("%d" ,&n);
	node *list[n+1],*pnode,*pnode1;
	int discover[10]={0},d[10];
	for(i=1;i<n+1;i++){
		list[i]=NULL;
		printf("%d>",i);
		scanf("%d" ,&t);
		if(t>-1){
			pnode=(node*)malloc(sizeof(node));
			list[i]=pnode;
			pnode->next=NULL;
			pnode->u=t;
			scanf("%d" ,&t);
			while(t>-1){
				pnode1=(node*)malloc(sizeof(node));
				pnode1->next=NULL;
				pnode1->u=t;
				insert(pnode,pnode1);
				scanf("%d" ,&t);
			}
		}
	}
	printf("\n");
	for(i=1;i<n+1;i++){
		pnode=list[i];
		printf("%d>",i);
		while(pnode!=NULL){
			printf("%d " ,pnode->u);
			pnode=pnode->next;
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<n+1;i++){
		pnode=list[i];
		printf("%d>",i);
		while(pnode!=NULL){
			if(discover[pnode->u]==0){
				discover[pnode->u]=1;
				printf("%d " ,pnode->u);
			}
			pnode=pnode->next;
		}
		printf("\n");
	}
}
