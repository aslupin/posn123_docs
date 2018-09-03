#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
int main(void)
{ 
     FILE *fp; 
     char ch; 
     if(( fp=fopen("D:\\file1.txt","r"))==NULL) 
     { 
          printf("Error in open file"); 
          printf("\007"); 
          exit(1);
     } 
     do
     { 
          ch=getc(fp); 
          putchar(ch); 
     } while(ch !=EOF); 
     fclose(fp); 
     getch(); 
     return 0;
}
     

