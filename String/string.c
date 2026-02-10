// #include <stdio.h>
// int main()
// {
//     char arr[] = "Ashutosh Yadav is student of madan mohan malaviya";
//     int i = 0;
//     while (arr[i]!='\0')
//     {
//         printf("%c", arr[i]);
//         i++;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    char str[] = "CollegeWallah";
    str[1] = 98;//'b'
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}