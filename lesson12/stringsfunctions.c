#include <stdio.h>


void fortune_cookie(char msg[])
{
  printf("Message reads: %s\n", msg);
  printf("Message occupies %lu bytes \n", sizeof(msg));
}

int main()
{
  char quote[] = "Cookies are good for you";

  /* will this work. yes or no why ? */
  fortune_cookie(quote);
}
