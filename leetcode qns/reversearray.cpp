// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

void reversearray(int arr[],int start,int end){
    while(start < end){
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++ ;
        end-- ;
    }
}
void printarray(int arr[],int n ){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<"  ";
    }
}

int main(){
int arr[]={1,2,3,4,5,6,7};
int n=sizeof(arr)/sizeof(arr[0]);
printarray(arr,n);
cout<<endl;
reversearray(arr,0,n-1);
cout<<"Reversed array is "<<endl;
printarray(arr,n);
return 0;
}