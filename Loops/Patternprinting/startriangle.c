 #include <stdio.h>
 int main()
 {
     int n;
    printf("Enter the no. is :");
     scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
         {
            printf("*");
        }
        printf("\n");
     }
    return 0;
 }
//#include <stdio.h>
// int main()
// {
//     float r, h;
//     printf("Enter The value of r is : ");
//     scanf("%f", &r);
//     printf(" Enter the value of h is :");
//     scanf("%f", &h);
//     float csa = 2 * 3.14 * r * h;
//     printf(" your csa is : %f \n", csa);
//     float tsa = 2 * 3.14 * r * (r + h);
//     printf(" your tsa is  %f \n", tsa);
//     float volume = 3.14 * r * r * h;
//     printf("your volume is  %f \n", volume);
//     float a = 4 / 3 * 3.14 * r * r * r;
//     printf("your a is  %f \n", a);
//     float sa = 4 * 3.14 * r * r;
//     printf("your sa is %f \n", sa);

//     return 0;
// }