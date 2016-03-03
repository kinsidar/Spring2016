
#include <stdio.h>

void PrintFloatArray(float Array[], int len);


int main()
{
  float f[3]= {0.0, 1.0, 2.0};
  float f2[3] = {0};
  float f3[3];

  PrintFloatArray(f, 3);
  PrintFloatArray(f2, 3);
  PrintFloatArray(f3, 3);


}

void PrintFloatArray(float Array[], int len)
{
  printf("\n");
  for (int i=0; i < len; i++)
  {
    printf("%f\t", Array[i]);
  }
  printf("\n");
}
