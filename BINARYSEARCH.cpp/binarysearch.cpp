// -------------------JAI SHREE KRISHNA-------------------
// BINARY SEARCH ALGORITHM
#include<bits/stdc++.h>

using namespace std;

int binarysearch(int arr[],int size,int key ){
    int start=0;
    int end=size-1;
    int mid=(start+(end-start)/2);
    while(start<=end){
        if(arr[mid]==key){
            return mid ;
        }
        if(arr[mid]<key){
            start=mid+1;
        }//MOVE TO THE RIGHT 
        else{
            end = mid-1;
        }//MOVE TO THE LEFT 
        mid=(start+(end-start)/2) ;
    }
    return -1 ;
}


int main(){
int even[6]={1,2,3,4,5,6};
int odd[5]={7,8,9,10,11};

int evenindex=binarysearch(even,6,5);
int oddindex=binarysearch(odd,5,16);
cout<<"YOur even index is "<<evenindex<<endl;
cout<<"YOur odd index is "<<oddindex;
return 0 ;
}
