#include <stdio.h>
main(){
	int *pointer;
	int i=10;
	pointer = &i;
	*pointer = 1;
	
	printf("%d %u",i,pointer);
}
