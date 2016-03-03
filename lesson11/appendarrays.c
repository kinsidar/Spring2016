#include <stdio.h>
#include <stdlib.h>



int main()
{
  int lab_a[] = {90, 78, 45, 89, 65 };
  int lab_b[] = {34, 67, 89};

  int size_a = sizeof(lab_a)/sizeof(int);
  int size_b = sizeof(lab_b)/sizeof(int);

  int total = size_a + size_b;
  int total_bytes = sizeof(lab_a) + sizeof(lab_b);
  //int *c = calloc(total_bytes, sizeof(int));
  int *c = malloc(total_bytes);

  /* copy all the elements from a into the new array */
  int j = 0;
  for(j=0; j < size_a; j++)
    c[j] = lab_a[j];

  /* copy b into the new array */
  for(int k=0; k < size_b; k++)
    c[k + j] = lab_b[k];

  // print out the array
  for(int ii=0; ii< total; ii++)
    printf ("%d, ", c[ii]);

  free(c);

}
