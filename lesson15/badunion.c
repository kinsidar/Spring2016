#include <stdio.h>

typedef union {
  float weight;
  int count;
} cupcake;

/*
  What do we think happens ?
*/

int main()
{
  /* BUG BUG; by mistake we set the weight and not the count */
  cupcake order = {2};

  printf ("Cupcakes quantity : %i \n", order.count);
  
}
