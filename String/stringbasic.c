// #include <stdio.h>
// int main()
// {
//     // char arr[5] = {'c', 'g', 'f', 'r', 'e'};
//     // printf("%c", arr[4]);
//     char ch = 'A';
//     // int x = (int)ch;
//     // printf("%d", x);
//     printf("%d" ,ch);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char arr[] = {'c', 'g', 'f', 'r', 'e','\0'};
//     char ch = '\0';  // null ascii value 0
//     int x=0;
//     char a=(char)x;
//     printf("%c", a); // a-> '\0'
//     return 0;
// }
#include <stdio.h>
int main()
{
    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c ", arr[i]);
        i++;
    }
    return 0;
}