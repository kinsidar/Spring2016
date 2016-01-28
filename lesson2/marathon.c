/* the distance of a marathon in km */

#include <stdio.h>

#define MILES 26.0
#define KM_PER_MILE 1.609

int main()
{
  /*const float KM_PER_MILE = 1.609; */
  int yards;
  float kilometers;

  yards = 385;
  kilometers = KM_PER_MILE * (MILES + yards / 1760.0);
  printf("\n A marathon is miles: %f and %f kilometers. \n\n", 
  	MILES, kilometers);
  return 0;
    
}
