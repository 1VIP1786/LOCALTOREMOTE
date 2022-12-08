// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int n,i=1;
cout<<"eNTER THE PATTERN YOU WANT TO BUILD"<<"\n";
cin>>n;
while(i<=n){
    int space=i-1,j=1,star=n-i+1;
    while(space<n){
        cout<<" ";
        space=space+1;
        }
    
    while(j<=i){
        cout<<"*";
        j=j+1;

    }
    
    cout<<endl;
    i=i+1;
}

return 0;
}
 