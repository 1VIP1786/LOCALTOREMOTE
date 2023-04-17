// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
// int n,i=1;
// cout<<"eNTER THE PATTERN YOU WANT TO BUILD"<<"\n";
// cin>>n;
int n = 6,i=0,j=0;
while(i<n){
    while(j<i){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    int k=i+1;
    while(k<n){
        cout<<"&";
        k=k+1;
        }
    i=i+1;
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
 