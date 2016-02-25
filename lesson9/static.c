#include <stdio.h>

int f();

int main()
{
  printf ("Times called %d\n", f());

  printf ("Times called %d\n", f());

}

int f()
{
  static int a = 1;
  return a++;
}
