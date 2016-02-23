#include <stdio.h>

/* note now demo2 returns an int */
int demo2();

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

  /* note we are calling demo2 */
  total = demo2();

  /* print total */
  printf ("Total inside *main* after *demo2* %d\n", total);

}

void demo()
{
  int total = 10;   // demo total
  printf ("Total inside **demo** is %d\n", total);

  total +=2;
  printf ("Total inside **demo** is %d\n", total);

}

int demo2()
{
  int total = 100;   // demo total
  printf ("Total inside ***demo2*** is %d\n", total);

  total +=100;
  printf ("Total inside ***demo2*** is %d\n", total);

  return total;
}
