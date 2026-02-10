#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int isPalindrome = 1; // Flag to track palindrome status

    for (int i = 0, j = 4; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            isPalindrome = 0; // Set flag to 0 if mismatch found
            break;
        }
    }

    if (isPalindrome)
        printf("is palindrome\n");
    else
        printf("not palindrome\n");

    return 0;
}
