#include<stdio.h>

//void add2num(int a, int b);       //declaration
//void add2num(int a, int b)        //definition
//void  not return value

int add2num(int a, int b);
int add2num(int a, int b)

//parameterized function & return type
    
    {
  int c;
  c=a+b;
  return c;
 // printf("addition = %d\n",c);
  
    }
    
    void main()
    {
     // add2num(12,34);
      printf("%d",add2num(12,34));
      
      // 3 no. addition
      // int n1,n2,n3;
      // printf("enter 3 number");
      //scanf("%d%d%d,&n1,&n2,&n3);
      //int res = add2num(n1.n2);
      //printf("output =%d" , add2num(res,n3));
      
    }