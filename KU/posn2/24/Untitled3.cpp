#include<iostream>

using namespace std;

struct a
{
    int a[900];
};

int main()
{
    struct a A;
    for(int i=0;i<900;i++)A.a[i] = i;
    for(int i=0;i<900;i++)cout << (A.a[i]) << " ";
}
