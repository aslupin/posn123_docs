#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
template <class T> class vector {
T* v;
int sz;
public:
vector (int s) { v = new T [sz = s]; }
~vector () { delete[] v; }
T& operator[] (int i) { return v[i]; }
int get_size() { return sz; }
int print_array(){
for(int i=0;i<sz;i++)
    cout<< "v[" << setw(2) << i << "] = " << v[i]<<endl;
}


};
int main() {
vector<int> intStore(10);
vector<double> doubleStore(20);
doubleStore[0] = 5;
//cout << "doubleStore[0]=" << doubleStore[0] << endl;
//cout << "intStore[0]=" << intStore[0] << endl;
intStore.print_array();
cout << endl;
doubleStore.print_array();
return 0;
}
