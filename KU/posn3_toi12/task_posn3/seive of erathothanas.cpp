#include<cstdio>
using namespace std;

int main(){
    int list[1001]={0};
    for(int i=2;i<1001;i++) list[i]=1;
    for(int i=2;i<1001;i++){
        if(list[i]==0) continue;
        for(int j=i+1;j<1001;j++){
                if(list[j]==1&&j%i==0){
                    list[j]=0;
                }
        }
        printf("%d\n",i);
    }
}
