#include<stdio.h>
#include<utility>
using namespace std;
int arr[100];
void qSort(int start, int end)
{
    if(start<end)
    {
        int pivot=arr[start],pos=start;
        for(int m=start+1;m<=end;++m)
        {
            if(pivot>arr[m])
            {
                arr[pos]=arr[m];
                ++pos;
                arr[m]=pivot;
            }
        }
        qSort(start,pos-1);
        qSort(pos+1,end);
    }
    return;
}

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
        }
        qSort(0,n-1);
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
2 3 4 5 4 5 4 7
7
4 1 2 3 5 6 7
1 2 3 4 5 6 7
8
8 7 6 5 4 3 2 1
1 2 3 4 5 6 7 8
*/
