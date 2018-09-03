#include <stdio.h>
main(){
	int i,j,n[10],k,sum,temp;
	char digits[10];
	printf("Input 9 digits  = ");
	scanf("%s",digits);
	for(i=0;i<=8;i++){
		n[i] = (digits[i] - 48)*(10-i);
	    sum += n[i]; 
	}
	j = 11-(sum%11);
	printf("The ISBN number is ");
	if(j==10) j=0;
			//	digits[9]=j+48;
				printf("%s%d",digits,j);	
	
		}
