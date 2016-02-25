#include <stdio.h>

int sigma (int n);

int main()
{
  printf ("%d\n", sigma(5));
}

int sigma (int n)
{
  if (n == 1)
    return 1;
  else
    return n + sigma(n-1);
}
