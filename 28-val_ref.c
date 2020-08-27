/*

void cngVars(int*ptr){
 *ptr=466;
}


int main(){
    int a=68, b=50;
    printf("The value of a: %d\n", a);
    cngVars(&a);
    printf("The value of a: %d\n", a);
    return 0;
}
*/

#include<stdio.h>

// void interesting(int *add , int *subtract);
void interesting(int *add, int *subtract)
{
	int temp= *add;
	*add = *add + *subtract;
	*subtract = temp - *subtract;
	// return;

}    
int main()
{
	int a=99,b=88;
	printf("The sum and substraction of %d and %d is %d and %d\n",a,b,a+b,a-b);
	interesting(&a, &b);
	printf("The new value of a and b is %d and %d respectively.",a,b);
	return 0;
	
}
