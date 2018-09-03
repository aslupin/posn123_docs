#include<stdio.h>
main(){
	int a,b,i;
	double sum,mean;
	printf("Input first number: ");
	scanf("%d",&a);
	
	printf("Input second number: ");
	scanf("%d",&b);
	sum=0.0;
	
	if(a<=0 || b<=0)return 0;
	int temp,p=0;
	if(a>b){
		temp= a;
		a=b;
		b=temp;
	}
	for(i=a+1;i<b;i++){
		sum+=i;
		p++;
		
	}
	mean = sum/p;
	
	
	
	
	
	printf("The meanis %.2lf.\n",mean);
	return 0;
	
}
