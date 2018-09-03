#include<stdio.h>
#include<stdlib.h>

struct node{
	int u;
	struct node *next; 
};

struct stack{
	int top;
	int value[100];
};
void inits(stack *s){
	int i;
	s->top=1;
	for(i=0;i<100;i++){
		s->value[i]=0;
	}
}

int isF(stack s){
	return (s.top>=99);
}

int isE(stack s){
	return (s.top==0);
}

int push(stack *s,int x){
	s->value[s->top]=x;
	s->top++;
}

int pop(stack *s){
	s->top--;
	return s->value[s->top];
}

int insertionSort(int a[],int n){
	int i,t,j;
	for(i=1;i<n;i++){
		t=a[i];
		for(j=i-1;(a[j]<t)&&(j>-1);j--){
			a[j+1]=a[j];
		}
		a[j+1]=t;
	}
}

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
	int i,n,t,start,v;
	scanf("%d" ,&n);
	node *list[n+1],*pnode,*pnode1;
	int discover[10]={0},d[10];
	discover[0]=0;
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
	/*scanf("%d" ,&start);
	stack s,*ps;
	ps=&s;
	inits(ps);
	push(ps,start);
	discover[start]=1;
	while(isE(s)==0){
		v=pop(ps);
		pnode=list[v];
		if(v!=0){
		//printf("%d> " ,v);
		printf("%d " ,v);
		}
		while(pnode!=NULL){
			if(discover[pnode->u]==0){
				discover[pnode->u]=1;
				push(ps,pnode->u);
				//if(v!=0){
				//printf("%d " ,pnode->u);
			//}
			}
			pnode=pnode->next;
		}
		//printf("\n");
	}*/
	scanf("%d" ,&start);
	stack s,*ps;
	ps=&s;
	inits(ps);
	push(ps,start);
	while(isE(s)==0){
		v=pop(ps);
		pnode=list[v];
		if((v!=0)&&(discover[v]==0)){
		//printf("%d> " ,v);
		printf("%d " ,v);
		}
		if(discover[v]==0){
			discover[v]=1;
			while(pnode!=NULL){
				push(ps,pnode->u);
				//if(v!=0){
				//printf("%d " ,pnode->u);
			//}
			pnode=pnode->next;
			}
		}
		//printf("\n");
	}
	/*
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
	*/
}
