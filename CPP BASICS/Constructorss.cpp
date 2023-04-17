#include<iostream>
using namespace std;
class construction {
    public:
    string labour;
    string havewife;
    int num;
   construction(string x,string y,int z);
};

construction::construction(string x,string y,int z){

    labour = x;
    havewife = y;
    num = z;
cout<<"All the best guys"<<"\n";
 
};
int main()
{   //for first batch
    /*construction first;
    first.labours=101;
    first.name="vinay";*/

    //for second batch
construction first("vinay","no",12);
construction second("vipul","yesss",007);
    

    cout<<first.labour<<"  "<<first.havewife<<" "<<first.num<<" "<<"\n";
    cout<<second.labour<<"  "<<second.havewife<<" "<<second.num<<" "<<"\n";
   
    
return 0;
}