#include <stdio.h>
int main()
{
    int arr[4];
    printf("Enter first element :");
    scanf("%d", &arr[0]);
    printf("Enter second element :");
    scanf("%d", &arr[1]);
    printf("Enter third element :");
    scanf("%d", &arr[2]);
    printf("Enter 4th element :");
    scanf("%d", &arr[3]);
    printf("%d", arr[2]);
    return 0;
}
// arr[4] = 100; //{2,4,6,8,100}
// arr[1] = 1;   //{2,1,6,8,100}
// printf("%d", arr[1]);
// float a[3] = {1.3, 3.3, 4.2};
// printf("%f", a[2]);
// char arr[4] = {'a', 'n', 'Y', '%'};
// printf("%c", arr[3]);