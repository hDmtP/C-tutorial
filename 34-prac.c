
#include<stdio.h>

int main(){
    int n, i;
    int mul = n*i;
    printf("'n' ki value bataiye?\n");
    scanf("%d", &n);
    for (i = 10; i>0; i--)
    {
        printf("%d x %d= %d\n", n, i, mul);
    }
    
    return 0;
}

/*
#include<stdio.h>

int main(){
    int n, i=1, sum=0;
    printf("enter value of n\n");
    scanf("%d", &n);
    while (i<=n)
    {
        sum+=i;
        i++;
    }
    printf("sum = %d\n", sum);
    
    return 0;
}
*/
/*
#include<stdio.h>

int main(){
    int n, i=1, sum=0;
    printf("enter value of n\n");
    scanf("%d", &n);
    do
    {
        sum+=i;
        i++;
    } while (i<=n);
    printf("sum = %d\n", sum);
    return 0;
}
*/