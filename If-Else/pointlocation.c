#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the coordinates:");
    scanf("%d %d ", &x, &y);
    // scanf("%d ",&x);
    // scanf("%d ",&y);
    if (x == 0 && y == 0)
    {
        printf("The points is origin");
    }
    else if (x == 0)
    {
        printf("The points is lies on y-axis ");
    }
    else if (y == 0)
    {
        printf(" The points is lies on x-axis ");
    }
    else
    {
        printf(" The point does not lies x or y axis");
    }

    return 0;
}