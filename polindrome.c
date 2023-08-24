//wap to input astring to check palindrom functiony
//1 reverse the string
//2 compare reverse string and real string

#include<stdio.h>
#include<string.h>

void main()
    {
  char name[20], temp[20];
  puts("enter your name :");
  gets(name);
  strcpy(temp,name);
  strrev(name);  //no return  type
 
  int result =stricmp(name,temp);
  if("string is polindrome string")
    {
    
  }
  printf("temporay name = %s and real name=%s", temp,name);
  
}