/******************************************************************************
Use of Character functions
*******************************************************************************/

//Character functions operates characters.for these functions we use ctype.h library

/*
tolower -- This function is used to change the value of character into lower case.
Syntax -- int tolower(int ch)

*/

/*
toupper -- This function is used to change the value of character into upper case.
Syntax -- int toupper(int ch)

*/

//WAP to convert a string either into lowercase letters or into uppercase letters.

#include <ctype.h>
#include <stdio.h>



void main()
{
   
 

   char str[100];
  //WAP to print count of uppercase and lowercase letters in a string. 
  printf("Enter a string to convert it into lowercase or uppercase\n");
  //scanf("%s",str);
  gets(str);
  //char str[]="ABcdef";
 
  for(int i=0;str[i]!='\0';i++)
  {
      str[i]=toupper(str[i]);
        
  }
    printf("String in uppercase letters :\n");
    puts(str);
    //printf("%s",str);
    
    for(int i=0;str[i]!='\0';i++)
  {
      str[i]=tolower(str[i]);
        
  }
   
   
    printf("String in lowercase letters :\n");
    //puts(str);
    printf("%s",str);
}



/*
OUTPUT :

Enter a string to convert it into lowercase or uppercase
Hello Student
String in uppercase letters :
HELLO STUDENT
String in lowercase letters :
hello student





*/

