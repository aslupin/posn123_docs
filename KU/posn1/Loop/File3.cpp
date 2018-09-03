#include <stdio.h>

int main() {
  int i, j, n, m;

  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter m: ");
  scanf("%d", &m);

  for (i= (n>m ? n:m); i >= 0; i-- ) {
  	//printf("%d\n",i);
    if (n%i==0 && m%i==0) {
      printf("%d\n", i);
      return 0;

    }
  }
}

