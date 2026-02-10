#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 1st number is :";
    cin >> a;
    cout << "Enter 2nd number is :";
    cin >> b;
    cout << "Enter 3rd number is :";
    cin >> c;
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        cout << a << "," << b << "," << c << "can be the sides of a triangle";
    }
    else
    {
        cout << "Invalid Triangle";
    }
}