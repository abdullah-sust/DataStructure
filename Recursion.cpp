#include<stdio.h>

using namespace std;

// This program derive factorial of a given number.
// Also print them decreasing to increasing order.

long long int factorial(int n)
{
    if(n==1)
        return 1;
    return n*factorial(n-1);
}

void recur(int n)
{
    if(n==0)
    {
        return;
    }
    printf(" %d",n);
    recur(n-1);
    printf(" %d",n);
}

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("Factorial(%d): %lld\n\n",n,factorial(n));

        recur(n);
        printf("\n\n");
    }
    return 0;
}
