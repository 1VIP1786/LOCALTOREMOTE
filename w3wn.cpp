#include<iostream>
#include<string>
using namespace std ;

void myfunction(string country="norway"){
cout<<country<<"\n";
}

int main()
{

myfunction("INDIA");
myfunction("aus");
myfunction("dubai");
myfunction("england");
myfunction();
myfunction("INDIA");
return 0 ;

}





