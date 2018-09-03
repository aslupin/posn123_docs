#include<cstdio>
#include<vector>
#include<stack>

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
    int nV;
    scanf("%d",&nV);
    int Discovered[nV];
    int d[nV];
    for(int i=0;i<nV;i++){
        Discovered[i]=0;
        d[i]=0;
    }
    vector<vii> v(nV);
    for(int i=0;i<nV;i++){
        int nE,y,w;
        scanf("%d",&nE);
        for(int j=0;j<nE;j++){
            scanf("%d %d",&y,&w);
            v[i].push_back(ii(y,w));
            v[y].push_back(ii(i,w));
        }
    }
    stack<int> L;
    pair<int,int> node;
    vector<ii> edge;
    int count=1;

    for(int s=0;s<nV;s++){
        if(Discovered[s]==0){
            L.push(s);
            printf("Component[%2d]: ",count);
            while(!L.empty()){
                int u=L.top();L.pop();
                if(Discovered[u]==0){
                    Discovered[u]=1;
                    printf("%d ",u);
                    for(int i=0;i<v[u].size();i++){

                        node=v[u][i];
                        int y=node.first;
                        L.push(y);
                    }
                }
            }
            printf("\n");
            count++;
        }
    }

}

