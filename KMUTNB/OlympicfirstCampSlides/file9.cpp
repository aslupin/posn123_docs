#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h> 
#include<ctype.h> 
int main(void) 
{ 
     struct 
     { 
            char name[30];
            char id[20]; 
            float gpa; 
     }student;
            
            char numstr[80], fname[80]; 
            FILE *fptr; 
            printf("Enter your file name (file format is *.txt) :");
            gets(fname);
            if( (fptr=fopen(fname, "w")) == NULL ) 
            { 
                printf("Error in open file"); 
                exit(1);
            } 
                do { 
                     printf("\nEnter student name :"); 
                     gets( student.name );
                     printf("Enter student id :"); 
                     gets( student.id );
                     printf("Enter student gpa :"); 
                     gets( numstr ); 
                     student.gpa = atof(numstr); 
                     fwrite(&student, sizeof(student), 1, fptr); 
                     printf("Add another student(y/n)?:");
                     } while( tolower(getche()) == 'y' ); 
                     fclose(fptr); 
                     getch(); 
                     return 0;
} 
                     
