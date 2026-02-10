// #include<stdio.h>
// int main()
//  {
// //     int arr [4];
// //     printf("%d",arr[0]);
// int x;
// printf("%d",x);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i, a = 2, b = 3;
//     int arr[2 + 3];
//     for (i = 0; i < a + b; i++)
//     {
//         printf("Enter the number is :");
//         scanf("%d", &arr[i]);
//         printf("\n %d\n", arr[i]);
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int size;
    printf("Enter a number is:");
    scanf("%d",&size);
    int arr[size];
    for(int i=1; i<=size;i++){
        scanf("%d",arr[i]);
        printf("%d",arr[i]);
    }
    return 0;
}