#include <stdio.h>
int main()
{
    int a = 5;
    int* x = &a;//int* -> int ka address store karta hai 
   // WIP-> *x=7;//a is changed.
   int** y= &x; // int** -> int* ka address store karta hai
    printf("%p\n", x);
    printf("%p\n", &x);
    printf("%d", *x);
    return 0;
}