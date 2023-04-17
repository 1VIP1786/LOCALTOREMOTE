#include<iostream>
using namespace std;
void myfunction(string vipul[5]);
int main()
{
 string vipul[5]={"vinod","milan","pranay","mathura","ramesh"};
 myfunction(vipul);
 return 0;
}
void myfunction(string vipul[5]){
    for(int i=0;i<5;i++){
        cout<<vipul[i]<<"\n";
    }
}