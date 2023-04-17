// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;
int power(){
    int x,y;
    cout<<"Enter X and Y"<<endl;
    cin>>x>>y;
    int ans = 1;
    for(int i=0;i<y;i++){
    ans=ans*x;
}
return ans ;
}
int main(){
cout<<power();
}
