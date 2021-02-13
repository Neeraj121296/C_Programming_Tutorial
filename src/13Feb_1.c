/******************************************************************************
Use of Character functions
*******************************************************************************/

//Character functions operates characters.for these functions we use ctype.h library

/*
isupper() -- This function is used to check whether a charcater is upper case letter or not(A to Z).
it returns non zero for true(uppercase) and 0 for false(not uppercase).
Syntax -- int isupper(int ch)
*/

/*
islower() -- This function is used to check whether a charcater is lower case letter or not(a to z).
it returns non zero for true(lowercase) and 0 for false(not lowercase).
Syntax -- int islower(int ch)
*/

#include <ctype.h>
#include <stdio.h>



void main()
{
   
 

   char str[100];
  //WAP to print count of uppercase and lowercase letters in a string. 
  printf("Enter a string to check upper or lower case letters\n");
  //scanf("%s",str);
  gets(str);
  //char str[]="ABcdef";
  int count_uppercase=0;
  int count_lowercase=0;
  for(int i=0;str[i]!='\0';i++)
  {
      if(isupper(str[i]) != 0)
        count_uppercase++;
    
    if(islower(str[i]) !=0 )
        count_lowercase++;
        
  }
  
  printf("Count of lowercase letters in given string is %d\n",count_lowercase);
  printf("Count of uppercase letters in given string is %d\n",count_uppercase);
   
   
   
}



/*
OUTPUT :

Enter a string to check upper or lower case letters
Hello Student
Count of lowercase letters in given string is 10
Count of uppercase letters in given string is 2






*/

