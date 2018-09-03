#include <stdio.h>
#include <conio.h>

int main()
{
	int arr[3][2] = {{5,6},{7,8},{9,10}};

	printf("%d\n", arr[0][0]);
	printf("%d\n", *arr[1]);
	printf("%d\n", *(*arr));
   	printf("%d\n", *(*(arr+2)+0));
   	getch();
   	return 0;
}


