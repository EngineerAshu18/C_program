// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the no. is :");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. is :");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++) // j-> 1 to a
        {
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}