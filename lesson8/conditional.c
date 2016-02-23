#include<stdio.h>

int main()
{
  int num;

  printf("Enter a Number : ");
  scanf("%d",&num);

  (num%2 == 0) ? printf("Even\n") : printf("Odd\n ");

}
