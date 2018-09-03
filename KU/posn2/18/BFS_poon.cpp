using namespace std;
#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
main(){
    //typedef pair<int,int> ii;
    typedef vector<int> vii;
    int n_v,n_e;
    int s,u;
    scanf("%d %d %d",&n_v,&n_e,&s);
    vector<vii> node(n_v);
    int Discv[n_v],weight[n_v];
    int nB1,nB2;
    // 
    for(int i=0;i<n_v;i++) {Discv[i]=0;weight[i]=0;}
    
    for(int i=0;i<n_v;i++){
        scanf("%d %d",&nB1,&nB2);
        node[nB1].push_back(nB2);
    }
    queue<int> Graph;
    Graph.push(s);
    while(!Graph.empty()){
            u = Graph.front();
            Graph.pop();
            if(Discv[u] == 0){
                Discv[u] = 1;
                printf("%d ",u);
                for(int i=0;i<node[u].size();i++){
                    Graph.push(node[u][i]);
                }
            }
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
}

