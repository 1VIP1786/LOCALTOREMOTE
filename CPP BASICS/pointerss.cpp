#include<iostream>
using namespace std;
int main()
{
    string food="pizza";
    string* ptr= &food;

    cout<<food<<"\n";
    cout<<&food<<"\n";
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";

    *ptr="hamburger";
    cout<<food<<"\n";
    cout<<ptr<<"\n";
    cout<<&food;
    cout<<&ptr<<"\n";

 return 0;
}