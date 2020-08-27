#include<stdio.h>

int main(){
    int skip=3, i=0;
    while (i<7)
    {i++;
        if (i!=skip)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
        
        
    }
    
    return 0;
}