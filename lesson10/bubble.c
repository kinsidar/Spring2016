#include <stdio.h>
#define SIZE 5
#define FALSE 0
#define TRUE 1


void swap(int *, int *);
void printarray(int a[], int size);

void bubblesort(int a[], int min, int max)     /* n is the size of a[] */
{

  int swapped = TRUE;
  do {

    swapped = FALSE;
    for(int i = min; i < max; i++)
    {

      if (a[i+1] < a[i])
      {
        printf("i=%d. swaping: %d and %d \n", i, a[i+1], a[i]);
        swap(&a[i+1], &a[i]);
        swapped = TRUE;
      }
    }

  } while(swapped);
}

void bubble2(int a[], int n)
{
    int i, j;
    for (i=0; i < n-1; i++ )
      for (j=n-1; j > i; j--)
        if (a[j-1] > a[j])
        {
          printf("i=%d. j=%d. swaping: %d and %d \n", i, j, a[j-1], a[j]);
          swap(&a[j-1], &a[j]);
        }
}


int main()
{
  int array[] = {45, 100,5, 10,60};

  printf("Before sorting: \n");
  printarray(array, SIZE);
  printf("\n");

  printf("After sorting: \n");
  //bubblesort(array, 0, SIZE);
  bubble2(array, SIZE);
  printarray(array, SIZE);
  printf("\n");

}

void printarray(int a[], int size)
{
    for(int ii=0; ii < size; ii++)
      printf("%d ",a[ii]);
}

void swap(int *pA, int *pB)
{
  int temp;

  temp = *pA;
  *pA = *pB;
  *pB = temp;
}
