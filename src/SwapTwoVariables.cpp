#include <iostream>
#include <string>
using namespace std;

int main() {
    string var1;
    string var2;
    string temp;

    cout << "Enter your first variable: ";
    cin >> var1;
    cout << "Enter your second variable: ";
    cin >> var2;

    cout << "before swapping variables:" << endl;
    cout << "variable 1: " << var1 << endl;
    cout << "variable 2: " << var2 << endl;

    temp = var2;
    var2 = var1;
    var1 = temp;

    cout << "after swapping variables:" << endl;
    cout << "variable 1: " << var1 << endl;
    cout << "variable 2: " << var2 << endl;

    return 0;   
}