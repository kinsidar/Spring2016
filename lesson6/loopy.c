/*
 *  This program illustrates PreIncrement &
 *  PostIncrement using for loops and while loops
 */

#include <stdio.h>
#define MAX 10

int main()
{
  int i;

  /* Note how both PreIncrement &
     PostIncrement give the same value
     using a for loop
  */
  printf("\n for PostIncrement \n");
  for(i=0; i < MAX; i++)
    printf("%5d", i);

  printf("\n for PreIncrement \n");
  for(i=0; i < MAX; ++i)
    printf("%5d", i);

  printf("\n");

  printf("\n while PostIncrement \n");
  i = 0;

  /* i gets compared and then incremented */
  while(i++ < MAX)
    printf("%5d", i);


  printf("\n while PreIncrement \n");
  i = 0;

  /* i gets incremented and then compared */
  while(++i < MAX)
    printf("%5d", i);

  printf("\n");

}
