/* the distance of a marathon in km */

#include <stdio.h>
#define MILES 26

int main()
{
  int miles, yards;
  float kilometers;

  //miles = 26;
  yards = 385;
  kilometers = 1.609 * (MILES + yards / 1760.0);
  printf("\n A marathon is %f kilometers. \n\n", kilometers);
  return 0;
    
}
