using namespace std;
#include <iostream>
main(){
    int n,W,pmt;
//    int v,w;
    
    cin >> n >> W >> pmt;
    //n++;
    int M[n+1][W+1];
    int v[n+1],w[W+1];
    
    for(int i=1;i<=n;i++){
        cin >> v[i] >> w[i];
    }
    for(int i=0;i<=W;i++)M[0][i] = 0;
    
    
    for(int i=1;i<=n;i++){
    for(int j=1;j<=W;j++){
        if(w[i] > j){
            M[i][j] = M[i-1][j];
        }
        else{
            int temp = j-w[i];
            if(M[i-1][j] < M[i-1][temp]){
                M[i][j] = M[i-1][temp]+v[i];
            }
            else{
                M[i][j] = M[i-1][j]; 
            }
        }
        
    }
    }
    
    cout << M[n][W];
    

}
