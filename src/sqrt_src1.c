/******************************************************************************

To print square root of first 10 natural numbers.
E.g. : 1,1.4146,1.734,2,sqrt(5),sqrt(6),----------,sqrt(10)

*******************************************************************************/

#include <stdio.h>
#include <math.h>

void main()
{
    printf("Square root of first 10 natural numbers\n");
   for(int i=1;i<=10;i++)
   {
       printf("Square root of %d is %f \n",i,sqrt(i));
   }
}


/*
OUTPUT :


Square root of first 10 natural numbers
Square root of 1 is 1.000000 
Square root of 2 is 1.414214 
Square root of 3 is 1.732051 
Square root of 4 is 2.000000 
Square root of 5 is 2.236068 
Square root of 6 is 2.449490 
Square root of 7 is 2.645751 
Square root of 8 is 2.828427 
Square root of 9 is 3.000000 
Square root of 10 is 3.162278 





*/
