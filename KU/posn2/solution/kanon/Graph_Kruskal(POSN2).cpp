#include<cstdio>
#include<vector>
#include<queue>

using namespace std;

typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<ii> vii;



int main(){
       int nV,nE;
    scanf("%d %d",&nV ,&nE);
    pair<int,ii> pp;
    pair<int ,int > p;
    vector<vii> node(nV);
    priority_queue<iii,vector<iii>,greater<iii> > pq;
    for(int i=0;i<nE;i++){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        p.first=u;
        p.second=v;
        pp.first=w;
        pp.second=p;
        pq.push(pp);
    }
    int Discovered[nV],W_SUM=0;
    for(int i=0;i<nV;i++){
        Discovered[i]=0;
    }
    printf("Output :\n");

        for(int i=0;i<nV-1;i++){
            bool isCom;
            iii nex;
            do{
                //printf("^^\n");
                nex=pq.top();pq.pop();
                ii gen=nex.second;
                int u=gen.first,v=gen.second,w=nex.first;
                queue<int> BFS;
                int Discovered[nV];
                for(int j=0;j<nV;j++) Discovered[j]=0;
                BFS.push(u);
                do{
                    isCom=false;
                    int init_v=BFS.front();BFS.pop();
                    if(Discovered[init_v]==0){
                        Discovered[init_v]=1;
                        for(int j=0;j<node[init_v].size();j++){
                            ii nes=node[init_v][j];
                            int des_v=nes.first;
                            if(des_v==v){
                                isCom=true;
                                break;
                            }
                            BFS.push(des_v);
                        }
                    }
                }while(!BFS.empty()&&!isCom);
            }while(isCom);
            ii gen=nex.second;
            int u=gen.first,v=gen.second,w=nex.first;
            printf("%d %d\n",u,v);
            node[u].push_back(ii(v,w));
            node[v].push_back(ii(u,w));
            W_SUM+=w;
        }
    /*
    while(!pq.empty()){
        iii nex=pq.top();pq.pop();
        ii gen=nex.second;
        int u=gen.first,v=gen.second,w=nex.first;
        if(Discovered[u]==0||Discovered[v]==0){
            printf("%d %d\n",u,v);
            Discovered[u]=1;
            Discovered[v]=1;
            node[u].push_back(ii(v,w));
            W_SUM+=w;
        }
    }
    */
    printf("\nMINIMUM WEIGHT:%d",W_SUM);

}
