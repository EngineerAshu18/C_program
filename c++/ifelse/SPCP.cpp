#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value of cost price:";
    int CP;
    cin >> CP;
    cout << "Enter the value of selling price:";
    int SP;
    cin >> SP;
    if (SP > CP)
    {
        cout << "profit=" << SP - CP;
    }
    else
    {
        cout << "loss=" << CP - SP;
    }
    if (CP == SP)
    {
        cout << "no profit no loss";
    }
}