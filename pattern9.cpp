// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int i=1,n;
char A='A'+ i-1 ;
cout<<"Enter the pattern you want to print"<<"\n";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<< A;
        j=j+1;
    }
    cout<<endl;
    A=A+1;
    i=i+1;
}
return 0;
}