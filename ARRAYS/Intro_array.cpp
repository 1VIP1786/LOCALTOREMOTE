#include<iostream>
using namespace std;

void printarray(int arr[],int size){

cout<<"printing the array "<<endl;
for(int i = 0; i<=size;i++){
 
 cout<<arr[i]<<" ";
 cout<<"printing done "<<endl;


}

}
int main() {
    int third[5]={1,2,3};
    
    int n=8;
    printarray(third,8);

    int vipul[6]={4,5,6};
    n=5;
    printarray(vipul,50);
 
}