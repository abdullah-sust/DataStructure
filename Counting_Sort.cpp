#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int n,arr[100];
    while(scanf("%d",&n)==1)
    {
        int max=-1000;
        for(int i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>max)
                max=arr[i];
        }
        int temp[max+1];
        memset(temp,0,sizeof(temp));
        for(int i=0;i<n;++i)
        {
            ++temp[arr[i]];
        }
        for(int i=0,j=0;i<=max;++i)
        {
            if(temp[i]!=0)
            {
                int t=temp[i];
                while(t--)
                {
                    arr[j]=i;
                    ++j;
                }
            }
        }
        for(int i=0;i<n;++i)
        {
            printf(" %d",arr[i]);
        }
        printf("\n\n");
    }
    return 0;
}
/*
7
1 4 1 2 7 5 2

1 1 2 2 4 5 7
*/
