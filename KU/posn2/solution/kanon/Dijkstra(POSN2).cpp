#include<cstdio>
#include<vector>
#include<queue>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

int main(){
    int nV,nE,s;
    scanf("%d %d %d",&nV,&nE,&s);
    vector<vii> node(nV);
    for(int i=0;i<nE;i++){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        node[u].push_back(ii(w,v));
    }
    int dist[nV],Discovered[nV];
    for(int i=0;i<nV;i++){
        dist[i]=-1;
        Discovered[i]=0;
    }
    priority_queue<ii,vector<ii>,greater<ii> > pq;
    pq.push(ii(0,s));
    dist[s]=0;
    while(!pq.empty()){
        ii n=pq.top();pq.pop();
        int u=n.second;
        if(Discovered[u]==0){
            Discovered[u]=1;
            printf("%2d[%2d] ",u,dist[u]);
            for(int i=0;i<node[u].size();i++){
                ii next=node[u][i];
                int v=next.second,w=next.first;
                if(Discovered[v]==0)dist[v]=dist[u]+w;
                pq.push(ii(dist[v],v));
                   // printf(" -%d- ",v);
            }
        }
    }
    printf("\n");
    for(int i=0;i<nV;i++){
        printf("%d %d\n",i,dist[i]);
    }

}
