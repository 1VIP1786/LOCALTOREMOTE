#include<iostream>
#include<string>
using namespace std;

struct car {
string name ;
string model ;
int year ;
}

int main()
{
  car mycar1;
  mycar1.name = "yamaha";
  mycar1.model="rx100";
  mycar1.year=2002;

  car   mycar2;
  mycar2.name = "bulllet";
  mycar2.model="electra";
  mycar2.year=2022;

  cout<<mycar1.name<<"  "<<mycar1.model<<"   "<<mycar1.year<<"\n";
  cout<<mycar2.name<<"  "<<mycar2.model<<"   "<<mycar2.year<<"\n";


return 0;
}