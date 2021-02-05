/******************************************************************************

//Recursion : A process by which a function call itself n number of times is called recursion.

In C a function can call any defined function or itself. When a function repeatedly calls itself then
recursive function and such type of phenomenon is called recursion.

//WAP in C to calculate factorial of a number using recursion.

5!= 5*4*3*2*1

*******************************************************************************/
#include <stdio.h>

int fact(int num)
{
    if (num==1)
        return 1;
    else if(num == 0)
        return 1;
    else
        return num*fact(num-1);
}

void main()
{
    int n;
   printf("Enter a number to calculate its factorial\n");
   scanf("%d",&n);
   
   int result=fact(n);
  
    printf("factorial of %d is %d",n,result);
}
