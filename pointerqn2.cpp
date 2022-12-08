#include<iostream>
#include<string>
using namespace std;
int main()
{
  string vipul ;
  string* ptr=&vipul;

  cout <<"Enter the value to print pointer to the variable ";
  cin>>vipul;

  cout<<"The printed value of address of variable "<<" "<<ptr<<"\n";
  cout<<"The printed value of address of pointer "<<" "<<&ptr<<"\n";  
 return 0;
}