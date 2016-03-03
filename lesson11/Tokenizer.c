#include <stdio.h>

char* GetToken(char* string);

int main()
{
   //char str[80] = "This is NYU Tandon School of Engineering";
   //char str[] = "one";
   //char str[] = "";
   //char str[80] = "This is NYU Tandon School of Engineering ";
   char str[80] = "This  is NYU Tandon School of Engineering";


   char *token;

   /* get the first token */
   token = GetToken(str);

   /* walk through other tokens */
   while( token != NULL )
   {
      printf( " %s\n", token );
      token = GetToken(NULL);
   }

   return(0);
}

/* This function returns the first 'word' in a sentence.
   It can be called repeatedly to get all the words in the
   sentence.
*/

char* GetToken(char* string)
{
  static char* oldString;     /* the string that will hold for next call */

  char* resultString = NULL;  /* for returing the result */

  /* if string is null we could return the next word we
     have saved unless we don't have anything left */
  if (string == NULL && oldString == NULL)
    return NULL;

  /* if we have a NULL string use the old one */
  if (string == NULL)
  {
    string = oldString;
  }
  else
  {
    /* otherwise save the string */
    oldString = string;
  }

  /*  start our new string there */
  resultString = string;

  /* advance until we have a space or we reach the end */
  while(*string != ' ' && *string != '\0')
    string++;


  /* right now we are pointing at the space or the end
     let's put a NULL there and return it */
  if (*string != '\0')
  {
    *string = '\0';

    oldString = ++string;

    while(*oldString == ' ')
      oldString++;

  }
  else
  {
    /* if we are pointing to the end, put a NULL in oldstring */
    oldString = NULL;
  }

  return resultString;
}
