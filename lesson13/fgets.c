#include <stdio.h>


int main()
{
  char food[5];

  printf("Enter your favorite food: ");
  fgets(food, sizeof(food), stdin);
  printf("Favorite food %s\n", food);
}
