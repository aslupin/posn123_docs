using namespace std;
#include <iostream>
main(){
    int Sn,a_one=0,a_n,n;
    int sum=0;
    while(cin >> Sn){
    
    for(int i=1;i<=Sn;i++){
        for(int j=i+1;j<=Sn;j++){
                
                n = j-i+1; 
                sum  = n*(i+j);
                
            if(sum == Sn*2){
                cout << Sn << " = " << i << " + ... + " << j <<endl;
                a_one = 1;
                break;
                }
            else if(i == Sn && j == Sn+1 ){
             cout << Sn << " = " << i+1 << " + ... + " << i+1 <<endl;
                a_one = 1;
                break;
        }
        }
        if(a_one == 1) break;
       
    }
    }

}
