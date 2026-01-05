#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a, b, c;
    double equPos, equNeg;
    double discriminant;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if(a == 0) {
        cout << "This isn't an quadratic equation." << endl;
        return 0;
    }

    discriminant = pow(b, 2) - 4 * a * c;

    if(discriminant < 0) {
        cout << "No real roots." << endl;
        return 0;
    }

    equPos = (-b + sqrt(discriminant)) / (2 * a);
    equNeg = (-b - sqrt(discriminant)) / (2 * a);

    cout << "Answers are: " << endl;
    cout << equPos << endl;
    cout << equNeg << endl;

    return 0;
}