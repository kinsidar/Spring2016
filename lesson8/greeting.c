#include <stdio.h>

void greeting(char message[], char name[]);

int main()
{
  char name[50];
  printf("what's your name ? \n");
  scanf("%s", name);

  greeting("hello", name);
  greeting("bye bye", name);

}


void greeting(char message[], char name[])
{
  printf("%s %s\n", message, name);
}
