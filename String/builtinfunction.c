// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *str = "Ashutosh";
//     int x = strlen(str);
//     printf("%d", x);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[16] = "Ashutosh yadav";
//     char s2[16];
//     strcpy(s2, s1);
//     s2[0] = 'M';
//     printf("%s\n", s1);
//     printf("%s", s2);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Ashutosh";
    char s2[] = "yadav";
    strcat(s1, s2);

     printf("%s\n", s1);
    printf("%s", s2);

    return 0;
}