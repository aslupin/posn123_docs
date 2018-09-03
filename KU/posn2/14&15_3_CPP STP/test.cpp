#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
main(){
int n,a;
cin >> n;
vector<int> sq(6,0);

for(int i=0;i<n;i++){
cin >> a;
sq[a-1] += 1;
}
for(int i=0;i<6;i++){
cout << "[" << i+1 << "] = " << showpoint << setprecision(4)  << sq[i]/(double)n  << endl;

}




}
