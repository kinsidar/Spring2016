#include <stdio.h>
//Max length of a line in the file
#define MAX_LEN 100

//Compares first len letters of two strings
//Return 0 if the letters are all the same, and 1 otherwise
int strCmp(char *str1, char *str2, int len);

int main(){

  //Open file
  char filename[] = "caesar.c";
  FILE *fp = fopen(filename, "r");

  //Counters for number of lines, spaces, keywords
  int numLines = 0;
  int numSpaces = 0;
  int numInts = 0;
  int numChars = 0;
  int numIncludes = 0;
  int numReturns = 0;

  //Read file line by line
  char str[MAX_LEN];
  while (fgets(str, MAX_LEN - 1, fp)) {
    //Increment numLines for each line read
    numLines++;

    //Iterate through each line to find spaces and keywords
    int i;
    for (i = 0; str[i] != '\0'; ++i) {
      //Increment space counter if the char at index i is a space
      if (str[i] == ' ') numSpaces++;
      //Increment int or include counter if the char at index i is 'i'
      //and if strCmp returns 0 when comparing with "int" or "include"
      else if (str[i] == 'i') {
        if (strCmp(str + i, "int", 3) == 0) numInts++;
        if (strCmp(str + i, "include", 7) == 0) numIncludes++;
      }
      //Increment char counter if char at index i is 'c'
      //and if strCmp returns 0 when comparing with "char"
      else if (str[i] == 'c' && strCmp(str + i, "char", 4) == 0) {
        numChars++;
      }
      //Increment return counter if char at index i is 'r'
      //and if strCmp returns 0 when comparing with "return"
      else if (str[i] == 'r' && strCmp(str + i, "return", 6) == 0) {
        numReturns++;
      }
    }
  }

  //Display results
  printf("Filename: %s\n\
          \rNumber of lines: %d\n\
          \rNumber of spaces: %d\n\
          \rNumber of ints: %d\n\
          \rNumber of chars: %d\n\
          \rNumber of includes: %d\n\
          \rNumber of returns: %d\n",
          filename, numLines, numSpaces, numInts, numChars, numIncludes, numReturns);

  //Close file and return
  fclose(fp);
  return 0;
}

//Compares first len letters of two strings
//Return 0 if the letters are all the same, and 1 otherwise
int strCmp(char *str1, char *str2, int len){
  int i;
  //Iterates through first len letters of the strings
  //Stops when a null character is reached in either string or len is reached
  for (i = 0; str1[i] != '\0' && str2[i] != '\0' && i < len; ++i) {
    //Returns 1 if any mismatch is found
    if (str1[i] != str2[i]) return 1;
  }
  //Returns 0 if no mismatches were found after iterating through strings
  return 0;
}
