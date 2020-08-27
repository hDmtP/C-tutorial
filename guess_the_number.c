#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, gue, nog=1;
    srand(time(0));
    num = rand()%100+1;
    
    do
    {
        printf("***Guess a number between 0 to 99***\n");
        scanf("%d", &gue);
        if (gue>num)
        {
            printf("****guess>number****\n");
        }
        else if (gue<num)
        {
            printf("****guess<number****\n");
        }
        else
        {
            printf("*****YOU GOT IT CORRECTLY BY %d CHANCES*****\n", nog);
        }
        nog++;
        
        
        
    } while (gue!=num);
    
    return 0;
}