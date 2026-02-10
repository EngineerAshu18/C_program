#include<stdio.h>
int main()
{
    int r, h;
    printf("Enter the value of r:");
    scanf("%d",&r);
    printf("Enter the value of h :");
    scanf("%d",&h);
    int v = 3.14 * r * r * h;
    printf("%d The value of :",v);
    return 0;
}