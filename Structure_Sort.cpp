#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;

struct Student
{
    string Name;
    int mark;
};

bool compareToMark(Student a, Student b)
{
        return a.mark>b.mark;
}

int main()
{
    string names[]={"Akash    ", "Ranit    ", "Awal     ", "Abdullah ", "Shamim   ", "Ehsan    ", "Mmrs    "};
    int marks[] ={98,97,96,54,87,91,100};
    Student students[8];
    for(int i=0;i<7;++i)
    {
        students[i].Name=names[i];
        students[i].mark=marks[i];
    }

    sort(students,students+7,compareToMark);

    for(int i=0;i<7;++i)
    {
        cout<<students[i].Name<<students[i].mark<<"\n\n";
    }
    return 0;
}
