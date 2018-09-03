#include <stdio.h>

void shift_left(char str[], int n)
{

int i,p=0;
char strfir[n+1],strlast[80];

for(i=0;i<80;i++){
      if(i<n){
         strfir[i] = str[i];
         strfir[i+1] = '\0';
	  }
      else if(i>=n){
         strlast[p] = str[i];
         p++;
      }
  }

p=0;
for(i=0;i<80;i++){
if(strlast[i] == NULL){
strlast[i] = strfir[p];
p++;
}
}

for(i=0;i<80;i++){
	str[i] = strlast[i];
}

}

int main()
{  char str[80];
   int n;

   printf("String: ");
   gets(str);      /* read a line of characters from the input to "str" variable */
   printf("     n: ");
   scanf("%d", &n);
   shift_left(str, n);
   printf("Output: %s\n",str);
   return 0;
}

