/******************************************************************************

Use of String function

To use string function in your program we use <string.h> library.

puts() -- This function is used to write a line on the standard output stream.


strlen() - This function is used to return the length of a string.
it returns number of character including white spaces present in a string.
Syntax -- int strlen(char[]);

strcat() - (String concatenation) this function is used to append or concat two string.
E.g -- String s1= "Neeraj";
String s2="Joshi";
Result -->  "NeerajJoshi"
Syntax -- strcat(char[],char[]);

strcpy() - it copies source string into destination string.

Syntax - strcpy(char[],char[]);


strcmp - This function is used to compare two strings.This function is case sensitive that means
it compares lower case and upper case also.

Syntax -- int strcmp(char[],char[]);

== 0  --> If both strings are same;
< 0 --> if char1 is less than char2
> 0 ---> if char1 is greater than char2.
*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  
    printf("String puts() use\n");
    printf("\n");
    char demo_string[]="String Puts function use";
    puts(demo_string);
    printf("%s\n",demo_string);
    int length_of_string=strlen(demo_string);
    printf("%d\n",length_of_string);
    
    printf("******************************\n");
    
    /*
    Use of strcat function
    */
      printf("String strcat() use\n");
    printf("\n");
    char str1[]="Neeraj"; //Source String
    char str2[]="Joshi"; //Destination String
    
    strcat(str1,str2);
    printf("%s\n",str1);
    
     printf("******************************\n");
    /*
    Use of strcpy function
    */
    printf("String strcpy() use\n");
    printf("\n");
    char source_string[]="TUESDAY";
    char destination_string[100];
     printf("Source string before calling strcpy function %s\n",source_string);
    printf("Destination string before calling strcpy function %s\n",destination_string);
    strcpy(destination_string,source_string);
    printf("Source string after calling strcpy function %s\n",source_string);
    printf("Destination string after calling strcpy function %s\n",destination_string);
    
    
         printf("******************************\n");
    /*
        Use of strcmp
    */
    
    printf("String strcmp() use\n");
    printf("\n");
    int i,j;
    char str11[]="Monday";
    char str12[]="monday";
    for(int i=0;str11[i]!='\0';i++)
      {
          str11[i]=tolower(str11[i]);
            
      }
  
   for(int i=0;str12[i]!='\0';i++)
      {
          str12[i]=tolower(str11[i]);
            
      }
   
    
    i=strcmp("John","Acker");
    printf("strcmp used after calling tolower function\n");
    j=strcmp(str11,str12);
    
    if(i==0)
        printf("String are Equal\n");
    else
        printf("Strings are not Equal\n");
        
        
    if(j==0)
        printf("String are Equal\n");
    else
        printf("Strings are not Equal\n");
    
        
    /*
    OUTPUT ---
    
   String puts() use

    String Puts function use
    String Puts function use
    24
    ******************************
    String strcat() use
    
    NeerajJoshi
    ******************************
    String strcpy() use
    
    Source string before calling strcpy function TUESDAY
    Destination string before calling strcpy function ����
    Source string after calling strcpy function TUESDAY
    Destination string after calling strcpy function TUESDAY
    ******************************
    String strcmp() use
    
    strcmp used after calling tolower function
    Strings are not Equal
    String are Equal




  
    */    
        
}
