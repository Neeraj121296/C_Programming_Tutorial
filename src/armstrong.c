/******************************************************************************

              
153=1^3+5^3+3^3;
Wap to check if number is armstrong or not.
*******************************************************************************/

#include <stdio.h>

int  calculate_cube(int value){
    
    int temp= value*value*value;
    return temp;
  //  return value*value*value;
}


int  checkArmstrong(int num){
    
    int sum=0;
    int temp=num;
    while(num!=0)
    {
        int digit=num%10;
        sum=sum+calculate_cube(digit);
        num=num/10;
        
    }
    
    if(temp==sum)
        return 1;
    else
        return 0;
    
    
}



void main()
{
    int n;
    printf("Enter a number to check if it is armstrong number or not\n");
    scanf("%d",&n);
    int value=checkArmstrong(n);
    
    if(value==1)
        printf("Number is Armstrongs number");
    else
         printf("Number is not Armstrongs number");

   
}
