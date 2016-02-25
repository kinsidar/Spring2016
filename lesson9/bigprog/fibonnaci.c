#include <stdio.h>
#include "fibonnaci.h"

void Fibonacci(int limit)
{
  if (limit > LIMIT)
  {
    printf ("Number is too big ! Max is %d", LIMIT);
    return;
  }

  long f0=0, f1=1, temp;

  printf("%7s%19s\n%7s%19s\n",
  " ", "Fibonacci",
  " n","   number\n");

  printf("%7d%19d\n%7d%19d\n", 0,0,1,1); // 1st two cases
  for (int i=2; i <= limit; ++i)
  {
    temp = f1;
    f1 += f0;
    f0 = temp;

    printf("%7d%19ld\n",i, f1 );
  }
}
