#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number  of rows :");
    scanf("%d", &n);
    int m;
    printf("Enter a number of columns :");
    scanf("%d", &m);
    // *********.....upto n no of star

    for (int i = 1; i <= n; i++) // outer loop->no of line
    {
        for (int i = 1; i <= m; i++) // inner loop -> no of star in each line
        {
            printf("* ");
        }

        printf("\n"); // har line ke baad ak enter marne ke liye
    }
    return 0;
}