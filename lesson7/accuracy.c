#include <stdio.h>
#include <float.h>


int main()
{
  float float_ten = 0.1234567890;
  float float_twenty = 0.12345678901234567890;

  printf("float 10 dec: %.10f \n", float_ten);
  printf("float 20 dec: %.20f \n", float_twenty);

  double double_ten = 0.1234567890;
  double double_twenty = 0.12345678901234567890;
  printf("double 10 dec: %.10f \n", double_ten);
  printf("double 20 dec: %.20f \n", double_twenty);

  long double long_double_ten = 0.1234567890;
  long double long_double_twenty = 0.12345678901234567890;
  printf("long double 10 dec: %.10Lf \n", long_double_ten);
  printf("long double 20 dec: %.20Lf \n", long_double_twenty);

  printf("float max: %G\n", FLT_MAX);
  printf("float min: %G\n", FLT_MIN);

  printf("double max: %g\n", DBL_MAX);
  printf("double min: %g\n", DBL_MIN);

  printf("Long double max %Lg\n", LDBL_MAX);
  printf("Long double min %Lgf\n", LDBL_MIN);


}
