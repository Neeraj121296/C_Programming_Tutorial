/******************************************************************************

To print a string in reverse order.

E.g. : happy 

output : yppah

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <conio.h>


//Implementation of strrev function, 

//NOTE : not required to do in exam.
/*char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}*/
void main()
{
    char string1[100];
    
   printf("Enter a string to reverse it \n");
   gets(string1);
   //this function only runs in turbo c++
   strrev(string1);
   puts(string1);
}


/*
OUTPUT :

Enter a string to reverse it 
Happy
yppaH




*/

