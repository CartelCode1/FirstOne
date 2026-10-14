#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

int sum(int a, int b) {
    return a + b;
}
int diff(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
double divi(double a, double b) {
    if (b == 0) {
            throw invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

