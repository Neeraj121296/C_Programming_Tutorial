/******************************************************************************
Wap to print sum of given series upto n terms;

1 + 1/4 + 1/9 + 1/16------+ 1/n^2 
*******************************************************************************/

#include <stdio.h>

int main()
{
       float sum=0;
    int n;
   float count=1;
    printf("Enter limit\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        
        sum=sum + 1/(count*count);
        count=count+1;
    }
    
    printf("Sum is %f",sum);
}
