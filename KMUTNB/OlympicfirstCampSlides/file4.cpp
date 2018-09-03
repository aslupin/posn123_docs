  #include<stdio.h> 
  #include<conio.h> 
  #include<stdlib.h> 
  int main(void) 
  {
       FILE *fp; 
       char ch; 
       if(( fp=fopen("file1.txt","w"))==NULL) 
       {
            printf("Error in open file"); 
            printf("\007"); 
            exit(1); 
       } 
       printf("Please press <Enter> to quit program.\n"); 
       printf("\nEnter your sentence : ");
       do {
           ch=getche( ); 
           putc(ch, fp); 
           } while(ch !='\r'); 
       fclose(fp);
       getch(); 
       return 0;
 }
