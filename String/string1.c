#include <stdio.h>
#include <string.h>
int main()
// {
//     char str[] = "college wallah is best";
//     // printf("%s", str);
//     // puts(str);
//     puts("hello everyone");
//     return 0;
// }

{
    char str[40];
    // scanf("%s", str); // only first word be considered
    scanf("%[^\n]s",str);
    //gets(str);  // -> entire sentence can be input
    printf("your input was: %s", str);
    return 0;
}