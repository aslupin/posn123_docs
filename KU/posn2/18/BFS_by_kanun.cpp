#include<cstdio>
#include<vector>
#include<queue>

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;

int main(){
    int nV,nE;
    scanf("%d %d",&nV,&nE);
    ii p;
    queue<int> L;
    vector<vi> node(nV);
    for(int i=0;i<nE;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        node[u].push_back(v);
    }
    int Discovered[nV],d[nV];
    for(int i=0;i<nV;i++){
        Discovered[i]=0;d[i]=0;
    }
    
    int s=5;
    L.push(s);
   //Discovered[s]=1;
    d[s]=0;
    while(!L.empty()){
        int u=L.front();
        L.pop();
        if(Discovered[u]==0){ 
            printf("%d ",u);
            Discovered[u]=1;
            for(int i=0;i<node[u].size();i++){
                int v=node[u][i]; // v = Neighbours of u
                L.push(v); // queue get v (get Neighbour)
                d[v]=d[u]+1; // weight(of  Neighbour) = weight(before)
            }
    }
}
}
