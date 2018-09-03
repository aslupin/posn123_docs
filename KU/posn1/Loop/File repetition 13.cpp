#include <stdio.h>
main(){
	int n,m,a,j,p,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++){
		if(i!=1){
			for(p=1;p<=i-1;p++){
				printf(" ");
				
			}
		}
		
		if(i==1 || i == m){
			for(j=1;j<=n;j++){
				printf("*");	
			}
		}
		else {
			
			for(a=1;a<=n;a++){
				if(a==1 || a==n)printf("*");
				else printf(" ");
			}
		}
		
		printf("\n");
		
	}
}
