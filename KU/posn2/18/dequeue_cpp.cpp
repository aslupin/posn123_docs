using namespace std;
#include <iostream>
#include <deque>

main(){
deque<string> txt;
string tem_txt,temp;
for(int i=0;i<=9;i++){
    cin >> tem_txt;
    txt.push_back(tem_txt);
}
deque<string> *itr = &txt;
while(!txt.empty()){
    temp = txt.front();
    cout << temp << " ";
     txt.pop_front();
    
}


}

