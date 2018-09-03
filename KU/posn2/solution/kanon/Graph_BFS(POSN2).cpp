#include<cstdio>
#include<vector>
#include<queue>

using namespace std;

/*
class BFSTree{

    private:
        struct tree_node{
            tree_node *left;
            tree_node *right;
            int data;
        };
        tree_node *root;

    public:
        BFSTree(){
            root = NULL;
        }
        bool isEempty() const{return root == NULL;}
        void insert(int){
            tree_node* t;
            if(isEmpty()){
                root=t;
            }
        }

};*/

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef pair<int,ii> iii;

int main(){
    int nV,nE;
    scanf("%d %d",&nV,&nE);
    int Discovered[nV];
    int d[nV];
    for(int i=0;i<nV;i++){
        Discovered[i]=0;
        d[i]=0;
    }
    vector<vi> v(nV);
    for(int i=0;i<nE;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    queue<ii> L;
    pair<int,int> edge;
    int s=5;
    edge.first=s;
    Discovered[s]=0;
    while(!v[s].empty()){
        edge.second=v[s].back();
        v[s].pop_back();
        L.push(edge);
    }
    printf("Output: %d ",s);
    while(!L.empty()){
        edge=L.front();
        L.pop();
        int x=edge.first,y=edge.second;
        if(Discovered[y]==0){
            Discovered[y]=1;
            printf("%d ",y);
            while(!v[y].empty()){
                    //printf("==");
                edge.second=v[y].back();
                v[y].pop_back();
                L.push(edge);
            }
            d[y]=d[x]+1;
        }
       // printf("++");
    }
    while(!L.empty()){
        edge=L.front();
        L.pop();
        printf("Pop: %d %d\n",edge.first,edge.second);
    }

}
