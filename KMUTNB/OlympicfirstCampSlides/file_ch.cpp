#include <stdio.h> 
#include <conio.h>
int main() { 
   char ch; 
   FILE *fptr; 
   fptr = fopen("D:\\ascii.txt","r"); 
   if(fptr != NULL){  
      printf("I can successfully open my file\n"); 
      while ((ch = getc(fptr))!=EOF){ 
      printf("%c",ch);  } 
      fclose(fptr); 
   } else{
      printf("Error! I can't open my file\n");
   }    
  getch();
  return 0;
}
