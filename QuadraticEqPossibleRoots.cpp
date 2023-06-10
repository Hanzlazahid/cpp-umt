#include <iostream>
#include <cmath>

using namespace std;

void greaterThanZero(float disc, float a, float b) {
    float x1, x2;
    x1 = (-b + sqrt(disc)) / (2 * a);
    x2 = (-b - sqrt(disc)) / (2 * a);
    cout << "Roots are real and different." << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
}

void equalToZero(float b, float a) {
    float x1;
    cout << "Roots are real and same." << endl;
    x1 = -b / (2 * a);
    cout << "x1 = x2 = " << x1 << endl;
}

void smallerThanZero(float b, float a, float disc) {
    float real, imaginary;
    real = -b / (2 * a);
    imaginary = sqrt(-disc) / (2 * a);
    cout << "Roots are complex and different." << endl;
    cout << "x1 = " << real << "+" << imaginary << "i" << endl;
    cout << "x2 = " << real << "-" << imaginary << "i" << endl;
}

int main() {
    float a, b, c, disc;
    cout << "Enter coefficient a = ";
    cin >> a;
    cout << "Enter coefficient b = ";
    cin >> b;
    cout << "Enter coefficient c = ";
    cin >> c;
    disc = (b * b) - (4 * a * c);

    if (disc > 0) {
        greaterThanZero(disc, a, b);
    } else if (disc == 0) {
        equalToZero(b, a);
    } else {
        smallerThanZero(b, a, disc);
    }

    return 0;
}

