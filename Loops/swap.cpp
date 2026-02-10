// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10, b = 20;

//     cout << "Before swapping: a = " << a << ", b = " << b << endl;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << "After swapping: a = " << a << ", b = " << b << endl;
//     return 0;
// }


#include <iostream>
#include <unordered_map>
using namespace std;

void countOddFrequency(int arr[], int size) {
    unordered_map<int, int> freq;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {  // Check if number is odd
            freq[arr[i]]++;
        }
    }

    // Printing frequency of odd numbers
    cout << "Odd Number Frequencies:" << endl;
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 5, 3, 7, 5, 5, 9, 2, 1, 7, 9, 3, 3, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    countOddFrequency(arr, size);

    return 0;
}
