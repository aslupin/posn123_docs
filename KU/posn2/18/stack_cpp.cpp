using namespace std;
#include <iostream>
#include <stack>
#include <cstring>

int main(){
stack<string> txt;
string tem_txt,temp;
for(int i=0;i<=9;i++){
    cin >> tem_txt;
    txt.push(tem_txt);
}
while(!txt.empty()){
    temp = txt.top();
    cout << temp << " ";
     txt.pop();
    
}

}
