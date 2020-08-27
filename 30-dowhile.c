#include<stdio.h>

// int main(){
//     int i=0;
//     do
//     {
//         printf("The value of i is %d\n", i); 
//         i--;
//     } while (i>10);
    
//     return 0;
// }
/*
#include<stdio.h>

int main(){
    int i=0;
    while (i<10)
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}
*/

// int main(){
//     int i;
//     int temp;
//     printf("Enter any integer value for i:\n");
//     scanf("%d", &i);
//     temp=i;
//     do
//     {
//         printf("%d\n", temp-i+1); 
//         i--;
//     } while (i>0);
    
//     return 0;
// }

int main(){
    int i=0;
    int n;
    printf("Enter any integer\n");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i+1);
        i++;
    } while (i<n);
    
    
    return 0;
}
