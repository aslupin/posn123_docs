using namespace std;
#include <iostream>
#include <algorithm>
#include <string>
main(){
    
    string txt,txt_ch,txtAns;
    cin >> txt >> txt_ch;
    
    string::iterator findSt = txt_ch.begin();
    for(string::iterator itr2 = txt.begin();itr2 != txt.end();itr2++){
                
                findSt = find(txt_ch.begin(),txt_ch.end(),*itr2);
                // found
                if(findSt != txt_ch.end()){
                        txt_ch.erase(txt_ch.begin(),findSt);
                     //   cout << txt_ch << endl;
                }
                else{
                    cout << "NO";
                    return 0;
                }
       // }
    }
    cout << "YES";
}
