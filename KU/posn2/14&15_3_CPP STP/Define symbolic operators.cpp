
#include <iostream>
using namespace std;
struct vector {
 double x;
 double y;
};

vector operator + (vector a, vector b) {
 vector r;
 r.x = a.x + b.x;
 r.y = a.y + b.y;
 return r;
}
int main () {
 vector k,k2,m; // No need to type "struct vector"
 k.x = 2; // To be able to write
 k.y = 1; // k = vector (2, -1)
 k2.x = 1;
 k2.y = 2;
 // see chapter 19.
 m = k2 + k; // Magic!
 cout << "(" << m.x << ", " << m.y << ")" << endl;
 return 0;
}
