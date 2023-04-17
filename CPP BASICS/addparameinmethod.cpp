#include<iostream>
using namespace std;

class Bike {
    public:
    int num;
    string name;
    void model(int speed);  //method declaration
};

void Bike::model(int speed)
{
    cout<<"YOur bike speed is"<<speed+2000<<"\n";
};

int main()
{
 int speed ;
 Bike one;
 cout<<"Enter Bike max speed"<<"\n";
 cin>>speed;
 one.num=1786;
 one.name="Harley davidson";
 cout<<one.num<<"  "<<one.name<<"  "<<"\n";
 one.model(speed);
 return 0;

}