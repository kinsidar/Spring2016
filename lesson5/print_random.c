/* illustrates the use of a few standard library functions */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("\n%s\n%s",
      "Some Randomly distributed integers will be printed. ",
      "How many do you want to see \n");
    scanf("%d", &n);

    printf ("\nyou typed %d \n", n);
    for (i = 0; i < n; i++)
    {
      /* insert a new line every 10 numbers */
      if (i % 3 == 0)
        putchar('\n');

      /* print a random number using the rand()
        library function */
      printf("%-15d \t", rand());

    }

    printf("\n\n");
    return 0;

}
