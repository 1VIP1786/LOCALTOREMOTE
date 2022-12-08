#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    //Variable declaration
    string fnInput;
    string lnInput;
    int ageInput;
    string majorInput;
    float GPAInput;

    //student students[4];

    cout << "Enter the first name:  " ;
    cin >> fnInput ;
    cout << "Enter the last name:   " ;
    cin >> lnInput ;
    cout << "Enter the age:   ";
    cin >> ageInput ;
    cout << "Enter the major:   " ;
    cin >> majorInput;
    cout << "Enter the GPA:    ";
    cin >> GPAInput ;

    cout << fnInput << lnInput << ageInput << majorInput << GPAInput ;

    /*students[0].firstName = fnInput;*/
}