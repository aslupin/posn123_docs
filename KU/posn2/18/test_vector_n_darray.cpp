using namespace std;
#include <utility>
#include <iostream>
#include <vector>
#include <cstdio>
main(){

typedef pair<int,int> ii;
typedef vector<ii> strrii;
char str[10];
strrii.push_back(make_pair(20,20));
strrii.push_back(make_pair(21,21));


cout << "array : ";
cin >> str;
cout << str << endl << "vector : ";

for(vector<ii>::const_iterator itr=strrii.begin();itr != strrii.end();++itr){
    cout << *itr << " ";
}

}

