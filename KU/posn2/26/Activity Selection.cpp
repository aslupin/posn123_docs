using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
main(){
    typedef pair<int,int> ii;
    typedef pair<int,ii> iii;
    vector<iii> vii;
    vector<ii> vi;
    int n,inputX,inputY;
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> inputX >> inputY;
        vii.push_back(iii(inputY,ii(inputX,i+1)));
    }
    int sizN;
    cin >> sizN;
    sort(vii.begin(),vii.end());
    for(vector<iii>::iterator itr = vii.begin();itr != vii.end();itr++){
            iii ooo = *itr;
            ii oo = ooo.second;
            //oo.second = rank
            //oo.first = X
            //ooo.first = Y
            if(itr == vii.begin() && ooo.first > sizN){
                    cout << "0";
                
                
            }
            else if(itr == vii.begin() && ooo.first <= sizN){
                vi.push_back(ii(oo.first,ooo.first));
                cout << oo.second << " ";
            }
            else{
                   
            vector<ii>::iterator ww = vi.end()-1;
            ii zz = *ww;
            //zz.first = X
            //zz.second = Y
          //  cout << oo.first << " " << ooo.first << " : " << zz.first << " " << zz.second << endl;
            if(oo.first <= sizN && ooo.first <= sizN){
                if(oo.first >= zz.second && ooo.first >= zz.first){
                   //  cout << "w3" ;
                vi.push_back(ii(oo.first,ooo.first));
                cout << oo.second << " ";
            }}
            }
        
        
    }
    
    
}
