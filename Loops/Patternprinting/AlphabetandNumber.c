#include <stdio.h>

int main()
{
    int i, j;

    // Loop for rows
    for (i = 1; i <= 5; i++)
    {
        // Check if the row is odd or even
        if (i % 2 != 0)
        {
            // For odd rows, print numbers
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        else
        {
            // For even rows, print letters
            for (j = 0; j < i; j++)
            {
                printf("%c ", 'A' + j);
            }
        }
        printf("\n");
    }

    return 0;
}