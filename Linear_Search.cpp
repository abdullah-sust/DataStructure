#include<stdio.h>

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int ITEM;
    while(scanf("%d",&ITEM)==1)
    {
        int f=0;
        for(int i=0;i<10;++i)
            if(ITEM==arr[i])
                f=1;
        if(f==1)
            printf("Found\n");
        else
            printf("Not Found\n");
    }
    return 0;
}
