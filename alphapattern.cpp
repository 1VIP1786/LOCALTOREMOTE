// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int i=1,n;
cout<<"Enter the pattern you want to print"<<"\n";
cin>>n;
while(i<=n){
    int j=1;
    char value='A';
    while(j<=n){
        cout<< value;
        value=value+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
return 0;
}

