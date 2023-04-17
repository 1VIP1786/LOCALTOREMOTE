// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int getmax(int num[],int size){

int maxi=INT_MIN;
for(int i=0;i<size;i++){
    maxi=max(maxi,num[i]);

    // if(num[i]>max){
    // max=num[i];
    }
//}

return maxi;
}

int getmin(int num[],int size){

int mini=INT_MAX;
    for(int i=0;i<size;i++){
    mini=min(mini,num[i]);
        // if(num[i]<min){
    // min=num[i];
    //}
}
return mini;
}


int main(){
int size;
cout<<"Enter size";
cin>>size;
int num[100];
for(int i=0; i<size;i++){
    cin>>num[i];
}
cout<<"Max number"<<getmax(num,size)<<endl;
cout<<"Min Number"<<getmin(num,size)<<endl;
return 0;
}

//maxi=max(maxi,num[i]);