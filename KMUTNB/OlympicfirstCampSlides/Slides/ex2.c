# include  <stdio.h>
# define  SIZE  5
main ( ) 
{        
	int  k;				
	int  table[SIZE];			
	for  (k = 0;  k < SIZE;  k++)
		scanf ("%d", &table[k]);
		for (k = SIZE-1; k >= 0;  k--)
           printf ("%d\n", table[k]);
    getch();		
}
