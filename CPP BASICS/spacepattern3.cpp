// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int n,i=1;
cout<<"eNTER THE PATTERN YOU WANT TO BUILD"<<"\n";
cin>>n;
while(i<=n){
    int star=n-i+1,j=1,print=1;
    while(star){
        cout<<print;
        print=print+1;
        star=star-1;
        }
    
    while(j<=i){
        cout<<" ";
        j=j+1;

    }
    
    cout<<endl;
    i=i+1;
}

return 0;
}
 