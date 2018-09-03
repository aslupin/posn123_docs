using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
main(){
    int n,siz;
    cin >> n >> siz;
    typedef pair<int,int> ii;
    typedef pair<int,ii> iii;
    vector<ii> time;
    map<int,ii> an;
    
    int gulee;
    for(int i=0;i<n;i++){
        cin >> gulee;
        time.push_back(ii(gulee,i));
    }
    sort(time.begin(),time.end());
    int ans = 0;
    int ob = 0;
    int most = 0;
    int maxx=0;
    while(ob != siz){
    for(vector<ii>::iterator itr = time.begin();itr != time.end();itr++){
        ii oo = *itr;
        int t = oo.first; //gulee
        int tt = oo.second; // i
        
        if(most >= t || itr == time.begin()){
            
            map<int,ii>::iterator fi = an.find(tt);
            if(fi != an.end()){
             an.at(tt) += 1;
             
                   // if(maxx < (fi->second->second) * (fi->second->first))
                   // maxx = (fi->second->second) * (fi->second->first);
                    
            }
            else{
                an.insert(iii(tt,ii(*itr,1)));
            }
            most += t;
            ob += 1;
        }
        if(ob == siz)break;
        
    }
    }
    
    cout << maxx;
}


/*

using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
main(){
    int n,siz;
    cin >> n >> siz;
    typedef pair<int,int> ii;
    vector<int> time;
    map<int,int> an;
    
    int gulee;
    for(int i=0;i<n;i++){
        cin >> gulee;
        time.push_back(gulee);
    }
    sort(time.begin(),time.end());
    int ans = 0;
    int ob = 0;
    int most = 0;
    int maxx=0;
    while(ob != siz){
    for(vector<int>::iterator itr = time.begin();itr != time.end();itr++){
        if(most >= *itr || itr == time.begin()){
            
            map<int,int>::iterator fi = an.find(*itr);
            if(fi != an.end()){
             an.at(*itr) += 1;
             
                    if(maxx < fi->second * fi->first)
                    maxx = fi->second * fi->first;
            }
            else{
                an.insert(pair<int,int>(*itr,1));
            }
            most += *itr;
            ob += 1;
        }
        if(ob == siz)break;
        
    }
    }
    
    cout << maxx;
}

*/
