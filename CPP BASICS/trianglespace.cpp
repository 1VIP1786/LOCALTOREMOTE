// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int n,row=1 ;
cout<<"ENter n";
cin>>n;
while(row<=n){

    //print space
    int space=n-row;
    while(space){
        cout<<" ";
        space=space-1;
    }

    //print 2nd triangle
     int j=1;
     while(j<=row){
        cout<<j;
        j=j+1;
     }
     //print 3rd triangle 
     int start=row-1;
     while(start){
        cout<<start;
        start=start-1;
     }
     cout<<endl;
     row=row+1;

}
return 0;
}