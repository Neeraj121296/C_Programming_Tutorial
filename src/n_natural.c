/******************************************************************************
Wap to print square of n nature number
*******************************************************************************/

#include <stdio.h>

int find_sqaure(int num)
{
    
    return num*num;
    
}

void main()
{
    int n;
   printf("Enter a given number\n");
   scanf("%d",&n);
   printf("Square of %d natural numbers are as follows :\n",n);
   for(int i=1;i<=n;i++)
   {
     int result= find_sqaure(i);
      printf("%d\n",result);
    
      
   }
   
}
