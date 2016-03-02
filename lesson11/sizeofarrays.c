#include <stdio.h>


int main()
{
  /* note the unsigned long format specifier so that the compiler
     doesn't complain for using %d */

  printf ("sizeof char: %lu\n", sizeof(char));
  printf ("Sizeof int: %lu\n", sizeof(int));
  printf ("sizeof float: %lu\n", sizeof(float));
  printf ("sizeof double: %lu\n", sizeof(double));

  char str[] = "hello"; //
  int  int_array[] = {0, 1, 2}; //
  float float_array[] = {0.0, 1.0, 2.0, 3.0}; //
  double double_array[] = {0.0, 1.0, 2.0, 3.0, 4.0}; //

  /* huh ? what's going on ? */
  printf ("sizeof array of int: %lu\n", sizeof(int_array));
  printf ("sizeof array of float: %lu\n", sizeof(float_array));
  printf ("sizeof array of double: %lu\n", sizeof(double_array));

  printf ("sizeof array of char: %lu\n", sizeof(str));


}
