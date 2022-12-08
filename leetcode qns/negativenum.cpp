// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>


using namespace std;

int main(){
int n ;
cout<<"enter neagtive num";
cin>>n;
//if number is negative
if(n<0){
n=n*(-1);
int ans=0;
int i=0;
while(n!=0){

    int bit=n&1;
    ans=bit * pow(10,i)+ans;
    n=n>>1;
    i++;
}
int newans=~ans;
newans+=1;
cout<<"Ans is" << newans<<endl;
return 0;
}
}