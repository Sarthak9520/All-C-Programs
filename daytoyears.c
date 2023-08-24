#include<stdio.h>

int main()
    {
  int totaldays;
  printf("enter total number of days:");
  scanf("%d", &totaldays);
  
  //calculate years , weeks, and remaining days.
  
  int years = totaldays/365;
  int remainingdays = totaldays % 365;
  int weeks = remainingdays/7;
  remainingdays % = 7;
  
  printf("years:%d\n",years);
  printf("weeks:%d\n",weeks);
  printf("remainingdays:%d\n",remainingdays);
  
  return 0;
  
  
    }