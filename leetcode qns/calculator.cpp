// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int a ,b ;
char op ;
cout<<"Enter number a "<<endl;
cin>>a;
cout<<"Enter number b "<<endl;
cin>>b;
cout<<"Enter operation you want to perform"<<endl;
cin>>op;

switch(op){
    case '+' : cout<<"Your answer is "<<(a+b)<<endl ;
    break;
    case '-' : cout<<"Your answer is "<<(a-b)<<endl;
    break;
    case '/' : cout<<"Your answer is "<<(a/b)<<endl;
    break;
    case '*' : cout<<"Your answer is "<<(a*b)<<endl;
    break;
    default:cout<<"Please enter the valid operation";
}
return 0;
}
