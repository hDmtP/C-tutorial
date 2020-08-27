#include<stdio.h>

int main(){
    // lable:
    // printf("we are now inside lable\n");
    // goto end;

    // goto lable; 
    // end:
    // printf("We are now in end\n"); 
    int num;

  for (int i = 0; i < 8; i++)
  {
      printf("%d\n", i);
      for (int j = 0; j < 8; j++)
      {
          printf("Enter the number\n");
          scanf("%d", &num);
          if (num==0)
          {
              goto end;
          }
          
      }
      
  }
  
  end:
  printf("The END");



    return 0;
}