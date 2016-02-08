/* This program illustrates some of the ideas for operators
    Prints all the powers of 2 from
*/

#include <stdio.h>

int main()
{
  int i = 0, power = 1;

  while (++i <= 10)
  {
    if ((i % 2) == 0)
      printf("\n");

    printf("%10d ", power *= 2);
  }
  printf("\n");
  return 0;
}
