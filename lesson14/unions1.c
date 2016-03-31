#include <stdio.h>


typedef union{
   short count;
   float weight;
   float volume;
} quantity;


typedef struct {
  const char *name;
  const char *country;
  quantity amount;
} fruit_order;


void print(fruit_order o)
{
  printf ("one order of: %s, from %s\n. Quantity %.2f",
    o.name, o.country, o.amount.weight);
}

int main()
{
  fruit_order apples = { "apples", "usa", .amount.weight =4.2};

  print(apples);
}
