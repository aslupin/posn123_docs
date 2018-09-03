#include <stdio.h>
main(){
int n,n2;
scanf("%d",&n);

n2=((4*n)-3)*2;
//printf("%d\n",n2/2);
for(int k=1;k<=n2;k++){
	
	if(k%2!=0){
	
	//START END	
	if(k==1 || k==n2-1){
	for(int i=1;i<=(4*n)-3;i++){
	printf("*");
    }
	 printf("\n");}
	
	//CT	
	else if(k!=1 && k!=n2 && k!=n2/2){
	for(int b=1;b<=(4*n)-3;b++){	
	if(b==1 || b==(4*n)-3)
	printf("*");
	else
	printf(" ");
    }
     printf("\n");
	}
	
	//center
	else if(k==n2/2){
	for(int e=1;e<=(4*n)-3;e++){
	if(e==1 || e==(4*n)-3 || e%2!=0)
	printf("*");
	else printf(" ");
    }
    printf("\n");
	}
	 
	
	}
	
	if(k%2==0){
	printf("\n");	
	}
	}
	
}
