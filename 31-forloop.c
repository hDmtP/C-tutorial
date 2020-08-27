#include<stdio.h>

int main(){
    int n;
    printf("enter te natural numbers upto which you want to print\n");
    scanf("%d", &n);
    for (int a = n; a ; a--)
    {
        printf("The value of a is %d\n", a);
    }
    
   
    return 0;
}