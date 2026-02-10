#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 5;
    int idx = -1;
    bool flag = 0; // 0 means the elements is not present
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] == x)
        {
            flag = 1;
            idx = i;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is not present  in this array", x);
    }
    else
    {
        printf("%d is present in this array and its index is %d ", x, idx);
    }
    return 0;
}