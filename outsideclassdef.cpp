#include <iostream>
#include <string>
using namespace std;

class myclass {       // The class
  public:             // Access specifier
    int rollno ;        // Attribute (int variable)
    string name;
    void slogan();
    
};
//out side class declaration
void myclass::slogan(){
    {
        cout<<"bharat mata ki jai"<<"\n";
    }; // Attribute (string variable)
}

int main() {
  myclass studentone; // Create an object of MyClass

  // Access attributes and set values
  studentone.rollno = 15;
  studentone.name = "vipul";

  myclass studenttwo;
  studenttwo.name = "pranay";
  studenttwo.rollno = 20;

  // Print values
  cout << studentone.rollno << "\n"; 
  cout << studentone.name<<"\n"; 
  studentone.slogan();
  cout << studenttwo.rollno << "\n"; 
  cout << studenttwo.name<<"\n"; 
  studentone.slogan(); 
  return 0;
}
