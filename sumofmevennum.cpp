// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int i=2,mod,n;
cout<<"Enter the value of n"<<"\n";
cin>>n;
while(i<n){
 if(n%i==0){
    cout<<"It is not prime "<<i<<"\n";
 }
 else{
    cout<<"it is prime"<<i<<"\n";
 }
 i=i+1;
}

return 0;
}
