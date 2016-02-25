#include <stdio.h>

int fibonnaci(int n);

int main()
{
  printf("fibonnaci of 10 is %d\n", fibonnaci(10) );
}

int fibonnaci(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fibonnaci(n-1) + fibonnaci(n-2);

}
