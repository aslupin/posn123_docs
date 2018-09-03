#include<stdio.h>
void  swap  (int  *,  int  *);
main ( ) {
     int  x = 5,  y = 10;
     printf("Before swap : x = %d  y = %d\n", x, y);
     swap ( &x,  &y);		
     printf("After swap : x = %d y = %d\n", x, y);
     getch();
}
void  swap (int  *px,  int  *py) 
{
     int  temp;
     temp  =  *px;		
     *px     = *py;	
     *py     =  temp;	
}

