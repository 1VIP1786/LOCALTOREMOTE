// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;\

int  fibonacci (int n){
    if(n<=1)
        return n ;
    return fibonacci(n-1)+fibonacci(n-2);

    }

int main(){
    int n;
cout<<"Enter the number"<<endl;
cin>>n;
cout<<fibonacci(n);
return 0;
}

// 0 1 1 2 3 5 8      series
// 0 1 2 3 4 5 6 7    index
// using recursion

            4

       3         2

    2   1      1   0

      