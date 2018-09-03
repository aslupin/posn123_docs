using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
main(){
    
    int n;
    cin >> n;
    typedef pair<int,int> ii;
    vector<ii> pay(n);
    int order_pay[n];
    for(int i=0;i<n;i++){
        order_pay[i] = 0;
    }
    
    int x;
    for(int u=0;u<n;u++){
        for(int i=0;i<n;i++){
            cin >> x;
          //  if(u!=i){
                order_pay[u] -= x; 
                order_pay[i] += x;
                pay[u].first = order_pay[u];
                pay[u].second = u;
                pay[i].first = order_pay[i];
            //}
        }
    }
   // cout << pay[0].first << pay[1].first << pay[2].first << pay[3].first << pay[4].first << pay[5].first << endl;
    
    
    while(1){
    sort(pay.begin(),pay.end());
    if(pay[n-1].first == pay[n-2].first && pay[n-1].first != 0){
        reverse(pay.end()-2,pay.end());
    }
  //  cout << pay[0].second << pay[1].second << pay[2].second << pay[3].second << pay[4].second << pay[5].second << endl;


    if(pay[n-1].first != 0 && pay[0].first != 0){
    int temp = pay[0].first;
    if(temp < 0) temp *= -1;
    
    if(temp > pay[n-1].first){
        cout << pay[0].second << "->" << pay[n-1].second << " : " << pay[n-1].first << endl;
        pay[0].first += pay[n-1].first;
        pay[n-1].first = 0;
    }
    else if(temp < pay[n-1].first ){
        cout << pay[0].second << "->" << pay[n-1].second << " : " << temp <<endl;
        pay[n-1].first += pay[0].first;
        pay[0].first = 0;
    }
    else{
        
        cout << pay[0].second << "->" << pay[n-1].second << " : " << pay[n-1].first << endl;
        pay[n-1].first = 0;
        pay[0].first = 0;
    }
    }
    
    else{
        break;
    }
    }
    
    
    


}

