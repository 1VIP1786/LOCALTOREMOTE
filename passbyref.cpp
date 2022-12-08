#include<iostream>
using namespace std;

void swapnums(int x  ,int y ){
    int z = x;
    x=y;
    y=z; 
}

int main()
{
    int firstnum ,secondnum ;
    cout<<"enter first num and second num"<<"\n";
    cin>>firstnum>>secondnum;
    cout<<"before swap"<<"\n";
    cout<<firstnum<<"\n";
    cout<<secondnum<<"\n";
    swapnums(firstnum,secondnum);
    cout<<"After swap"<<"\n";
    cout<<firstnum<<"\n";
    cout<<secondnum<<"\n";
 return 0;
}
