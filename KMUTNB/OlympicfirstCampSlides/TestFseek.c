#include <stdio.h>
void main(){
  long loc;
  FILE *Ptr;
  if ((Ptr=fopen("binary.txt","rb"))==NULL){
     printf("Error opening file!");
     return;
  }
  printf("Enter byte to seek:");
  scanf("%d",&loc);
  if (fseek(Ptr, loc, SEEK_SET)){
     printf("Error on seeking file!");
     return;
  }
  printf("data at location %ld is %c", loc, getc(Ptr));
  fclose(Ptr);
}
