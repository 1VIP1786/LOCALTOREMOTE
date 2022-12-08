#include<iostream>
using namespace std;

void myfunction(string vipul[5])
{
    
    for(int i=0;i<5;i++)
    {
        cout<<vipul[i]<<"\n";
    }
}
int main()
{

 string vipul[5]={"vipul","pranay","ruchi","priyal","tanu"};   
 myfunction(vipul);
 return 0;
}