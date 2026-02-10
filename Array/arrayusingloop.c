// #include <stdio.h>
// int main()
// {
//     int arr[5] = {2, 4, 3, 6, 8};
//     for (int i = 0; i <= 4; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int arr[4];
    for (int i = 0; i <= 4; i++)
    {
        // int a = i + 1;
        printf("\nEnter element number %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    // printf("%d", arr[1]);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
//code shi hai vs galti kar rha hai