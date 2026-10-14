#include <iostream>
#include <stdexcept>
#include <string>
#include <cmath>
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

int pw(int a, int b)
{
    return pow(a, b);
}

long long factorial(int n)
{
    if (n < 0) {
        throw invalid_argument("Factorial is not defined for negative numbers.");
    }

    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;

}
int sizeOfString(string n)
{
    int a=0;
    for(int i{0}; n[i]!='\0'; i++){
        a++;
    }

    return a;
}
auto convertisseurStringtoInt(string n)
{
    int a=0;
    int N=sizeOfString(n);
    for(int i{0}; i<N; i++){
        a+=((int)n[i]-48)*pow(10,(N-1)-i);//le (int) convertit le char en int en renvoyant le code ascii du char, on soustrait 48 pour avoir la valeur du chiffre
    }

    return a;
}

