using namespace std;
#include <cstdio>
#include <iostream>
#include <stack>
#include <vector>
main(){
    typedef pair<int,int> ii;
    //typedef pair<int,ii> iii;
    typedef vector<ii> vii; 
    //typedef vector<iii> viii;
    
    int n_e,n_v;
    int s,u;
    scanf("%d",&n_v);
    vector<vii> node(n_v);
    int Discv[n_v],weight;
    int connode;
    
    for(int i=0;i<n_v;i++){
            scanf("%d",&n_e);
            Discv[i] = 0;
            
         for(int j=0;j<n_e;j++){
            scanf("%d",&connode);
            scanf("%d",&weight);
            node[i].push_back(ii(connode,weight)); 
            node[connode].push_back(ii(i,weight)); 
            }
    }
    
    s=5;
    stack<int> stackOnode;
    stackOnode.push(s);
    while(!stackOnode.empty()){
        int u = stackOnode.top();
        stackOnode.pop();
        if(Discv[u] == 0){
            Discv[u] = 1;
            printf("%d",u);
            for(int i=0;i<node[u].size();i++){
               stackOnode.push(node[u][i].first);
            }
        }
        
    }
    
    
    
    /*
    //for(int i=0;i< n_v;i++){
            stackOnode.push(s);
            //stackOnode.pop();
            if(Discv[s] == 0){
            Discv[s] = 1;
            
            int Bin_node = stackOnode.top();
            stackOnode.pop();
                while(!stackOnode.empty()){
                        
                    if(Discv[Bin_node] == 0){
                        Discv[s] = 1;
                        for(int i=0;i<node[s].size();i++){
                      //      stackOnode.push(node[s][i]);
                        }
                    }
        
        
    }}*/
    
    
    
    
    
    
    
    
}

/*
9
1 1 0
3 0 0 2 0 3 0
2 1 0 3 0
3 1 0 2 0 4 0
1 3 0
0
2 7 0 8 0
1 6 0
1 6 0

8
2 1 0 2 0
2 2 0 3 0
2 3 0 5 0
1 4 0
0
0
0
1 6 0
*/
