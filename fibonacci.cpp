// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int n,a=0,b=1,nextnum ;
cout<<"ENter NUm"<<"\n";
cin>>n;
for(int i=1;i<=n;i++){
    nextnum=a+b;
    cout<<nextnum<<endl;

    a=b;
    b=nextnum;



}
return 0;
}