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
