#include<iostream>
#include<string>

using namespace std;
class student{
        public:
        string name;
        int rollno;
        void slogan(){
            cout<<"bharat mata ki jay"<<" "<<"\n";
        }
    }
int main(){
    //STUDENT ONE
 student one;
 one.name="vipul";
 one.rollno=101;
 one.slogan(); 
 //STUDENT TWO
 student two;
 two.name="pranay";
 two.rollno=102;
 two.slogan(); 

 cout<<one.name<<"  "<<one.slogan()<<"  "<<one.rollno<<"  "<<"\n";
  cout<<two.name<<"  "<<two.slogan()<<"  "<<two.rollno<<"  "<<"\n";

    
 return 0;
 hello
}