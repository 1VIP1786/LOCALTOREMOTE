#include <iostream>
#include <string>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int rollno ;        // Attribute (int variable)
    string name;
    void slogan()
    {
        cout<<"bharat mata ki jai"<<"\n";
    }; // Attribute (string variable)
};

int main() {
  MyClass studentone; // Create an object of MyClass

  // Access attributes and set values
  studentone.rollno = 15;
  studentone.name = "vipul";

  MyClass studenttwo;
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
