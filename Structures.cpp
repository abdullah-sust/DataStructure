#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Father
{
    string Name;
    int Age;
};

struct Mother
{
    string Name;
    int Age;
};
struct Student
{
    string Name;
    Father father;
    Mother mother;
    int Age;
};

Student insert(string n1, int a1, string n2, int a2, string n3, int a3)
{
    Student s;
    s.Name=n1;
    s.father.Name=n2;
    s.mother.Name=n3;
    s.Age=a1;
    s.father.Age=a2;
    s.mother.Age=a3;
    return s;
}

void print(Student s)
{
    cout<<"Student name: "<<s.Name<<"\n\n";
    cout<<"Father  name: "<<s.father.Name<<"\n\n";
    cout<<"Mother  name: "<<s.mother.Name<<"\n\n";
//    printf("Student name: %s\n\n",s.Name);
//    printf("Father  name: %s\n\n",s.father.Name);
//    printf("Mother  name: %s\n\n",s.mother.Name);
    return;
}
int main()
{
    Student Rahim;
    Rahim = insert("Rahim",20,"Mr. John",45,"Mrs. Alex",40);
    print(Rahim);
    return 0;
}
