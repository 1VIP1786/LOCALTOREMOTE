#include<iostream>
using namespace std;
int myfunction(int x1,int x2)
{

   //cout<<"The addition is "<<"\n ";
   return x1+x2 ;

}


int main()
{

 int x,y ;
 cout<<"Enter the value of x1 and x2"<<"\n";
 cin>>x>>y; 
 cout<<myfunction(x,y);   
 return 0;

}