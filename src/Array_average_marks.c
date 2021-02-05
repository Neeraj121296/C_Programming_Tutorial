/******************************************************************************



WAP to read names and marks in five subjects of five students and print their average marks.

            Maths   Science     English     PhysicalEducation  SocialScience
JOHN        67      69          89          90                  56
ANY         45      78          98          74                     90
CARTEL      55      88          96          47                     70
ALICE       46      68          92         71                      89
SAM         44      67          83          73                  68

name[5]={JOHN,ANY,CARTEL,ALICE,SAM}

*******************************************************************************/


#include <stdio.h>

void main()
{
    int marks[5][5],sum=0;
    char subject[5][20];
    float avg[5];
    char name[5][20];
    for(int i=0;i<5;i++)
    {
        printf("Enter %d subject name\n",i+1);
        scanf("%s",&subject[i]);
    }
    for(int i=0;i<5;i++){
        printf("Enter name of student\n");
        scanf("%s",&name[i]);
        
        printf("Enter marks of 5 different subject\n");
        for(int j=0;j<5;j++)
        {
          
            printf("Enter marks of %s in subject %s ",name[i],subject[j]);
            scanf("%d",&marks[i][j]);
        }
        
    }
    
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum=sum+marks[i][j];
        }
        avg[i]=sum/5;
        sum=0;
    }
    
    for(int i=0;i<5;i++)
    {
        printf("Average marks of %s is %f\n",name[i],avg[i]);
    }
    
}
