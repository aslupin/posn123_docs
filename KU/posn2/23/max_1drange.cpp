using namespace std;
#include <cstdio>
main(){
    int n,maxn=0,summ=0;
    scanf("%d",&n);
    int num[n],sumt=0;
   
    for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
    summ +=num[i];
    }
    
    for(int i=0;i<n;i++){
            sumt = 0;
       for(int j=i;j<n;j++){
        sumt += num[j];
       // printf("%d ",sumt);
        if(sumt > maxn){
                maxn = sumt;
              //  printf("%d || %d\n",summ-sumt,maxn);
        }         
       }
      // printf("\n");
    }
    if(maxn > 0)
    printf("%d",maxn);
    else printf("NO SOLUTION");
}
