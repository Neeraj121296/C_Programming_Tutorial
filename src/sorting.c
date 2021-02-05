/******************************************************************************

    Sorting in C :
    
    Sorting is arrangement of elements in either ascending or desending order.
    Example : {45,23,89,56,90}
    Sorted Array Looks Like : {23,45,56,89,90} Sorting in ascending order .
    
    
    algorithms: A standard procedure to do a certain type of task in step by step order is called  
                algorithm.
                
    
    There are various kinds of algorithms for sorting purpose :
    
    1. Insertion Sorting
    2. Bubble sorting
    3. Selection sorting
    4. Merge sorting(*)
    5. Quick sorting(*)
    
    
Insertion Sort : Array Size : N  
                Passes : (N-1) passes to sort Array
                Total number of comparison : n(n-1)/2
*******************************************************************************/
 
//program to swap two numbers
//a=5;b=6 
//a=6;b=5;

#include <stdio.h>

void main()
{
    int a[10]={7,5,2,6,3,4,0,9,2,8};
    int temp;
    //insertion sorting  (ascending order)
   /* for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    */
    int n=10;
    //bubble sorting (ascending order)
   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }*/
    
    //bubble sorting (desending order)
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        
        printf("%d\t",a[i]);
    }
    
}
