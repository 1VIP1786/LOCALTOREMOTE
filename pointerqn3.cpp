#include<iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number\n";
    cin >> x;
    cout << *(&x) << "\n";
    return 0;
}