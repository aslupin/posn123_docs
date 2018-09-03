using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
main(){
    
    int n;
    cin >> n;
    //typedef pair<int,int> ii;
    vector<int> pay(n);
    int order_pay[n];
    for(int i=0;i<n;i++){
        order_pay[i] = 0;
    }
    
    int x;
    for(int u=0;u<n;u++){
        for(int i=0;i<n;i++){
            cin >> x;
            if(u!=i){
                order_pay[u] -= x; 
                order_pay[i] += x;
                pay[u] = order_pay[u];
                pay[u] = 1;
                pay[i] = order_pay[i];
            }
        }
    }
    //cout << pay[0] << pay[1] << pay[2];
    
    
    while(1){
    sort(pay.begin(),pay.end());
    if(pay[n-1] != 0 && pay[0] != 0){
    int temp = pay[0];
    if(temp < 0) temp *= -1;
    
    if(temp > pay[n-1]){
        cout << pay[n-1] << endl;
        pay[0] += pay[n-1];
        pay[n-1] = 0;
    }
    else if(temp < pay[n-1] ){
        cout << temp <<endl;
        pay[n-1] += pay[0];
        pay[0] = 0;
    }
    else{
        
        cout << pay[n-1] << endl;
        pay[n-1] = 0;
        pay[0] = 0;
    }
    }
    
    else{
        break;
    }
    }
    
    
    


}
