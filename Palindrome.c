/* Author: Prabin Niroula
 * Date: Nov 6, 2022
 * A program that checks if a given string is palindrome. 
*/

#include<stdio.h>
#include<string.h>
#define COUNT 5


//This is function prototye where we have just declared the functions that will be used. 
void getStrings (char arr1[COUNT][31], int length[COUNT]);
void reverseStr (char rev[COUNT][31], char arr1[COUNT][31], int length[COUNT]);
void isPalindrome();
int getlength(int length[COUNT]);



//This main function will call isPalindrome function that does all the other callings.
int main ()
{

  isPalindrome ();
  
  return 0;
  
}
  
  

/*
This function isPalindrome is the most important function in this program as it does most of the function calls.It first calls getStrings and then calls reverseStr.
*/
void isPalindrome()
{
  char arr1[COUNT][31];
  char rev[COUNT][31];
  int length[COUNT];

  getStrings (arr1,length);
  reverseStr (rev, arr1, length);
  
  int l = getlength(length);
  printf ("The length of longest string is %d\n", l);
  
}




//The function getStrings will ask user for input and returns longest string along with its length using strlen function. 
void getStrings (char arr1[COUNT][31], int length[COUNT])
{
  
  
   int len,i;
   
   for (i=0; i<COUNT ; i++)
       {
        printf ("Enter string %d: ", i+1);
        scanf (" %[^\n]s", arr1[i]);
        length[i] = strlen (arr1[i]);
       }
      
}





//This function checkes for the longest string and returns the longest string to isPalindrome and prints at the end.
int getlength(int length[COUNT])
{


  int len = length [0];  //Assuming the very first string is the longest and storing its value to variable len. 
       
    for (int i=1; i< COUNT; i++)
      {
        if (len < length[i]) //if len is infact not the longest, its value will then be updated with the length of longest string entered by the user. 
            len = length[i];
      }
   
   return len;

}





/* The following function first reverses string and stores in the array rev. And then it checks whether the rev is equal to arr1 to check for palindromes. If they are equal then it prints PALINDROME and if unequal, it prints NOT PALINDROME. */
void reverseStr (char rev[COUNT][31], char arr1[COUNT][31], int length[COUNT])
{
  
  int i,h,k,j;
  int checker=1;
       
      
      for (k =0 ; k<COUNT; k++)
        {   
          h = length[k] -1;
          
           for (j=0; j<length[k] ; j++)
             {
               rev[k][j]= arr1[k][h];
               h--;
              }
          } 
           
           
           for (int v=0; v<COUNT ; v++)
           {
           
              checker=1;
              for (k=0; k<length[v] ; k++)
                {      
                  if (arr1[v][k] != rev[v][k])
                    checker=0;
                    break;
                }  
                  
                
                if (checker == 0)
                  printf ("%s is NOT PALINDROME!!!\n", arr1[v]);


                 else if (checker == 1) 
                    printf ("%s is PALINDROME!!!\n", arr1[v]);
     
            }
            
}
      
     
           
           
           
           




  

