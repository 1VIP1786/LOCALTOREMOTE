// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int n,i=1;
cout<<"Enter the pattern you will build";
cin>>n;

while(i<=n){
    int col=n;
    while(i<=col){
        col=col-1;

    }
cout<<i;
i=i+1;
}
return 0;
}

// Python Program

// n = int(input('Enter number of rows : '))
 
// i = 1
// while i <= n :
//     j = n
//     while j >= i:
//         print("*", end = " ")
//         j -= 1
//     print()
//     i += 1