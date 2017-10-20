#include<stdio.h>
#include<string.h>

using namespace std;

int queue[100];
int f_pos=0, l_pos=0;

void enqueue(int n)
{
     if(l_pos==100)
     {
         printf("Overflow\n\n");
         return;
     }
     queue[l_pos]=n;
     ++l_pos;
     printf("Enqueued\n\n");
     return;
}

void dequeue()
{
    if(l_pos==f_pos)
    {
        printf("Underflow\n\n");
        return;
    }
    ++f_pos;
    printf("Dequeued\n\n");
    return;
}

void front()
{
    if(f_pos==l_pos)
    {
        printf("Empty\n\n");
        return;
    }
    printf("%d\n\n",queue[f_pos]);
    return;
}

void rear()
{
    if(f_pos==l_pos)
    {
        printf("Empty\n\n");
        return;
    }
    printf("%d\n\n",queue[l_pos-1]);
    return;
}

int main()
{
    char q[10];
    while(scanf("%s",q)==1)
    {
        if(strcmp(q,"Dequeue")==0)
        {
            dequeue();
        }
        else if(strcmp(q,"Enqueue")==0)
        {
            int n;
            scanf("%d",&n);
            enqueue(n);
        }
        else if(strcmp(q,"Front")==0)
        {
            front();
        }
        else if(strcmp(q,"Rear")==0)
        {
            rear();
        }
    }
    return 0;
}
/*
// C++ program to generate binary numbers from 1 to n
#include <iostream>
#include <queue>
#include <stdio.h>

using namespace std;

// This function uses queue data structure to print binary numbers
void generatePrintBinary(int n)
{
    // Create an empty queue of strings
    queue<string> q;

    // Enqueue the first binary number
    q.push("1");

    // This loops is like BFS of a tree with 1 as root
    // 0 as left child and 1 as right child and so on
    while (n--)
    {
        // print the front of queue
        string s1 = q.front();
        q.pop();
        cout << s1 << "\n";

        string s2 = s1;  // Store s1 before changing it

        // Append "0" to s1 and enqueue it
        q.push(s1.append("0"));

        // Append "1" to s2 and enqueue it. Note that s2 contains
        // the previous front
        q.push(s2.append("1"));
    }
     //   cout << q.front() << "\n";
}

// Driver program to test above function
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        generatePrintBinary(n);
    }
    return 0;
}

*/



