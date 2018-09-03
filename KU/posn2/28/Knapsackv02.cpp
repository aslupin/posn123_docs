using namespace std;
#include <iostream>
#include <algorithm>
main(){
    int n,W,x;
    cin >> n;
    cin >> W;
    cin >> x;
    int M[n+1][W+1];
    int v[n],w[n];
    for(int i=1;i<=n;i++)
        cin >> v[i] >> w[i];
    
    for(int i=0;i<=n;i++) M[i][0] = 0;
    for(int i=0;i<=W;i++) M[0][i] = 0;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            
            if(w[i] > j)
            M[i][j] = M[i-1][j];
            else
                M[i][j] = max(M[i-1][j],v[i]+M[i-1][j-w[i]]);
        }
    }
  // int temp = M[n][W];
  //  cout << M[n][W];
    if(M[n][W] > x) cout << "YES" << endl << M[n][W];
    else cout << "NO" << endl << M[n][W];
    
    

}
