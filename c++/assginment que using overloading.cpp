#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    int int1 = 5, int2 = 3;
    double double1 = 5.0, double2 = 3.0;

    cout << "int1 + int2 = " << add(int1, int2) << endl;
    cout << "double1 + double2 = " << add(double1, double2) << endl;

    cout << "int1 - int2 = " << subtract(int1, int2) << endl;
    cout << "double1 - double2 = " << subtract(double1, double2) << endl;

    cout << "int1 * int2 = " << multiply(int1, int2) << endl;
    cout << "double1 * double2 = " << multiply(double1, double2) << endl;

    cout << "int1 / int2 = " << divide(int1, int2) << endl;
    cout << "double1 / double2 = " << divide(double1, double2) << endl;

   
}
