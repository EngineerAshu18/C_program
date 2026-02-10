#include <iostream>
using namespace std;
int main()
{
    int a = 13;    // a means dividend
    int b = 3;     // b is divisor
    int q = a / b; // q is quotient
    int r;         // r is reminder
    // a=(b*q)+r
    r = a - (b * q);
    cout << r;
}