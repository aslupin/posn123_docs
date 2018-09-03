#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h>
int main(void)   
{           
      struct  {  
            char name[30]; 
            char id[20];
            float gpa; 
      } student;     
      FILE *fptr;  
      int recno; 
      long int offset;  
      if( (fptr=fopen("studenRec.txt", "rb")) == NULL ) {  
            printf("Can't open file "); 
            exit(1);    
      }               
      printf("Enter record number :"); 
      scanf("%d", &recno);       
      offset = (recno-1)*sizeof(student);  
      if( fseek(fptr, offset, 0) != 0 )  
            {  
                   printf("Can't move file pointer"); 
                  exit(1); 
            }                                         
      fread( &student, sizeof(student), 1, fptr );
      printf("\nName = %s\n", student.name);    
      printf("Id = %s\n", student.id);     
      printf("GPA = %.2f\n", student.gpa); 
      fclose(fptr);   
      getch(); 
      return 0;             
}
