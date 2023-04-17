// -------------------ॐ नमः शिवाय-------------------

#include<iostream>
#include<string>


using namespace std;

class grandparents{
    public:
void slogan(){
    cout<<"bharat mata ki jai";
};
};
class parents : public grandparents {
    public:
void theirslogan() {
    cout<<"hindustan jindabad";

};
};

class children : public parents{
 public:
 void myslogan() {
    cout<<"pakistan murdabad";
 };
};

 

int main(){

children myobject ;
myobject.myslogan();
myobject.theirslogan();
myobject.slogan();
return 0;
}