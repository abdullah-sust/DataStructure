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

        for(int i=0;i<n-1;++i)
        {
            int min=arr[i],min_p=i;
            for(int j=i+1;j<n;++j)
            {
                if(min>arr[j])
                {
                    min=arr[j];
                    min_p=j;
                }
            }
            swap(arr[i],arr[min_p]);
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
