#include <iostream>
using namespace std;

int main() {
    double kilometers;
    double miles;

    cout << "please enter the amount of kilometers that you have traveled: ";
    cin >> kilometers;

    miles = kilometers * 0.621371;
    
    cout << kilometers << " converted to miles is: " << miles << endl;
    
    return 0;
}