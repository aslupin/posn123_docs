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
    
    int pos = m-1;
    int pop=0,coutt=0;
     map<char,int>::iterator ttt;
    while(pos < n){
    // compare true
    ttt = pat.find(t[pos]);
    if(t[pos] == p[m-1]){
        coutt++;
        
        int cc = 0;
        while(1){
            map<char,int>::iterator ee = pat.find(t[pos-cc]);
            if(t[pos-cc] == p[m-1-cc]){
                //if(cc == 0)
                //coutt++;
    
                cc++;
                if(cc == m-1){
                    pop = pos-cc;
                    cout << coutt << endl << pop << endl;
                    return 0; 
                }
            }
            else if(ee == pat.end()){
                //coutt++;
                pos += m-1;
                
                break;
                
            }
            else{
                //coutt++;
                pos++;
                break;
                
            }
        }
    }
    else if(ttt == pat.end()){
        coutt++;
        pos += m-1;
        
    }
    else{
        
        if(ttt != pat.end()){
            int uu = ttt->second;
            coutt++;
            pos += (m-1) - uu; 
        }
        else{
        coutt++;
        pos++;
        }
    }
            
            
        
        
        
        
    }

}
