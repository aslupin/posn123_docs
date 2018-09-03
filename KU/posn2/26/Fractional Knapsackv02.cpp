using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>
main(){
    typedef pair<double,double> ii;
    typedef pair<double,ii> iii;
    vector<iii> viii;
    
    int n;
    double bag=0.0;
    cin >> n;
    double v,w;
    double ave;
   
    for(int i=0;i<n;i++){
      cin >> v;
      cin >> w;
     ave = w/v;
     
     viii.push_back(iii(ave,ii(v,w)));
    }
    cin >> bag;
    sort(viii.begin(),viii.end());
    reverse(viii.begin(),viii.end());
    
    int i=0;
    double sumW= 0,sumV=0;
    while(sumW < bag){
        
        
        iii ooo = viii[i];
        ii oo = ooo.second;
      //  cout << oo.first << " " << oo.second << endl;
        
        if(sumW + oo.first <= bag){
        sumW += oo.first;
        sumV += oo.second;
        
       // cout << "1 :: " << oo.first << " " << oo.second << " " << sumW << " "  << sumV << endl; 
        }
        else if(sumW + oo.first > bag){
                
       // cout << bag-sumW << endl;
         sumV += ((bag - sumW)*ooo.first);
         sumW += bag-sumW;
       //  cout << "2 :: " << ooo.first << " " << sumW << " "  << sumV << endl;
      //   cout << "2 :: " << sumW << " "  << sumV << endl; 
        // sumV += 
        }
            
        
        i++;
    }
    cout << sumV;
    
    
    
 
    

}
