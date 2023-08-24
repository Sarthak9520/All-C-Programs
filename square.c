#include<stdio.h>

int main()
    {
  int num;
  printf("enter a number:");
  scanf("%d", &num);
  
  int square = num*num;
  printf("sqare of %d is %d\n", num,square);
  
  return 0;
  
    }