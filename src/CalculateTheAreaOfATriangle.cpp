#include <iostream>
using namespace std;

int main() {

    int hight, base;
    double area;

    cout << "Enter the hight of the triangle: ";
    cin >> hight;
    cout << "Enter the base of the triangle: ";
    cin >> base;

    area = hight * base * 0.5;

    cout << "the area of the triangle is: " << area << endl;
    
}