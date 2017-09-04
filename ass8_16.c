#include <stdio.h>
#include <string.h>


int main( void )
{ 
   
   // variables to hold strings
   char text[100];
   char search[10];

   // create char pointers
   char *searchPtr; 

   puts("Please enter a line of text:");	
   fgets(text, 99, stdin);

   puts("Please enter a search string");
   fgets(search, 9, stdin);
   puts("");
   
   // substrings
   searchPtr = strstr(text, strtok(search, "\n"));
   
   // the loop is to continue to search substrings
   puts("Print remainders:");
   while(searchPtr != NULL)
   {  
      printf("%s\n", searchPtr);
      searchPtr = strstr(searchPtr+1, search);
   }

}
