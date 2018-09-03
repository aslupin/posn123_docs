#include<cstdio>
#include<vector>
#include<queue>

using namespace std;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main(){
    int nV,nE;
    scanf("%d %d",&nV,&nE);
    vector<vii> node(nV);
    for(int i=0;i<nE;i++){
            int u,v,w;
            scanf("%d %d %D",&u,&v,&w);
            node[u].push_back(ii(w,v));
        }
    int Discovered[nV],d=0;
    for(int i=0;i<nV;i++){
        Discovered[i]=0;
    }
    int s=3;
    priority_queue<ii,vector<ii>,greater<ii> > pq;
    pq.push(ii(0,s));
    printf("\nOutput: ");
    while(!pq.empty()){
        ii nex = pq.top();pq.pop();
        int u=nex.second;
        if(Discovered[u]==0){
            Discovered[u]=1;
            d+=nex.first;
            printf("%d ",u);
            for(int i=0;i<node[u].size();i++){
                ii p=node[u][i];
                pq.push(p);
            }
        }
    }
    printf("\nMINIMUM WEIGHT: %d",d);
}
