// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "College Wallah";
//     // char *ptr = &str[0];
//     // char *ptr = str; // ptr now point to str[0]
//     // printf("%p\n", &str[0]);
//     // printf("%p", str);
//     char *ptr = str;
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         printf("%c", str[i]);
//         i++;
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "ashutosh yadav";
    char *ptr = str;
    int i = 0;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
        i++;
    }
    return 0;
}