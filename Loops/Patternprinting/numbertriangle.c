 #include <stdio.h>
int main()
 {
    int n;
     printf("Enter the no. is :");
    scanf("%d", &n);
    //n =4
   for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
         {           
             printf("%d ",j);
        }
         printf("\n");
     }
   return 0;
 }
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the no. is :");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //number triangle ulta