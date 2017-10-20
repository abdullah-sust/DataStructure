#include<stdio.h>
#include<string.h>

using namespace std;

int stack[100];
int cur_pos=0;

void push(int n)
{
    if(cur_pos==10)
    {
        printf("Overflow\n\n");
        return;
    }
    else
    {
        stack[cur_pos]=n;
        ++cur_pos;
        printf("Pushed\n\n");
        return;
    }
}

void pop()
{
    if(cur_pos==0)
    {
        printf("Underflow\n\n");
    }
    else
    {
        --cur_pos;
        printf("Popped\n\n");
    }
    return;
}

void isEmpty()
{
    if(cur_pos==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return;
}

int main()
{
    char q[10];
    while(scanf("%s",q)==1)
    {
        if(strcmp(q,"isEmpty")==0)
        {
            isEmpty();
        }
        else if(strcmp(q,"push")==0)
        {
            int n;
            scanf("%d",&n);
            push(n);
        }
        else if(strcmp(q,"pop")==0)
        {
            pop();
        }
    }
    return 0;
}
