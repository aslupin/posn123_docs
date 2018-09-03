#include <stdio.h>
#include <stdlib.h>

void create_list(int *, int);
void print_list(int *, int);

int main()
{  int *num,size;

   printf("size of prime list 1: ");
   scanf("%d",&size);
   create_list(num, size); //here
   print_list(num, size);
   free(&num);
   printf("size of prime list 2: ");
   scanf("%d",&size);
   create_list(num, size); //here
   print_list(num, size);
   free(num);
   return 0;
}

void create_list(int *list, int size)
{  int printf,fprint,putchar,fputs,fputc,write,exit;


int i,yes,j;

//list = calloc(100,sizeof(int));

int check =0;
int Arc=0;
for(i=2;i<=100;i++){
	check=0;
	for(j=1;j<=i;j++){
		if(i%j==0)
		check++;
	}
	if(check==2){
		list[Arc] = i;
		ArC++;
	}
	
}



}

void print_list(int *list, int size)
{  int i;
   for(i=0; i < size; ++i)
      printf("%d\n",list[i]);
}
