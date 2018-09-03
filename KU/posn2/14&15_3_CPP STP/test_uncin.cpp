#include <iostream>
#include <cstdio>
#include <map>
#include <cstdio>
using namespace std;



void readitems(map<string,int>&m){
string word;
int val=0;
while(cin>>word>>val)m[word] += val;
}
int main(){
    map<string,int> tbl;
    readitems(tbl);
    
    int total =0 ;
    typedef map<string,int>::const_iterator CI;
    for(CI p = tbl.begin();p!=tbl.end();++p){
        total += p ->second;
        cout << p ->first << "  " << p->second << endl;
    }
    cout<<"-----------\ntotal\t" << total << endl;
     //return !cin;
    char txt[100];
    
    cout << "name_find : ";
   
    scanf("%s",txt);
    scanf("%s",txt);
    CI q = tbl.find(txt);
    
    if(q!=tbl.end()) cout << txt << " : " << q->second << endl;
    else cout << "not found!" <<endl;

    return !cin;
        
    }

