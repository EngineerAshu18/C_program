#include<stdio.h>
int main()
{
    int arr[5]={3,45,2,64,665};
    int max=arr[0];
    for(int i=0;i<=4; i++){
        if(max<arr[i]){
            max=arr[i];
        }

    }
    printf("%d",max);
    return 0;
}
// #include<stdio.h>
// #include<limits.h>
// int main()

// {
//     int arr[5]={3,45,2,64,665};
//     int max=INT_MIN;//sabse chhota number
//     for(int i=0;i<=4; i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }

//     }
//     printf("%d",max);
//     return 0;
// }