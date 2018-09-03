using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
main(){
    int n_bin,bin,max_bin;
    cin >> n_bin;
    vector<int> bins(n_bin);
    for(int i=0;i<n_bin;i++){
        cin >> bin;
        bins.push_back(bin);
    }
    cin >> max_bin;
    reverse(bins.begin(),bins.end());
    
    int Discv[n_bin];
    for(int i=0;i<n_bin;i++){
        Discv[i] = 0;
    }
    
    int ans=0,sum_check=0;
    for(int i=0;i<n_bin;i++){
            
            if(Discv[i] == 0){
                    sum_check = bins[i];
            for(int j=i;j<n_bin;j++){
               if((Discv[j] == 0) && (sum_check < max_bin)){
                sum_check += bins[j];
                Discv[j] = 1;
               }
                if(sum_check >= max_bin){
                        ans++;
                        break;
                        
                    }
            }
            }
            
    }
  cout << ans;
}
