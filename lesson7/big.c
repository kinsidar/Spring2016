#include <stdio.h>
#define BIG 4000000000    /* 4 BN */

int main()
{

  int x, y = BIG, z = BIG;
  x = y + z;
  printf("*int*: \t\t\tBig is %d.  Sum is %d\n", y, x);

  unsigned int a, b = BIG, c= BIG;
  a = b + c;
  printf("*unsigned int*: \tBig is %u.  Sum is %u\n", b, a);

  long j, k = BIG, l=BIG;
  j = k + l;
  printf("*long*: \t\tBig is %ld.  Sum is %ld\n", k, j);

}
