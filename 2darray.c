//wap to input 5 subject marks of 3 students and find total marks of all student

#include<stdio.h>

void main()
    
    {
  int marks[3][5],i,j; //15 elements
  
  for(i=0;i<=2;i=i+1) //3 times          //access all column of 2nd row put (i=1)
    {
    printf("enter 5 subject:\n");
    
    for(j=0;j<=4;j=j+1) //5times
      {
      scanf("%d",&marks[i][j]);
      
    }
  }
  for(i=0;i<=2;i=i+1)
    {
    sum= sum+marks[i][j];
    
  }
   }
   /*wap to input 3x3 array and print the second row
wap to input 3x4 array and print all the values in the last row
wap to input 4x3 array and print all column values of all even rows
wap to input 3x3 array and print last column value of each row*/