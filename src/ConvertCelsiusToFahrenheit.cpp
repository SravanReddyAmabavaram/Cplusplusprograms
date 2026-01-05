#include <iostream>
using namespace std;

int main() {
    double Celsius;
    double Fahrenheit;

    cout << "what is the temp is celsius: ";
    cin >> Celsius;

    Fahrenheit = Celsius * (9.0/5.0) + 32;
    
    cout << Celsius << " converted to fahrenheit is: " << Fahrenheit << endl;
    
    return 0;
}