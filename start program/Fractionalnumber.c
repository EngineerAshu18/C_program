#include <stdio.h>
int main()
{
    float x;
    printf("Enter the decimal number is :");
    scanf("%f", &x);
    int y = x;
    printf(" your integer number is :%d", y);
    float z = x - y;
    printf("\nYour fractional number is :%f", z);

    return 0;
}