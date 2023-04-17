// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int countsetbits(int x){
  int count=0,rem=0;
  while(x!=0){
    rem=x%10;
if(rem==1){
    count++;
}
x=x/10;
}
return count;
}
int countsetbits1(int x){
    int count1 = 0;
while(x!=0)
if((x & (x-1)) != 0){
    count1++;
    x = x & (x-1);
}
return count1;
}
int main(){
    int a,b;
cout<<"Enter number"<<endl;
cin>>a;
// cout<<"Enter number b"<<endl;
// cin>>b;

int firstdigit=countsetbits1(a);
int seconddigit=countsetbits1(b);
int total=firstdigit + seconddigit;
cout<<firstdigit;

return 0;
}


