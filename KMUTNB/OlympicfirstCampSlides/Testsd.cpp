#include<stdio.h>
#include<stdlib.h> 
#include<conio.h> 
int main(void) 
{ 
     FILE *fptr;
     int i; 
     float f; 
     char str[80];
     char fname[80];
     //printf("Enter your file name ( file format is *.txt ) :");
     //gets(fname); 
     if( (fptr=fopen("p.txt", "r")) == NULL ) 
     {
         printf("Error in open file "); 
 
     } else{
         while(fscanf( fptr,"%d %f %s \n",&i,&f,str)!=EOF){ 
              printf("Value of i is:%d",i);
         }
     }
         fclose(fptr);
         getch(); 
         return 0;
} 
