#include<iostream>
using namespace std;

int swapnumm(int &num1,int &num2)
{
  int x=num1;
  num1=num2;
  num2=x;
return 0 ;

}

int main()

{
    int firstnum,secondnum;
    cout << "EnTER FIRST NUM "<<"\n";
    cin>>firstnum;
    cout << "EnTER second NUM "<<"\n";
    cin>>secondnum;

    cout<<"Before Swap Firstnum is"<<firstnum<<"\n";
        cout<<"Before Swap secondnum is"<<secondnum<<"\n";

    swapnumm(firstnum,secondnum);
    cout<<"After Swap Firstnum is"<<firstnum<<"\n";
        cout<<"After Swap secondnum is"<<secondnum<<"\n";

return 0;
}