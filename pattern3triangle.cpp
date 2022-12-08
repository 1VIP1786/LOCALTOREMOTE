// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int i=1,n;
cout<<"Enter the triangle pattern you want to build"<<"\n";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i-j+1<<" ";
        j=j+1;
  }
  cout<<endl;
  i=i+1;
}
return 0;
}

/*1
23
345
4567*/