#include <stdio.h>

void Swap1(int a, int b)
{
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

void Swap2(int *pA, int *pB)
{
  int tmp;
  tmp = *pA;
  *pA = *pB;
  *pB = tmp;
}

int main()
{
  /* what's printed here */

  int a = 1, b=2;
  printf("Before swap1: A: %d, B: %d\n ", a, b);
  Swap1(a, b);
  printf("After  swap1: A: %d, B: %d\n ", a, b);
  Swap2(&a, &b);
  printf("After  swap2: A: %d, B: %d\n ", a, b);
}
