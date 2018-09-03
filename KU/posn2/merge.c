#include<stdio.h>

int merge(int a[],int n,int lb,int ub,int m){
    int t[n],i1=lb,i2=m+1,arr=0;
    while(i1<m+1&&i2<ub+1){
        if(a[i1]>a[i2]){
            t[arr]=a[i1];
            arr++;
            i1++;
        }
        else{
            t[arr]=a[i2];
            arr++;
            i2++;
        }
    }
    while(i1<m+1){
        t[arr]=a[i1];
        arr++;
        i1++;
    }
    while(i2<ub+1){
            t[arr]=a[i2];
        arr++;
        i2++;
    }
    int i;
    for(i=0;i<ub-lb+1;i++) a[i+lb]=t[i];
}

int Partition(int a[],int n,int lb,int ub){
    if(lb<ub){
        int m=(lb+ub)/2;
        Partition(a,n,lb,m);
        Partition(a,n,m+1,ub);
        merge(a,n,lb,ub,m);
    }
}


int main(){
    int a[5]={7,5,2,3,1},i;
    Partition(a,5,0,4);
    for(i=0;i<5;i++)printf("%d ",a[i]);
}
