#include<stdio.h>
#include<utility>
using namespace std;
int arr[100];

void merge(int start, int mid, int end)
{
    int i,j,k;
    int left[mid-start+1];
    int right[end-mid];

    for(i=0;i<mid-start+1;++i)
    {
        left[i]=arr[i+start];
    }

    for(j=0;j<end-mid;++j)
    {
        right[j]=arr[mid+1+j];
    }

    int x=0,y=0,pos=start;

    while(x<i && y<j)
    {
        if(left[x]<right[y])
        {
            arr[pos]=left[x];
            ++x;
        }
        else
        {
            arr[pos]=right[y];
            ++y;
        }
        ++pos;
    }
    while(x<i)
    {
        arr[pos]=left[x];
        ++x;
        ++pos;
    }
    while(y<j)
    {
        arr[pos]=right[y];
        ++y;
        ++pos;
    }
    return;
}

void mergeSort(int start, int end)
{
    if(start<end)
    {
        int mid = (start+end)/2;
        mergeSort(start,mid);
        mergeSort(mid+1,end);
        merge(start,mid,end);
    }
    return;
}

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;++i)
            scanf("%d",&arr[i]);
        mergeSort(0,n-1);
        printf("\nAfter sorting: ");
        for(int i=0;i<n;++i)
        {
            printf(" %d",arr[i]);
        }
        printf("\n\n");
    }
    return 0;
}
/*
8
7 2 3 4 5 4 5 6
7
4 1 2 3 5 6 7
8
8 7 6 5 4 3 2 1

*/
