using namespace std;
#include <iostream>
#include <vector>

int main(){
    
vector<int> v;
cout << v.size() << "\n"; // 0
v.push_back(3);
v.push_back(5);
cout << v.size() << "\n"; // 2
cout << v[0] << " " << v[1] << "\n"; // 3 5
return 0;


}
