/******************************************************************************
Use of Character functions
*******************************************************************************/

//Character functions operates characters.for these functions we use ctype.h library

/*
isalpha()
This function is used to check whether a Character is alphabet or not.
it returns 0 when Character is not an alphabet.
it returns non zero when Character passed is an alphabet(A to Z or a to z).
Syntax : int isalpha(int C);
*/

/*
isdigit()
This function is used to check whether a Character is digit or not.
it returns 0 when Character is not an digit.
it returns non zero when Character passed is an digit(A to Z or a to z).
Syntax : int isdigit(int C);
*/

#include <ctype.h>
#include <stdio.h>



void main()
{
   
  char value='1';
  
  if(isalpha(value)==0)
  {
      printf("Not an alphabet\n");
  }
  else
   printf("an alphabet\n"); 
   
   
  if(isdigit(value)==0)
    printf("Not a digit\n");
  else
    printf("a digit\n");

   
  //WAP to print count of alphabet and numbers in a string. 
  char str[]="123NJoshi";
  int count_alpha=0;
  int count_num=0;
  for(int i=0;str[i]!='\0';i++)
  {
      if(isalpha(str[i]) != 0)
        count_alpha++;
    
    if(isdigit(str[i]) !=0 )
        count_num++;
        
  }
  
  printf("Count of number in given string is %d\n",count_num);
  printf("Count of alphabet in given string is %d\n",count_alpha);
   
   
}



/*
OUTPUT :

Not an alphabet
a digit
Count of number in given string is 3
Count of alphabet in given string is 6





*/

