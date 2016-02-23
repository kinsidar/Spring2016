#include <stdio.h>

void BadSwap(int a, int b)
{
  int tmp;

  tmp = a;
  a = b;
  b = tmp;
}

/* it's called passing by reference or
   passing a pointer to */
void Swap(int pA, int *pB)
{
  int tmp;

  tmp = *pA;
  *pA = *pB;
  *pB = tmp;
}

int main()
{
  int a = 1, b=2;

  printf("Before swap: A: %d, B: %d\n ", a, b);

  BadSwap(a, b);
  printf("AFter  swap: A: %d, B: %d\n ", a, b);

  Swap(&a, &b);
  printf("AFter  Good swap: A: %d, B: %d\n ", a, b);

}
