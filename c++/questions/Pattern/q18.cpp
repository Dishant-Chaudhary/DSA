/*
print    *
        **
       ***
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    // Loop to iterate over each row
    for(int i = 0; i < n; i++) {
        // Loop to print spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Loop to print stars
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
