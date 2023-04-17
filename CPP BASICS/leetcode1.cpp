// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int num,prod=1,sum=0;
cout<<"Enter Integer of given question"<<"\n";
cin>>num;
while(num!0){
    int digit=num%10;
    prod=prod*digit;
    sum=sum+digit; 

}
return 0;
}