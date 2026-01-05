#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num;
    double root;

    cout << "enter an number to find its square root: ";
    cin >> num;

    root = sqrt(num);

    cout << "the square root of the number " << num << " is: " << root << endl;

    return 0;
}