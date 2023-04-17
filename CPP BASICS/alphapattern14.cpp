// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int i=1,n;
cout<<"Enter the pattern you want to print"<<"\n";
cin>>n;
while(i<=n){
    int j=1;
    int space=1;
    while(j<=i){
        cout<<"*";
        space=space+1;
        j=j+1;
    int star=i;
    while(star<=n){
        cout<<star;
        star=star+1;

    }
    cout<<endl;
    i=i+1;
    
}
return 0;
}
}
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<i; j++){
//             cout<<"  ";
//         }
//         for(int k = i+1; k<n; k++){
//             cout<<"& ";
//         }
//         cout<<endl;
//     }
// return 0;
// }
