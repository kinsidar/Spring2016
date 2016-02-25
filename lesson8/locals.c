#include <stdio.h>

void demo();

int main()
{
  /* print total */
  int total = 1;  // note main total
  printf ("Total inside *main* is %d\n", total);

  /* demo will print total. Is it the same? */
  demo();

  /* print total */
  printf ("Total inside *main* is %d\n", total);

  /* demo will print total again. Is it the same? */
  demo();

}

void demo()
{
  int total = 10;   // demo total
  printf ("Total inside demo is %d\n", total);

  total +=2;
  printf ("Total inside demo is %d\n", total);

}
