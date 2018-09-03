using namespace std;
#include <iostream>
#include <queue>
#include <cstring>

int main(){
queue<string> txt;
string tem_txt,temp;



for(int i=0;i<=9;i++){
    cin >> tem_txt;
    txt.push(tem_txt);
}

while(!txt.empty()){
    temp = txt.front();
    cout << temp << " ";
     txt.pop();
    
}

}
