#include <stdio.h>

int main()
{
  printf("line 5");

  char *cards = "JQK";
  char a_card = cards[2];

  printf("line 9");

  cards[2] = cards[1];
  cards[1] = cards[0];
  cards[0] = cards[2];
  cards[2] = cards[1];
  cards[1] = a_card;

  // what will be printed here ?
  puts(cards);
  
  printf("line 17");

}
