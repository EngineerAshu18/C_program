#include <stdio.h>
int main()
{
    int l;
    printf("Enter the number length is:");
    scanf("%d", &l);
    int b;
    printf("Enter the number breath is :");
    scanf("%d", &b);
    int area;
    area = l * b;

    int perimeter = 2 * (l + b);

    if (area > perimeter)
    {
        printf("yes");
    }
    else
    {
        printf(" no");
    }

    return 0;
}