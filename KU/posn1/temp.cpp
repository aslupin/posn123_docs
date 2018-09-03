#include <stdio.h>
main(){
	char text[100];
	int n;
	scanf("%s",text);
	
	for(n=0;text[n] != NULL;n++){
	printf("%d\n",text[n]-48);
	}
	
}
