#include <stdio.h>
#include <string.h>

/*
Question 4 (5 points)
What would be printed when executing the following code.
Remember that sizeof an int is usually 4 bytes in C and
sizeof a char is usually 1 byte.

*/


int main()
{
  char 	str[] = "123";
  int  	int_array[] = {0, 1, 2};
  float 	float_array[] = {0.0, 1.0, 2.0, 3.0};

  printf ("sizeof int_array: %lu\n", sizeof(int_array));

  printf ("sizeof int_array/sizeof(int): %lu\n",
    sizeof(int_array)/sizeof(int));

  printf ("sizeof array of char: %lu\n", strlen(str));

}
