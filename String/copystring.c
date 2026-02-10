// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[] = "physics wallah";
//     // char *s2 = s1;//s2 is a shallow copy
//     // s1[0] = 'M';
//     // printf("%s", s2);
//     // deep copy
//     char s2[] = "physics wallah";
//     printf("%p\n", s1);
//     printf("%p", s2);
//     return 0;
// }
#include <stdio.h>

int main()
{
    char *s1 = "physics wallah"; // Properly initialize s1 as a pointer to a string literal
    char *s2;                    // Declare s2
    s2 = s1;                     // Assign the address of s1 to s2
    printf("%p\n", s1);          // Print the address stored in s1
    printf("%p", s2);            // Print the address stored in s2
    return 0;
}
