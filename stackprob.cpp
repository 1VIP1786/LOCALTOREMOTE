#include<iostream>
#include<string>
using namespace std;
int main()
{
  struct student{
   int rollno ;
   string name ;
   int age ;
}stud[5];

for(int i=0;i<5;i++)
{  
   cout<<"student"<<i+1<<"\n";
   cout<<stud[i].rollno<<i+1<<"\n"; 
   //cout<<"Enter Rollno"<<"\n";
   //cin>>stud.rollno;
   cout<<"Enter name"<<"\n";
   cin>>stud[i].name;
   cout<<"Enter age"<<"\n";
   cin>>stud[i].age;

};

for(int i=0;i<5;i++)
{
if(stud[i].rollno==2)
{
     cout<<"student"<<stud[i].rollno<<i+1<<"\n"; 
     cin>>stud[i].name;
     cin>>stud[i].age;
} ;
}  ;
 


 return 0;
}
