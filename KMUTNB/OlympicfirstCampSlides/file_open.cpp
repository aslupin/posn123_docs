#include <stdio.h>
#include <conio.h>
int main(void) {
   FILE *fptr;
   fptr = fopen("ascii.txt","r");
   if(fptr != NULL){
     printf("I can open file\n");
     fclose(fptr);
   } else
     printf("Error! File can’t open\n");
   getch();
   return (0);
 }
