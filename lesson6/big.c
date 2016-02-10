#include <stdio.h>
#define BIG 4000000000    /* 4 BN */

int main()
{

  int x, y = BIG, z = BIG;
  x = y + z;
  printf("Y is %d.  Sum is %d\n", y, x);

  unsigned int a, b = BIG, c= BIG;
  a = b + c;
  printf("B is %u.  Sum is %u\n", b, a);

  long j, k = BIG, l=BIG;
  j = k + l;
  printf("K is %ld.  Sum is %ld\n", k, j);

}
