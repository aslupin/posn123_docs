#include <iostream>
#include <iomanip>
#include <list>
#include <cstring>
using namespace std;
list<int> stackk;
void push(int x){
stackk.push_back(x);
}
void printStack(){
for (list<int>::iterator itr=stackk.begin(); itr != stackk.end(); ++itr) {
                cout << *itr << endl;
}
}
void pop(){
i           nt last = stackk.end;

return last;
}

main(){
char txt;
int num=0;
do{
    cin >> txt;
    if(txt == 'u'){
        cin >> num;
          push(num); 
    }
    else if(txt == 'p'){
       printStack();
    }
    else if(txt == 'o'){
       
    }
    //else if(!strcmp(txt,"x"))
    //ch=0;
}while(txt != 'x');
}
