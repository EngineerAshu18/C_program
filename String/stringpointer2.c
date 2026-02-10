// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "Physics Wallah";
//     // //str="college wallah";
//     // str[0] = 'h';
//     // printf("%s", str);
//     // char *ptr = "physics wallah";
//     char *ptr = str;
//     ptr = "college wallah";
//     printf("%s", str);
//     return 0;
// }     
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "college Wallah";
    
    char *p = str;
   *p='P';
    printf("%s", str);
    return 0;
}     