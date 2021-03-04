/******************************************************************************

To check whether a character is digit or alphabet or any other character.



*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <conio.h>


void main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%s",&ch);
    
    if(isalpha(ch)!=0)
        printf("Entered Character is an alphabet\n");
    else if(isdigit(ch)!=0)
        printf("Entered Character is a digit\n");
    else
        printf("Entered Character is neither a digit nor a alphabet");
    
}


/*
OUTPUT :

1st Run :
Enter a character
A
Entered Character is an alphabet

2nd Run :

Enter a character
2
Entered Character is a digit

3rd Run :
Enter a character
@
Entered Character is neither a digit nor a alphabet







*/

