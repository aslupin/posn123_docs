#include <stdio.h>

void get_values(int n,int *square,int *cube,int *quad){
	*square = n;
	*cube = n*n;
	*quad = n*n*n;
	


}

int main()
{  int n,square,cube,quad;

   printf("Input n: ");
   scanf("%d",&n);
   get_values(n,&square,&cube,&quad);

   printf("Output: n*n = %d\n",square);
   printf("Output: n*n*n = %d\n",cube);
   printf("Output: n*n*n*n = %d\n",quad);

   return 0;
}
