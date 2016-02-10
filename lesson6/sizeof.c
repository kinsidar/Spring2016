/* compute the size of some fundamental types. */

#include <stdio.h>

int main()
{
  printf("The size of some fundamental types is computed. \n\n");
  printf("         char:%3lu\n", sizeof(char) );
  printf("        short:%3lu\n", sizeof(short) );
  printf("          int:%3lu\n", sizeof(int) );
  printf("         long:%3lu\n", sizeof(long) );
  printf("     unsigned:%3lu\n", sizeof(unsigned) );
  printf("long unsigned:%3lu\n", sizeof(long unsigned) );
  printf("        float:%3lu\n", sizeof(float) );
  printf("       double:%3lu\n", sizeof(double) );
  printf("  long double:%3lu\n", sizeof(long double) );

}
