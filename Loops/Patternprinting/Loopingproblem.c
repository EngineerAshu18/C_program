
#include <stdio.h>
int main()
{
    int n, sum = 0, i;
    printf("Enter a number is :");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = i + sum;
    }
    printf("%d", sum);
}