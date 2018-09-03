using namespace std;
#include <iostream>
main(){
    int ans=0,pos=0;
    int i,j;
    cin >> i >> j;
    (i<j)?(ans=i,pos=0):(ans=j,pos=1);
    cout << ans << " " << pos;
}
