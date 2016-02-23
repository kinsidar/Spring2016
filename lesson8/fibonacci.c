#include <stdio.h>

#define LIMIT 46

int main()
{
  long f0=0, f1=1, temp;  

  printf("%7s%19s%29s\n%7s%19s%29s\n%7s%19s%29s",
  " ", "Fibonacci", "Fibonacci",
  " n","   number", "Quotient",
  "--","_________", "________\n");

  printf("%7d%19d\n%7d%19d\n", 0,0,1,1); // 1st two cases
  for (int i=2; i <= LIMIT; ++i)
  {
    temp = f1;
    f1 += f0;
    f0 = temp;

    printf("%7d%19ld%29.16f\n",i, f1, (double)f1/f0 );
  }

}
