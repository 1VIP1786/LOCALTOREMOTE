#include<iostream>
#include<string>
using namespace std;
int main()
{
 
 struct car{
    string brand ;
    string model ;
    int year ;
}mycar1,mycar2;

mycar1.brand="BMW";
mycar1.model="s series";
mycar1.year=2022;

mycar2.brand="audi";
mycar2.model="z series";
mycar2.year=2022;

cout<<mycar1.brand<<" "<<mycar1.model<<"  "<<mycar1.year<<"\n";
cout<<mycar2.brand<<" "<<mycar2.model<<"  "<<mycar2.year<<"\n";


 return 0;
}