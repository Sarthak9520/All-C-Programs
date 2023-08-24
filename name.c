#include <stdio.h>
#include <string.h>

void main()
    {
  char name[20];
  puts("enter your name :");
  
  gets(name);
  
  //strlen(name);        //pre defined function calling
  printf("length of string is : %d", strlen(name));
  
  
    }