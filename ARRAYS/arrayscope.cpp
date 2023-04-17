// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;
void update(int chill[],int n ){
    cout<<"Inside the array"<<endl;
    chill[0]=120;
    for(int i =0;i<3;i++){
        cout<<chill[i]<<" ";

    }
    cout<<endl;
    cout<<"GOING BACK TO ARRAY";
}



int main(){
int chill[3]={1,2,3};

update(chill,5);

for(int i=0;i<3;i++){
    cout<<chill[i]<<" ";
}

return 0;
}