#include <stdio.h>
main(){
   int i,k,sum;
   char digits[10];
   printf("Input 9 digits  = ");
   scanf("%s",digits);
   printf("_");
   for(i=0;i<=8;i++){
    sum += (digits[i]-48)*(10-i);
   }
   k = 11-(sum%11);
   printf("The ISBN number is %s%d",digits,k);
   
}
