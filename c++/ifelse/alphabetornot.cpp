#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the charactor is :";
    cin >> ch;
    // a to z -> 97 to 122
    // A to Z -> 65 to 90
    int ascii = (int)ch;
    if ((ascii >= 97 && ascii <= 122) ||( ascii >= 65 && ascii <= 90))
    {
        // cout << "the charcter is lowercase alphabet ";
        cout << "the charcter is  alphabet ";
    }
    // if (ascii >= 65 && ascii <= 90)
    // {
    //     cout << "the character is uppercase alphabet";
    // }
    else
    {
        cout << "the character is not alphabet";
    }
}