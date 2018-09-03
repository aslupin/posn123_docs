using namespace std;
#include <iostream>
#include <vector>

typedef pair<int,int> ii;
vector<ii> dm;

int gcd(int a,int b){
if(b==0) return a;
return gcd(b,a%b);
}

// gcd (888,54) = 6
// 888 = 54(16) + 24
// 54 = 24(2) + 6
// 24 = 6(4) +0
// return 6
int getGCD(int *a,int *b){
    int i = *a;
    int ii = *b;
    int div = gcd(i,ii);
    *a = *a/div;
    *b = *b/div;
}

int Eg_Fraction(int a,int b){
    
    int g = (b/a)+1;
    int num = (a*g) - b;
    int deno = b*g;
    
    dm.push_back(ii(1,g));
    getGCD(&num,&deno);
    if(num == 1){
        dm.push_back(ii(num,deno));
        return 0;
    }
    else{
        Eg_Fraction(num,deno);
    }
        
    
}


main(){
    int n,m;
    cin >> n >> m;
    Eg_Fraction(n,m);
    
    for(vector<ii>::iterator itr = dm.begin();itr != dm.end();itr++){
        ii oo = *itr;
        cout << oo.first << " " << oo.second << endl;
        
        
    }
    
    
    }
