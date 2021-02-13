/******************************************************************************
Use of string functions
*******************************************************************************/

//String functions operates strings.for these functions we use string.h library
/*
When several characters are used together in a " ". it is called as string.

Eg. : char str[100]="Hello Student";
*/

/*
gets() -- This funciton is used to read a line from user.
gets allows user to enter a string with white spaces. whereas scanf funciton only reads a single word.

E.g. -- Hello Student -- this can't be read with scanf, we have to use gets() funciton for it.
*/
//WAP to convert a string either into lowercase letters or into uppercase letters.

#include <ctype.h>
#include <stdio.h>
#include <string.h>


void main()
{
   
 

   char str_sc[100];
   char str_get[100];
 
 /* printf("Enter a string\n");
  scanf("%s",str_sc);*/
 printf("Enter a string \n");
  gets(str_get);
  
 // printf("String taken input with the use of scanf %s",str_sc);
  printf("String taken input with the use of gets %s",str_get);
 

}



/*
OUTPUT using scanf():

Enter a string
Hello Student
String taken input with the use of scanf Hello


OUTPUT using gets() : 
Enter a string 
Hello student
String taken input with the use of gets Hello student









*/

