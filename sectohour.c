#include<stdio.h>
int main()
    {
  int inputsec,hours,min,sec;
  
  printf("enter the number of sec");
  scanf("%d",&inputsec);
  
  hours = inputsec / 3600;
  min = (inputsec % 3600) / 60;
  sec = inputsec % 60;
  
  printf("hours:%d\n",hours);
  printf("min:%d\n",min);
  printf("sec:%d\n",sec);
    }