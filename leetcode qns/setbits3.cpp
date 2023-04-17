#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter number a"<<endl;
    cin>>a;
    cout<<"Enter number b"<<endl;
    cin>>b;
    int firstdigit= __builtin_popcount(a);
    int seconddigit= __builtin_popcount(b);
    int total=firstdigit + seconddigit;
    cout<<total<<endl;

    return 0;
}

//TO CALCULATE NO. OF SETBITS USING TWO numberS