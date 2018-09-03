#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct array{
   double x[15];
};

ostream& operator << (ostream& o, array a)  {
for(int i=0;i<=14;i++)
    o << "element[" << setw(2) << i << "] = " << setw(15) << a.x[i] << endl; 
}

int main () {

   array k;
   for (int i=0;i<=14;i++)
      k.x[i] = rand();

   cout << k;

   return 0;
}
