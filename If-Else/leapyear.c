#include <stdio.h>
int main()
{
    int x;
    printf("Enter year :");
    scanf("%d", &x);
    if (x % 4 == 0)
    {
        printf("Leap year");
    }
    else
    {
        printf(" NOt leap year");
    }

    return 0;
}