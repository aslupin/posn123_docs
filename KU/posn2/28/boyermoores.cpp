using namespace std;
#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>
main(){
    map<char,int> last;
    map<char,int> pat;
    int n,m;
    cin >> n >> m;
     char t[n],p[m];
    cin >> t >> p;
    
    for(int i=0;i<n;i++){
        if(i<m)
        pat.insert(pair<char,int>(p[i],i));
        
        map<char,int>::iterator tt = last.find(t[i]);
        if(tt == last.end()){
            last.insert(pair<char,int>(t[i],-1));
        }
    }
    int cco=0;
    int i = m-1;
    int j = m-1;
   // int pi = i;
    while(i<n){
            cco=+1;
        if(p[j] == t[i]){
               // cout << "1";
            if(j==0){
                cout << cco << endl;
                return i;}
            else{
                i=i-1;
                j=j-1;
            }
        }
        else{
          //  cout << "2";
            i = i+m-min(j,1 + pat.find(t[i])->second);
            j = m-1;
        }
        
    }
 //   cout << cco;
   // return -1;

}
