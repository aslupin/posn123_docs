#include<stdio.h>

int n=4;

int main()
{
	int n=5;

	{
		int n = 6;
		printf("%d\n",n);
	}
	printf("%d\n",n);
}
