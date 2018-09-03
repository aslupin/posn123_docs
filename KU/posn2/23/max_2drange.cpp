using namespace std;
#include <cstdio>
main(){
    int n,sumt = 0;
    int chmax=0;
    scanf("%d",&n);
    int num[n+1][n+1],sum[n+1][n+1];
   /* 
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            sum[i][j] = 0;
    }}
    */
     for(int i=0,j=0;i<n+1;i++)sum[i][j] = 0;
    for(int i=0,j=0;j<n+1;j++)sum[i][j] = 0;
    
    for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
    scanf("%d",&num[i][j]);
    sum[i][j] = sum[i-1][j] + sum[i][j-1] + num[i][j] - sum[i-1][j-1];
    }}
    
    
    for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
    for(int a=1;a<i;a++){
    for(int b=1;b<j;b++){
            sumt = sum[i][j] - sum[a-1][j] - sum[i][b-1] + sum[a-1][b-1];
                if(sumt > chmax) 
                chmax = sumt;
        }
        }
      }
    }
    printf("%d",chmax);
  
}
