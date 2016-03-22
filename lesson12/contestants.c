#include <stdio.h>

/* what does this print */

int main()
{
  int contestants[] = {1, 2, 3};
  int *choice = contestants;

  contestants[0] = 2;
  contestants[1] = contestants[2];
  contestants[2] = *choice;

  printf("I'm going to pick contestant number %i\n", contestants[2]);

  for (int ii=0; ii < 3; ii++)
    printf("%i", contestants[ii]);

  printf("\n");
  return 0;
}
