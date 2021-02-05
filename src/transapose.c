/******************************************************************************

//WAP to print transpose of a given matrix;                           

a={
    {3,4,5},
    {2,1,7},
    {3,2,1}
}

a'={
    {3,2,3},
    {4,1,2},
    {5,7,1}
}
*******************************************************************************/

#include <stdio.h>

void main()
{
    
    int transpose_x[3][3];
    int x[3][3]={
    {3,4,5},
    {2,1,7},
    {3,2,1}
};


for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        transpose_x[i][j]=x[j][i];
    }
}

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
       printf("%d\t",transpose_x[i][j]);
    }
    printf("\n");
}



}
