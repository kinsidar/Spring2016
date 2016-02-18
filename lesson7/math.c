#include <stdio.h>
#include <math.h>

int main()
{
  printf("Powers\n");
  for(int i=0; i < 10; i++)
  {
    printf("%.2f \t", pow(i, i));
  }


  printf("\nSquare roots\n");
  for (int i=0; i<10; i++)
    printf("%.4f \t ", sqrt(i));

  printf("\n");

}
