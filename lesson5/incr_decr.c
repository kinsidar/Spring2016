#include <stdio.h>

int main()
{
  int a, b, c = 0;

  a = ++c; /* a = 1, c =1 */
  b = c++; /* b =1, c = 2 */

  printf("%d, %d, %d \n", a, b, c++);

  printf("c is %d \n", c);

}
