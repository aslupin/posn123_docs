using namespace std;
#include <iostream>
#include <list>
main(){
    list<int> orderNum;
    int n,number;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> number;
        orderNum.push_back(number);
    }
    orderNum.sort();
    
    for(list<int>::iterator itr = orderNum.begin();itr != orderNum.end();++itr){
        cout << *itr;
        
    }
    return 0;
}
