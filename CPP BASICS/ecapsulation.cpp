#include<iostream>
using namespace std;

class employee{
 
 private :
  int salary ;

 public :
 
 void getsalary(int s){
    salary=s;

 }
  
  int setsalary(){
    return salary;
  }

};

int main()
{ int sal ;
  employee first;
cout<<"enter your salaary"<<"\n";
cin>>sal;
first.getsalary(sal);
cout<<first.setsalary()<<"\n";


 return 0;
}