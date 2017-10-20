#include<stdio.h>

int main()
{
    int arr[11]={1,2,3,4,5,6,7,8,9,10};
    //Traversing
    for(int i=0;i<10;++i)
    {
        printf(" %d",arr[i]);
    }
    //Deleting
    arr[9]=0;
    //Inserting
    arr[9]=10;
    return 0;
}
