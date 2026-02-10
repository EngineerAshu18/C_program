#include <stdio.h>
int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // int a = 10;
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // int a = 10;a
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}