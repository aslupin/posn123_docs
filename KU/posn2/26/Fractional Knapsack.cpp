using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>
main(){
    typedef pair<double,double> ii;
    typedef pair<double,ii> iii;
    vector<iii> viii;
    
    int n,bag=0;
    cin >> n;
    double v,w;
    double ave;
   
    for(int i=0;i<n;i++){
      cin >> v;
      cin >> w;
     ave = w/v;
     cout << "::" << ave <<endl;
     viii.push_back(iii(ave,ii(v,w)));
    }
    cin >> bag;
    sort(viii.begin(),viii.end());
    int sumW= 0,i=0,sumV=0;
    while(sumW != bag){
        
        
        iii ooo = viii[i];
        ii oo = ooo.second;
        
        if(sumW + oo.second <= bag){
        sumW += oo.second;
        sumV += oo.first;
        
        cout << "1 :: " << oo.second << " " << sumW << " "  << sumV << endl; 
        }
        else if(sumW + oo.second > bag){
         sumV += ((bag - sumW)*ooo.first);
         sumW += bag-sumW;
         
         cout << "2 :: " << sumW << " "  << sumV << endl; 
        // sumV += 
        }
            
        
        i++;
    }
    cout << sumV;
    
    
    
 
    

}
