#include <stdio.h>

int main()
{

int t ;
for ( ; ; )                         /* infinite loop */
{
  printf("Enter a number: ");
  scanf("%d" , &t) ;
  if ( t == 10 )
    break ;
  printf("You entered %d \n", t );
}

printf("End of an infinite loop...\n");

}
