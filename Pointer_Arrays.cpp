#include<stdio.h>
#include<string>
#include<stdlib.h>
using namespace std;
struct Group{
    string Name;
    struct Group *next;
};
struct Group *gr[5];
void insert(int n, string s)
{
    while(gr[n]!=NULL)
        gr[n]=gr[n]->next;
    struct Group *p = (struct Group *)malloc(sizeof(struct Group));
    p->Name=s;
    p->next=NULL;
    gr[n]=p;

//    if(g[n]==NULL)
//    {
//        struct Group *p = (struct Group *)malloc(sizeof(struct Group));
//        p->Name=s;
//        p->next=NULL;
//        g=p;
//        return;
//    }
//    insert(g->next,s);
    return;
}
int main()
{
    for(int i=1;i<5;++i)
    {
        //gr[i] = (struct Group *)malloc(sizeof(struct Group));
        gr[i]=NULL;
    }
    insert(1,"Evans");
    insert(1,"Harris");
    insert(1,"Lewis");
    insert(1,"Shaw");
    insert(2,"Conrad");
    insert(2,"Felt");
    insert(2,"Glass");
    insert(2,"Hill");
    insert(2,"King");
    insert(2,"Penn");
    insert(2,"Silver");
    insert(2,"Troy");
    insert(2,"Wagner");
    insert(3,"Davis");
    insert(3,"Segal");
    insert(4,"Baker");
    insert(4,"Cooper");
    insert(4,"Ford");
    insert(4,"Gray");
    insert(4,"Jones");
    insert(4,"Reed");

    return 0;
}
