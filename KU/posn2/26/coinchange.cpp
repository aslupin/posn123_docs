using namespace std;
#include <iostream>
main(){
    int n;
    cin >> n;
    int coin[n];
    
    for(int i=0;i<n;i++){
      cin >> coin[i];
    }
    
    for(int i=0;i<n;i++){
        int o=0,oo=0,ooo=0,v=0,vv=0;
        int temp = coin[i];
        if(temp/20 > 0) {
        vv += (temp/20);   
        temp = temp%20;}
        
        if(temp/10 > 0){ 
        v += (temp/10);   
        temp = temp%10;}
        
        if(temp/5 > 0){
         ooo += (temp/5);   
        temp = temp%5;}
        
        if(temp/2 > 0){
        oo += (temp/2);   
        temp = temp%2;}
        if(temp/1 > 0){
        o += (temp/1);   
        temp = temp%1;}
        
        cout << o << " " << oo << " " << ooo << " " << v << " " << vv << endl;
    }
    
    

}
