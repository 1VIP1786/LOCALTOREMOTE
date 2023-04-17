#include<iostream>
using namespace std;
int main()
{  //int x;
   //int y;
   string letter[2][4]={
    {"vipul","vinod","milan","pranay"},
    {"mathura","ramesh","priyal","monu"}
   };
   for(int i=0;i<2;i++){
    for(int j=0;j<4;j++)
    {
        cout<<"ENter letter which you want to omit  ";
        cin>>i>>j;
        if(i>=2 || j>=4)
        {
            cout<<"wrong input the value of i is bw 0 and 1 and j must be bw 0 and 3";

        }
        else{
        cout<<letter[i][j]<<"\n";
        }


    }
   }
return 0;
}