#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int arr[n][n],num=0;
        //Inserting data into 2D Array
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                arr[i][j]=++num;
        //Traversing 2D Array
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                printf(" %d",arr[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}
