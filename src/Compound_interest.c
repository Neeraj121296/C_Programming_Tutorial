/******************************************************************************
Wap to calculate compound interest
A=P(1+r/100)^n

interest = A - P 
= P(1+r/100)^n - P 
=P[(1+r/100)^n -1]

A = Total amount including interest amount charged
P = Initial amount / Principal amount
n= time
r = interest rate
*******************************************************************************/


#include <math.h>
#include <stdio.h>

float calculate_compound_interest(float p , float r, int t ){
    
    float compound_interest= p*(pow(1 + (r/100), t) -1);
    return compound_interest;
}

void main()
{
    float p,r;
    int t;
    printf("Enter principal amount\n");
    scanf("%f",&p);
     printf("Enter annual rate\n");
    scanf("%f",&r);
     printf("Enter time\n");
    scanf("%d",&t);
   float interest= calculate_compound_interest(p,r,t);
   printf("Compound interest will be %f", interest);
    
}


/*
Output------ >>
Enter principal amount
5000
Enter annual rate
11.5
Enter time
5
Compound interest will be 3616.767090


*/
