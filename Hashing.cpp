#include<stdio.h>
#include<string.h>

int hashFunction(int n)
{
    return n%100;
}

struct Person
{
    char name[10],gender[10];
    int age;
};
Person record[100];

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int ITEM,age,n;
    char name[10],sex[10];
    while(scanf("%d",&ITEM)==1)
    {
        for(int i=0;i<ITEM;++i)
        {
            scanf("%d %s %d %s",&n,&name,&age,&sex);
            n=hashFunction(n);
            record[n].age=age;
            strcpy(record[n].name,name);
            strcpy(record[n].gender,sex);
        }
        printf("\n\n");
        while(scanf("%d",&n)==1)
        {
            int p=hashFunction(n);
            printf("%d %s %d %s\n",n,record[p].name,record[p].age,record[p].gender);
        }
        printf("\n\n");
    }
    return 0;
}
/*
Input:
10
01537087556 John 34 Male
01537087557 Jony 30 Male
01537087500 Alia 32 Female
01829453202 Rose 28 Male
01538978551 Rian 20 Female
01537087536 John 34 Male
01537087567 Jose 30 Male
01537087510 Alia 32 Female
01829453212 Roby 28 Female
01538978541 Ria  20 Female

01537087536
01537087567
01537087510
01829453212
01538978541
01537087556
01537087557
01537087500
01829453202
01538978551

Output:
1537087536 John 34 Male
1537087567 Jose 30 Male
1537087510 Alia 32 Female
1829453212 Roby 28 Female
1538978541 Ria 20 Female
1537087556 John 34 Male
1537087557 Jony 30 Male
1537087500 Alia 32 Female
1829453202 Rose 28 Male
1538978551 Rian 20 Female
*/
