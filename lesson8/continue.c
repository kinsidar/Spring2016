#include <stdio.h>

int main()
{
  for ( int ii=0; ii <10 ; ii++)
  {
    if (ii % 2 == 0 )
      continue;
    printf("%d ", ii );
  }
}
