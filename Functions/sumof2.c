#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a;
    printf("Enter 1st numbe:");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd numbe:");
    scanf("%d", &b);
    int sum = add(a, b);
    printf("%d", sum);
    return 0;
}
