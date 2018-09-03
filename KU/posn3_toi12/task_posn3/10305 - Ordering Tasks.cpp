using namespace std;
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
main(){
    typedef pair<int,int> ii;
    typedef vector<ii> vii;
    typedef vector<int> vint;
   
    
    int n,m;
    int i,j;

    
    while(1){
            cin >> m >> n;
            vector<vii> vvii(m);
            int Discv[m+1];
            
            for(int i=0;i<=m;i++) Discv[i]=0;
            if(m == 0 && n== 0) break;
            
            for(int g=0;g<n;g++){
                cin >> i >> j;
                vvii[i].push_back(ii(j,0));
            }
            
            for(int i=0;i<vvii[1].size();i++){
              cout << vvii[1][i].first << " ";
            }
            cout << endl;
            
            //stack<int> stackOnode;
            queue<int> stackOnode;
            
            stackOnode.push(1);
            while(!stackOnode.empty()){
            //int u = stackOnode.top();
            int u = stackOnode.front();
            stackOnode.pop();
            if(Discv[u] == 0){
            Discv[u] = 1;
            cout << u << " ";
            
            for(int i=0;i<vvii[u].size();i++){
               stackOnode.push(vvii[u][i].first);
            }
            
        }
        
    }
            
    }

   
    
    
    
}
