#include <iostream>
#include <cstdio>
int main(){
int x = 10;
int &p = x;
p = 20;
p++;
x++;
printf("%d\n", p);
}
