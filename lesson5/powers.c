/* This program illustrates some of the ideas for operators
    Prints all the powers of 2 from
*/

#include <stdio.h>
#define MAX 5

int main()
{
  int i = 0, power = 1;

  while (i++ <= MAX)
  {
    /*if ((i % 2) == 0)
      printf("\n"); */

    printf("%10d ", power *= 2);
  }
  printf("\n");
  return 0;
}
