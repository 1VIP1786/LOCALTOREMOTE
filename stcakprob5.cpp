#include<iostream>
using namespace std;   //Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.
int main()
{

 struct distance{
   int  distance1;
   int  distance2; 
} user[4];

for(int i=0;i<4;i++)
{
cout<<"Calculation"<<" "<<i+1<<"\n";    
cout<<"Enter distance 1"<<" "<<"\n";
cin>>user[i].distance1;
cout<<"Enter distance 2 "<<" "<<"\n";
cin>>user[i].distance2;

cout<<"Your Total distance is"<<"  " <<user[i].distance1+user[i].distance2<<"\n";
}
return 0;
}
