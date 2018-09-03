#include <stdio.h> 
#include <conio.h>
#define STRSIZE 1000 
#define READ "r" 
int main() { 
  FILE *fp; 
  int wc = 0; 
  int checkread; 
  char word[STRSIZE]; 
  fp = fopen("D:\\file1.txt",READ); 
  if (fp == NULL) 
    fprintf(stderr, "Can't open file"); 
  else { 
    checkread = fscanf(fp,"%s",word); 
    while (checkread != EOF) { 
       wc++; 
       checkread = fscanf(fp,"%s",word); 
    } 
     fprintf(stdout,"Number of words %d\n",wc); 
     fclose(fp); 
   } 
   getch();
  return 0;
}
