#include<stdio.h>
#include<string.h>

int main()
{
  char str [30];
  char copystr[30];
  char copy1[30];
  
printf ("Enter a string: ");
scanf (" %[^\n]s", str);

 strcpy (copystr, str); //This function strcpy just copies all the string to copystr from str. 
    printf ("The copied string is: %s\n", copystr);

 strncpy (copy1, str, 10); //This function strncpy copies only 10 characters from str to copystr.
    printf ("The copied string is: %s\n", copy1);

 strcat (copy1, copystr); //This function adds the content of copystr to the end of string pointed by copy1. 
    printf ("The appended string is: %s", copy1);


}