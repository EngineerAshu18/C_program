
// #include <stdio.h>

// int main() {
//     int n, sum = 0;

//     // Input the value of n
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     // Calculate the sum of all even numbers up to n
//     for (int i = 2; i <= n; i += 2) {
//         sum += i;
//     }

//     // Output the result
//     printf("The sum of all even numbers up to %d is: %d\n", n, sum);

//     return 0;
// }
#include <stdio.h>
int main()
{
    int n, f = 1, i;
    printf(" enter number is :");
    scanf("%d", &n);
    while (i != 0)
    {
        for (int i = 1; i <= n; i--)
        {
            f = f * i;
        }
        printf("%d your factorial number is :%d", n, f);
    }
    return 0;
}