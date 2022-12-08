//Write a program to store and print the roll no., name , age and marks of a student using structures.

#include<iostream>
#include<string>
using namespace std;

int main() 
{
    struct info 
    {
        int rollno;
        string name;
        int age;
    } student[9];


    for(int i=0; i<10; i++) {
        //info student[i];
        cout<<"Enter the rollno"<<"\n";
        cin>>student[i].rollno;
        cout<<"enter the name"<<"\n";
        cin>>student[i].name;
        cout<<"Enter the age"<<"\n";
        cin>>student[i].age;


        //info student2;
        //student2.rollno = 23 ;
        //student2.name = "pranay" ;
        //student2.age= 30 ;//


        cout<< student[i].rollno <<"  "<< student[i].name<<"  "<<student[i].age<<"\n";
        //cout<< student2.rollno <<"  "<< student2.name<<"  "<<student2.age<<"\n";


    }



    return 0;
}