// 231. Power of Two

// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int n ;
cout<<"enter n  ";
cin >> n ; 
for(int i=0;i<=30;i++){
    int ans = pow(2,i);

if (ans == n){
    cout<<"true";
}
else{
    cout<<"false";
}
return 0;
}
}