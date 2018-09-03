using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <list>
#include <queue>
main(){
  //  priority_queue <int>,vector<int>, greater<int> > data;
    register char txt[500000],txtee[500000];
    list<int> Num;

    cin >> txt;
  
    for(int i=0,j=0;i <= strlen(txt);i++){
            if(txt[i] == '+' || i==strlen(txt)){
            txtee[j] = NULL;
            Num.push_back(atoi(txtee));
            j=0;
            }
            else{
                txtee[j++] = txt[i];
            }
    }
    Num.sort();
   
    for(list<int>::iterator itr = Num.begin();itr != Num.end();itr++){
       if(itr != Num.begin())
       cout<< "+" << *itr;
       else cout << *itr;
    }
    
   // for()
}
   

