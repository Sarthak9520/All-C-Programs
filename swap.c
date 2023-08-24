#include<stdio.h>

int main()
    {
  int m,n ;
  printf("enter two integers m and n:");
  scanf("%d%d",&m,&n);
  
  printf("before swapping: m= %d,n=%d\n",m,n);
  
  m=m+n;
  n=m-n;
  m=m-n;
  
  printf("after swapping: m= %d,n=%d\n",m,n");
    
    return 0;
    }