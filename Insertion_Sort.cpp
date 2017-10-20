#include<stdio.h>
#include<string.h>
#include<utility>

using namespace std;

int main()
{
    int n,arr[100];
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
        }

        for(int i=1;i<n;++i)
        {
            for(int j=0;j<i;++j)
            {
                if(arr[i]<arr[j])
                {
                    swap(arr[i],arr[j]);
                    break;
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
