using namespace std;
#include <iostream>
main(){
    int n,m;
    int i,j;
    cin >> n >> m;
    int sett[n+1][2];
    int ans=0,pos=0;
    sett[0][0] = 0;
    sett[0][1] = 0;
    for(int k=1;k<=n;k++){
        cin >> i >> j;
        sett[k][0] = i;
        sett[k][1] = j;
        (sett[k-1][0]+sett[k][0] < sett[k-1][1]+sett[k][0]+m)?sett[k][0]+=sett[k-1][0]:sett[k][0]+=(sett[k-1][1]+m);
        (sett[k-1][1]+sett[k][1] < sett[k-1][0]+sett[k][1]+m)?sett[k][1]+=sett[k-1][1]:sett[k][1]+=(sett[k-1][0]+m);
    }
    (sett[n][0] < sett[n][1])?cout<<sett[n][0]:cout<<sett[n][1];
    
}
