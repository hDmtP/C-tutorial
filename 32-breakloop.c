#include<stdio.h>

int main(){
    int i=0;
    do{
     printf("i=%d\n", i);
     if (i==3)
     {
         break;
     }
     i++;
     
    }
    while(i<5);
    return 0;
}