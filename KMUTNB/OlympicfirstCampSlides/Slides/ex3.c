#include  <stdio.h>
struct  date  {	
     int   day;
     int   month;
     int   year;
};
typedef  struct  date   Date;
typedef  Date   *PtrDate;
int main ( )  {
     Date      today;
     PtrDate  ptrdate;
     ptrdate = &today;
     ptrdate->day    = 24;
     ptrdate->month  =  10;
     ptrdate->year     = 2010;
     printf ( "Today\'s date is %2d/%2d/%4d\n", ptrdate->day, ptrdate->month, ptrdate->year ); 
     getch();
     return 0;
}
