#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h> 
int main(void) 
{ 
     FILE *fptr;
     int x=1; 
     float f=8.5; 
     char str[80]="C and C++ Programming";
     int j; 
     char fname[80]; 

     printf("Enter your file name ( file format is *.txt ) :");
     gets(fname); 
     if( (fptr=fopen(fname, "w")) == NULL ) 
     { 
         printf("Error in open file "); 
         printf("\007"); 
         exit(1); 
     } 
         for(j=1; j<=5; j++){ 
                  fprintf(fptr, "%d \t %.2f \t %s\n ", x, f, str); 
                  x= x+1; 
                  f= f+1.5; 
        }
      fclose(fptr);
      getch();
      return 0;
}
                  
