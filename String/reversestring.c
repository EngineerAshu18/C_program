#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    puts("Enter  a string");
    scanf("%[^\n]s", str);
    //   printf("the reverse is :");
    //  puts("the size of string :"); // automatically \n bhi de deta hai
    // size of string
    int k = 0;
    int size = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    // printf("%d", size);
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverse string is ");
    puts(str);
    return 0;
}