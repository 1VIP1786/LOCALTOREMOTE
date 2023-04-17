// -------------------JAI SHREE KRISHNA-------------------

// even -0
// odd -1
#include<bits/stdc++.h>

using namespace std;

bool iseven(int a){

    if (a&1){
        return 0 ;
    }
return 1 ;

}

int main(){
int num;
cout<<"Enter number";
cin>>num;
if(iseven(num)){
    cout<<"Your number is even ";
}
else {
    cout<<"Your number is odd";
}

return 0;
}
