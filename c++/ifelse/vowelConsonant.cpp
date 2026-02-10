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
    if ((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << "the charcter is a vowel ";
        }
        else
        {
            cout << "the character is a consonant";
        }
    }

    else
    {
        cout << "The character is not an alphabet";
    }
}