
#include<stdio.h>

void merge_sort(int *arr,int lb,int j,int ub)
{
    int i;
    int a = lb;
    int b = j+1;
    int temp[ub+1];

    for(i=lb;a<=j && b<=ub;i++)
    {
        if(arr[a] < arr[b])
            temp[i] = arr[a++];
        else
            temp[i] = arr[b++];
    }

    for(i;a<=j;i++)temp[i] = arr[a++];
    for(i;b<=ub;i++)temp[i] = arr[b++];

    for(i=lb;i<=ub;i++)
        arr[i] = temp[i];
}

void part(int *arr,int lb,int ub)
{
    if(lb < ub)
    {
        int j = ((lb+ub)/2);
        part(arr,lb,j);
        part(arr,j+1,ub);
        merge_sort(arr,lb,j,ub);

        int i;
        for(i=lb;i<ub+1;i++)printf(" %d",arr[i]);
        printf("\n");
    }
}

int main()
{
    int sz;
    printf("enter element : ");
    scanf("%d",&sz);

    int i;
    int arr[sz];
    for(i=0;i<sz;i++)
    {
        printf("enter number : ");
        scanf("%d",&arr[i]);
    }

    part(arr,0,sz-1);

    printf("numner :");
    for(i=0;i<sz;i++)printf(" %d",arr[i]);
}
