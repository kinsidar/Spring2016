#include <stdio.h>
#include <stdlib.h>



int main()
{
  int lab_a[] = {90, 78, 45, 89, 65 };
  int lab_b[] = {34, 67, 89};

  int size_a = sizeof(lab_a)/sizeof(int);
  int size_b = sizeof(lab_b)/sizeof(int);

  int total_size = size_a + size_b;
  printf("total size to allocate: %d\n", total_size);

  /* allocate enough memory */
  int* p_grades = calloc(total_size, sizeof(int));

  for (int ii=0; ii < size_a; ii++)
    p_grades[ii] = lab_a[ii];

  for (int j=0; j < size_b; j++)
  {
    printf("size_a + j => %d\n", size_a + j);
    p_grades[size_a + j] = lab_b[j];
  }

  printf ("The total array is: \n");
  for (int k=0; k < total_size; k++)
    printf("%d, ", p_grades[k]);

  printf("\n");

  /* remember to free */
  free(p_grades);
  p_grades = NULL; /* good practive */

}
