/******************************************************************************

Wap to print area of square. Define a function to calculate area of square.
Wap to find out greatest number among  three numbers
Wap to calculate square of 10 natural number;
*******************************************************************************/

#include <stdio.h>


//A function to return greatest number among  three numbers
//parameter -- x,y,z of data type int
//return type -- int
int greatest_of_three(int x,int y , int z){
    
    
    if(x>y && x>z)
        return x;
    else if(y>x && y>z)
        return y;
    else
        return z;
    
    
}


//Standards of good programming.
//A function to return area of square.
//parameter/argument -- side of data type int
//return type -- int
int area_square(int side){
    return side*side;
}

void main()
{
    
    //calculate area of square
    int a;
    int val1,val2,val3;
    printf("Enter side of square to calculate it's area\n");
    scanf("%d",&a);
    int area= area_square(a);
  
  printf("Area of square having side %d is %d\n",a,area);
  


  // calculate greatest_number among three given numbers
    printf("Enter three number\n");
    scanf("%d%d%d",&val1,&val2,&val3);
    
   int greatest_number= greatest_of_three(val1,val2,val3);
   
   printf("Greatest number is %d\n",greatest_number);
    
    
    
    
    //Square of 10 natural numbers
    printf("Square of 10 natural number\n");
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",area_square(i));
    }
  
}
