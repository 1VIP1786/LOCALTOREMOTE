// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int n,i=1;
cout<<" enter the pattern you want"<<"\n";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<n-j+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

return 0;
}
/*formula for priting 
  321=n-j+1
  123 normal printing give j in output 
  111}
  222} for  this give i in output
  333}
  */