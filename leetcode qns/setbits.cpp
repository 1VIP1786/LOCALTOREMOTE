// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int i = 0;
    while(n!=0){
        int bit = n&1; 
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
     int count=0,rem=0;
  while(ans!=0){
    rem=ans%10;
if(rem==1){
    count++;
}
ans=ans/10;
}
return count;
}

// int countsetbits(int x ){
//     //convert number to binary form

//   int count=0,rem=0;
//   while(ans!=0){
//     rem=ans%10;
// if(rem==1){
//     count++;
// }
// ans=ans/10;
// }
// return count;
// }

int main(){
    int a,b;
cout<<"Enter number"<<endl;
cin>>a;
cout<<"Enter number b"<<endl;
cin>>b;
int firstdigit=decimalToBinary(a);
int seconddigit=decimalToBinary(b);
int total=firstdigit + seconddigit;
cout<<total<<endl;


return 0;
}


