// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int add(int arr[],int size){
//logic of adding and printing values 
int count=0;
for(int i=0;i<size;i++){

count=count+arr[i];

}
return count ;

}

int main(){
int arr[100];
int size;
cout<<"Enter the size of array"<<endl;
cin>>size;
//take input 
cout<<"Enter values";
for (int i=0;i<size;i++){
    cin>>arr[i];
}

cout<<"Addition of array value"<<add(arr,size)<<endl;


return 0;
}
