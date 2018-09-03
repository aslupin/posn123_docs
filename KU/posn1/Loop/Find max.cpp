#include <stdio.h>
main(){
	
	int sum=0,n[100];
	int j,p,i=0;
	while(1){
		scanf("%d",&n[i]);
		if(n[i]<=0)break;
		
		sum += n[i];
		i++;
	}	
	for(p=1;p<=i;p++){
	for(j=1;j<=i;j++){
		int temp;
		if(n[j-1]>n[j]){
			temp = n[j-1];
			n[j-1] = n[j];
			n[j] = temp; 
		}
	}}
	float meen = sum/i;
	printf("%d\n%d\n%.2f",n[i],n[i-1],meen);
	
	
}
