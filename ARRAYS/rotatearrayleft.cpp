//rotation of array
// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;
void rotatedarray(int arr[],int d,int n){
int temp[n];
int k=0;

for(int i=d;i<n;i++){
    temp[k]=arr[i];
    k++ ;
}
for(int i=0;i<d;i++){
    temp[k]=arr[i];
    k++;
}
for(int i=0;i<n;i++){
    arr[i]=temp[i];
    }
}
void printarray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}


int main(){
int arr[]={1,2,3,4,5,6,7,8};
int d=2;
int n =sizeof(arr)/sizeof(arr[0]);
printarray(arr,n);
cout<<"Your rotate array is"<<endl;
rotatedarray(arr,d,n);
printarray(arr,n);
return 0;
}
