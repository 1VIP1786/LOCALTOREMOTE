
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int decimaltobinary(int n){
    int ans = 0;
    int i = 0;
    while(n!=0){
    int bit=n&1;
    ans=(bit * pow(10,i)) + ans;
    n = n >> 1;
    i++;
    }

    return ans ;
}
int main(){
int n;
cout<<"Enter the negative num";
cin>>n;

if ( n < 0) {
 n = n * (-1) ;
 int ans = decimaltobinary(n);
 int newans = (~ans);
 newans+=1;
 cout<<"your negative num in binary is"<<newans<<endl ;  
}
 else{
  int ans=decimaltobinary(n);
  cout<<ans<<endl;
}
return 0;
}
