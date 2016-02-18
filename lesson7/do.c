#include <stdio.h>

int main()
{
  int i = 0;
  int sum = 0;

  do
  {
    sum += i;
    printf("\n Enter a number: ");
    scanf("%d", &i);
    printf("\n you entered: %d", i);
  } while(i > 0);

  printf("done\n");

}
