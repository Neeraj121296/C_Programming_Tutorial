/******************************************************************************

//Wap to print fabonacci series upto n natural numbers

0,1,1,2,3,5,8,13,21,34--------n 

*******************************************************************************/

#include <stdio.h>

void main()
{
   int n;
   printf("Enter value of n\n");
   scanf("%d",&n);
   int a=0,b=1,temp;
 
   for(int i=1;i<=n;i++)
   {
      printf("%d ",a); 
      temp=a;
       a=b;
      b=temp+b;
 
   }
    
}
