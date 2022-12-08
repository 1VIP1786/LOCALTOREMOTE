#include<iostream>
#include<string>
using namespace std;

void myfunction(string cont1, string cont2)
{

cout<<" The Next match will be between "<< cont1 <<" and " << cont2 <<"\n";

};

int main()
{

 string x1 ,x2 ;   

 cout <<"Enter x1 and x2"<<"\n";
 cin>>x1>>x2;   
 
myfunction(x1,x2);


 return 0;
}




