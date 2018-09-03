using namespace std;
#include <iostream>
#include <cstdio>
#include <vector>


main(){
    int n;
    scanf("%d",&n);
    n++;
    vector<int> w[n],s[n],f[n],p[n];
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&w[i],&s[i],&f[i]);
    }
    
    //get p[i]
    for(int i=n-1;i>=0;i--){
           int j=n-1;
            while(f[i] >= s[j]){
                j--;
            }
            p[i] = j; // get number of before
    }
    
    
    for(int i=n-1;i>=0;i--){
        
    }
    
}

