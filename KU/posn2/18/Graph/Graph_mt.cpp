using namespace std;
#include <iostream>
#include <vector>
#include <queue>
#include <functional>

main(){
    cout << "Adjacency Matrix" << endl;
// ARRAY
/*
6
  0  10   0   0 100   0
 10   0   7   0   8   0
  0   7   0   9   0   0
  0   0   9   0  20   5
100   8   0  20   0   0
  0   0   0   5   0   0
*/
int n;
cin >> n;
int we_graph[n+1][n+1];
for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> we_graph[i][j];
        }
}

cout << endl << endl << "Adjacency List" << endl;

// VECTOR 
/*
6
2 2 10 5 100
3 1 10 3 7 5 8
2 2 7 4 9
3 3 9 5 20 6 5
3 1 100 2 8 4 20
1 4 5
*/

int n2,n_n2;
cin >> n2;

typedef  pair<int, int> ii;
typedef vector<ii> vi;
vector<vi> adj_list(n2+1);
int pos_x,we;

for(int i=1;i<=n2;i++){
    cin >> n_n2;
    for(int j=1;j<=n_n2;j++){
        cin >> pos_x >> we;
        adj_list[i].push_back(ii(pos_x,we));
    }
}

int Mat[n2+1][n2+1];
for(int i=1;i<=n2;i++){
    for(int j=1;j<=n2;j++){
        Mat[i][j] = 0;
    }
}
 
int posxCpy,weCpy;
for(int i=1;i<=n2;i++){
for(vector<ii>::iterator itr = adj_list[i].begin();itr != adj_list[i].end();++itr){
    posxCpy = itr->first;
    weCpy = itr->second;
    Mat[i][posxCpy] = weCpy;
}}
for(int i=1;i<=n2;i++){
    for(int j=1;j<=n2;j++){
        cout << Mat[i][j] << " ";
    }
    cout << endl;
    
}

cout << endl << endl << "Edge List" << endl;
//QUEUE
/*
7
1 2 10
1 5 100
2 3 7
2 5 8
3 4 9
4 5 20
4 6 5
*/
int n3;
cin >> n3;

typedef pair<int,ii> iii;
int posy,posx,wet;
priority_queue <iii,vector<iii>, greater<iii> > data;

for(int i=1;i<=n3;i++){
    cin >> posy >> posx >> wet;
    data.push(iii(posy,ii(posx,wet)));
}
ii oo;
iii ooo;

int MatII[n3+1][n3+1],tem_x,tem_y,tem_w;
for(int i=1;i<=n3;i++){
    for(int j=1;j<=n3;j++){
        MatII[i][j] = 0;
    }
}
while(!data.empty()){
        ooo = data.top();
        oo = ooo.second;
      
    MatII[ooo.first][oo.first] = oo.second; 
    data.pop();
}
for(int i=1;i<=n3;i++){
    for(int j=1;j<=n3;j++){
       cout << MatII[i][j] << " ";
    }
    cout << endl;
}



}

