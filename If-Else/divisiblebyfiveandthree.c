#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number is ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 3 == 0) // or divisible by 15
    {
        printf("the number is divisible by 5 and 3 ");
    }
    else
    {
        printf("NOT divisible ");
    }
    return 0;
}
