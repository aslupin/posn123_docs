using namespace std;
#include <iostream>
#include <iomanip>
main(){
    double dd = 3.55;
    string test;
    cin >> test;
    cout << setw(7) << setfill('+') << test << endl;
    cout << setprecision(12) << showpoint << dd;
}
