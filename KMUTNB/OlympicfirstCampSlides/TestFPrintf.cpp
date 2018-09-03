#include<stdio.h>
#include<stdlib.h> 
#include<conio.h> 
int main(void) 
{ 
     FILE *fptr;
     int x=5;
    // int jk[10];
     float f=4.5; 
     char str[80]="C and C++ Programming"; 
     //int i; float f; char str[80];
     char fname[80];
     printf("Enter your file name ( file format is *.txt ) :");
     gets(fname); 
     if( (fptr=fopen(fname, "w+")) == NULL ) 
     {
         printf("Error in open file "); 
 
     } 
         fprintf(fptr, "%d \t %.2f \t %s\n", x, f, str); 
        // printf("Value of i is:%d",i);
         printf("Successful to write data to file");
         fclose(fptr);
         getch(); 
         return 0;
} 
