/******************************************************************************

To input two strings and check whether they are same or not.
Case senstivity to check -- small case and upper are different eg. N and n both are different.
Case senstivity not to check -- small case and upper are same eg. N and n both are same.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
   char string1[100];
   char string2[100];
   
   printf("Enter string 1\n");
   gets(string1);
   printf("Enter String 2\n");
   gets(string2);
   
   
  if(strcmp(string1,string2)==0)
    printf("Both Strings are equal\n");
 else
    printf("Strings are not equal\n");
  
 printf("****************2nd Case*************************\n");
 
 printf("case senstivity not considered\n");
  for(int i=0;string1[i]!='\0';i++)
      {
          string1[i]=tolower(string1[i]);
            
      }
  
   for(int i=0;string2[i]!='\0';i++)
      {
          string2[i]=tolower(string2[i]);
            
      }
   
   if(strcmp(string1,string2)==0)
    printf("Both Strings are equal: Strings when printed in lower case are String1= %s   && String2=%s\n",string1,string2);
 else
    printf("Strings are not equal %s %s\n",string1,string2);
  
   /*
   OUTPUT ::
   
   
   Enter string 1
    HAppy
    Enter String 2
    hAPPY
    Strings are not equal
    ****************2nd Case*************************
    case senstivity not considered
    Both Strings are equal: Strings when printed in lower case are String1= happy   && String2=happy



   
   
   */
   
}
