#include <iostream>
using namespace std;
struct vector
{
double x;
double y;
};
ostream& oparetor 
ostream& operator << (ostream& o, vector a)
{
o << "(" << a.x << ", " << a.y << ")";
return o;
}
int main () {
vector a;
a.x = 35;
a.y = 23;
cout << a << endl; // Displays (35, 23)
return 0;
}
