#include<stdio.h>

int main()
{
    int arr[100];
    //Inserting data
    for(int i=100,j=0;i>0;--i,++j)
    {
        arr[j]=i;
    }
    //Sorting
    for(int i=0;i<100;++i)
        for(int j=i+1;j<100;++j)
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
    //Printing
    for(int i=0;i<100;++i)
        printf(" %d",arr[i]);
    return 0;
}
