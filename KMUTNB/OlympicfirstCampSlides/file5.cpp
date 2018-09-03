#include<stdio.h>
#include<stdlib.h> 
#include<conio.h> 
int main(void) 
{ 
     FILE *fptr;
     int x=5; 
     float f=4.5; 
     char str[80]="C and C++ Programming"; 
     char fname[80];
     printf("Enter your file name ( file format is *.txt ) :");
     gets(fname); 
     if( (fptr=fopen(fname, "w")) == NULL ) 
     {
         printf("Error in open file "); 
         printf("\007");
         exit(1); 
         } 
         fprintf(fptr, "%d \t %.2f \t %s\n", x, f, str); 
         printf("Successful to write data to file");
         fclose(fptr);
         getch(); 
         return 0;
} 
         
