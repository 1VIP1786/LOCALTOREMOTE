// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {
    int n, i = 1;
    cout << "EntER THE PATTERN OF N" << "\n";
    cin >> n;
    while (i <= n) {
        int space = n - i;
        while (space) {
            cout << " ";
            space = space - 1;
        }
        int col = 1;
        while (col <= i) {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0 ;    
}
