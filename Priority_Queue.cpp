// C++ program to generate binary numbers from 1 to n
#include <iostream>
#include <queue>
#include <string.h>
#include <stdio.h>

using namespace std;
struct p_q
{
    int data;
    int priority;
};
p_q prior_queue[100];
int f_pos=0, l_pos=0;

void insert(int n, int p)
{
    if(l_pos==100)
    {
        printf("Overflow\n\n");
        return;
    }
    prior_queue[l_pos].data=n;
    prior_queue[l_pos].priority=p;
    ++l_pos;
    printf("Inserted\n\n");
    return;
}

void getHighestPriority()
{
    if(f_pos==l_pos)
    {
        printf("Empty\n\n");
        return;
    }
    int t=prior_queue[f_pos].priority,p=f_pos;
    for(int i=f_pos;i<l_pos;++i)
    {
        if(prior_queue[i].priority>t)
        {
            t=prior_queue[i].priority;
            p=i;
        }
    }
    printf("%d\n\n",prior_queue[p].data);
    return;
}

void deleteHighestPriority()
{
    if(f_pos==l_pos)
    {
        printf("Empty\n\n");
        return;
    }
    int t=prior_queue[f_pos].priority,p=f_pos;
    for(int i=f_pos;i<l_pos;++i)
    {
        if(prior_queue[i].priority>t)
        {
            t=prior_queue[i].priority;
            p=i;
        }
    }

    if(p==f_pos)
    {
        ++f_pos;
        printf("DeleteHighestPriority\n\n");
        return;
    }

    else if((l_pos-1)==p)
    {
        --l_pos;
        printf("DeleteHighestPriority\n\n");
        return;
    }
    else
    {
        bool in=false;
        for(int i=f_pos;i<l_pos-1;++i)
        {
            if(i==p)
            {
                in=true;
                do
                {
                    prior_queue[i].data=prior_queue[i+1].data;
                    prior_queue[i].priority=prior_queue[i+1].priority;
                    ++i;
                }
                while(i<l_pos-1);
            }
            if(in==true)
            {
                --l_pos;
                printf("DeleteHighestPriority\n\n");
                break;
            }
        }
    }
    return;
}

void traverse()
{
    for(int i=f_pos;i<l_pos;++i)
    {
        printf(" %d",prior_queue[i].data);
    }
    printf("\n\n");
    return;
}

int main()
{
    char s[10];

    while(scanf("%s",&s)==1)
    {
        if(strcmp("insert",s)==0)
        {
            int n,p;
            scanf("%d %d",&n,&p);
            insert(n, p);
        }
        else if(strcmp("front",s)==0)
        {
            getHighestPriority();
        }
        else if(strcmp("pop",s)==0)
        {
            deleteHighestPriority();
        }
        else if(strcmp("traverse",s)==0)
        {
            traverse();
        }
    }
    return 0;
}
