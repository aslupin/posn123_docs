#include <stdio.h> 
#include <conio.h> 
int  main() { 
   char ch; 
   FILE *infile, *outfile; 
   infile = fopen("file1.txt","r"); 
   outfile = fopen("targetFile.txt","w"); 
   if((infile == NULL)||(outfile == NULL))
   { 
      printf("File open error\n");  
   }
   else { 
      ch = fgetc(infile); 
      while (ch != EOF) { 
          fputc((char)ch, outfile); 
          ch = fgetc(infile); 
      } 
   } 
   if (infile != NULL) fclose(infile); 
   if (outfile != NULL) fclose(outfile);  
   getch();
   return 0;
}
