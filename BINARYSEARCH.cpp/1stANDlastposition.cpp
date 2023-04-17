// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int firstoccurence(int arr[],int size,int key){
    int start=0,end=size-1,ans=-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start+(end-start)/2;

    }
    return ans ;
}
int lastoccurence(int arr[],int size,int key){
    int start=0,end=size-1,ans=-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start+(end-start)/2;

    }
    return ans ;
}
int main(){
int arr[8]={0,0,1,1,1,1,2,2};
int result1 = firstoccurence(arr,8,2);
int result2 = lastoccurence(arr,8,2);
cout<<"first occurence is "<<result1<<endl;
cout<<"last occurence is "<<result2<<endl;

return 0;
}