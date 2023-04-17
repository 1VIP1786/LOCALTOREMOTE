//rotation of array
// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;
void rightrotatearray(int arr[],int k,int n)
{
k=k%n;
for(int i=0;i<n;i++){
if(i<k)
{
    cout<<arr[n+i-k]<<" ";
}


else{
        cout<<(arr[i-k])<<" ";
    }
}
}



int main(){
int arr[]={1,2,3,4,5,6,7,8};
int k=5;
int n =sizeof(arr)/sizeof(arr[0]);
cout<<"Your rotate array is"<<endl;
rightrotatearray(arr,k,n);

return 0;
}
