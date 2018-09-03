#include<stdio.h>
#include<conio.h> 
#include<stdlib.h> 
int main(void) 
{
     struct { 
            char name[30];
            char id[20];
            float gpa; 
            } student; 
     char fname[80]; 
     FILE *fptr; 
     printf("Enter your file name (file format is *.txt) :"); 
     gets(fname); 
     if( (fptr=fopen(fname, "rb")) == NULL ) 
     { 
         printf("Error in open file"); 
         exit(1);
     }
         while( fread(&student, sizeof(student),1, fptr) == 1 ) 
         { 
                printf("\nName = %s\n", student.name);
                printf("Id = %s\n", student.id); 
                printf("GPA = %.2f\n", student.gpa);
         }
    fclose(fptr); 
    getch(); 
    return 0;
}
                
                

