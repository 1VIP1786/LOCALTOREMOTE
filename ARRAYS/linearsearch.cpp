// -------------------JAI SHREE KRISHNA-------------------
//check wheather 1 is present or not 
#include<bits/stdc++.h>

using namespace std;

int linearsearch(int arr[],int size,int key)
{
//logic for linear search
for(int i=0;i<size;i++){
if(arr[i]==key){
return 1 ;
}
}
return 0 ;
}


int main(){
int arr[100];
int size,key ;
cout<<"Enter size"<<endl;
cin>>size;
//take input values
cout<<"Enter the values";
for(int i=0;i<=size;i++){
    cin>>arr[i];    
}
cout<<"Enter key you wanna find";
cin>>key;

bool x=linearsearch(arr,size,key);
if(x==1){
    cout<<"yes it is present"<<endl;
}
else{
cout<<"no It is not";   
}


return 0;
}