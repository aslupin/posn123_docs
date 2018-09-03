#include <stdio.h>
#include <math.h>
#define  MAX_VALUE  0xffffffff
enum {strtol, strlen,};

unsigned int base32toui(char str[]){

char text[40];
int len,i=0,p;
int sum,temp,base10=0;
while(str[i] != NULL){
	len++;
	i++;
}
//printf("%d\n",len);

for(i=len-1,p=0;i>=0;i--,p++){
	if(str[len]-48 >= 0 && str[len]-48 <= 9){
		temp = str[len] - 48;
		printf("\n1) %d\n",temp);
	
	}
	else{
		temp = (str[len] - 8)-48;
	    printf("\n2) %d",temp);
		}
	sum += (pow(32,p))*temp;	
	
}
printf("\n%d\n",sum);
return sum;




}

int main()
{  char str[40];

   printf("Input: ");
   fgets(str, sizeof(str), stdin);
   printf("%u\n", base32toui(str));
   return 0;
}
