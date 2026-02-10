#include <stdio.h>
int main()
{
    float r;
    printf("Enter the value of r is :");
    scanf("%f", &r);
    float VOS = 4 * 3.14 * r * r * r / 3;
    printf("Your Volume of sphere is :");
    printf("%f", VOS);
    return 0;
}