#include<stdio.h>

int main()
{
    //For BS data element must be sorted
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int ITEM;
    while(scanf("%d",&ITEM)==1)
    {
        int LB=0,UB=9;
        int MID = (LB+UB)/2;

        while(arr[MID]!=ITEM)
        {
            if(arr[MID]>ITEM)
            {
                UB=MID-1;
                MID = (LB+UB)/2;
            }
            else
            {
                LB=MID+1;
                MID = (LB+UB)/2;
            }
        }
        printf("ITEM Location is: %d\n",arr[MID]);
    }
    return 0;
}
