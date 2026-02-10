#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);
    //int arr[][3]={{1,3},{2,4}} automatic apna place le leta hai

    int arr[r][c]; // Ensure your compiler supports VLAs (C99 or later)

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]); // Fixed scanf issue
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
