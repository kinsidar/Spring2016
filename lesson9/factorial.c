#include <stdio.h>

int factorial(int n);
int factorial_iter(int n);

int main()
{
  int num;
  printf("Enter a number for factorial\n");
  scanf("%d",&num);

  printf("The factorial for %d is %d\n", num, factorial(num));
  printf("Iterative factorial for %d is %d\n", num, factorial_iter(num));
}

int factorial(int n)
{
  if (n <= 1)
    return 1;
  else
    return factorial(n-1) * n;
}


int factorial_iter(int n)
{
  int fact = 1;
  while( n >= 1)
  {
    fact = fact * n;
    n = n - 1;
  }

  return fact;
}
