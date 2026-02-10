// #include <stdio.h>
// #include <limits.h>

// int main()
// {
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     int max = INT_MIN;
//     int secmax = INT_MIN;

//     // Find the maximum element
//     for (int i = 0; i < 7; i++)  // Use `i < 7` for clarity
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     // Find the second maximum element
//     for (int i = 0; i < 7; i++)  // Use `i < 7` for clarity
//     {
//         if (arr[i] > secmax && arr[i] < max)  // Fix condition here
//         {
//             secmax = arr[i];
//         }
//     }

//     printf("Second maximum element: %d", secmax);
//     return 0;
// }

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[7] = {1, 2, 3, 4, 4, 3, 2};
    int max = INT_MIN;
    int secmax = INT_MIN;

    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            secmax = max;
            max = arr[i];
        }

        else if (secmax < arr[i] && max != arr[i])
        {
            secmax = arr[i];
        }
    }
    printf("Second maximum element: %d", secmax);
    return 0;
}
