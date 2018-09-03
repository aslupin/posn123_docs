#include <iostream>
#include <queue>

using namespace std;
main(){
    
    queue<int> Graph;
    int s;
    Graph.push(s);
    while(!Graph.empty()){
        int u = Graph.front();
        Graph.pop();
        if(Dis[u] == 0){
            Dis =1;
            
            for(int i=0;i<Graph.size();i++){
                Graph.push(Graph[u][i]);
                
            }
            
        }
        
        
    }
    
}
