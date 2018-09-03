#include <stdio.h>
main(){
	int n[5],i=-1,temp;
	//scanf("%d",&n[0]);
	do{
		i++;
		scanf("%d",&n[i]);
	}while(n[i]>0);
	
	for(int k=1;k<=i-1;k++){
	for(int j=i;j>=0;j--){
		
		if(n[j] > n[j-1]){
			temp = n[j-1];
			n[j-1] = n[j];
			n[j] = temp;
		}
		
	}}
	
	printf("\n%d %d %d %d %d ",n[0],n[1],n[2],n[3],n[4]);

	
}
