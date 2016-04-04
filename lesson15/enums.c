#include <stdio.h>


typedef enum {
  COUNT, POUNDS, PINTS
} unit_of_measure;

/* a union to hold the quantity of the order
   only one of the fields is used */
typedef union{
   short count;
   float weight;
   float volume;
} quantity;

/* a struct that defines the fruit order */
typedef struct {
  const char *name;
  const char *country;
  quantity amount; // union
  unit_of_meausure; // units;
} fruit_order;


/* print our fruit order */
void display(fruit_order o);

int main()
{
  fruit_order apples = { "apples", "usa", .amount.count = 144, };
  fruit_order strawberries = { "strawberries", "Spain", .amount = 17.6, POUNDS};
  fruit_order oj = {"orange juice", "U.S.A", .amount.volume =10.5, };

  display(apples);
  display(strawberries);
  display(oj);

}

/* TODO: fix this functions*/
void display(fruit_order order)
{
  printf ("This order contains ");

  if (  == PINTS){
    printf ("%2.2f pints of %s\n", order.amount , order.name);
  }
  else if (  ==    ){
    printf ("%2.2f lbs of %s\n", order.amount.weight, order.name);
  }
  else {
    printf ("%i %s\n, order.amount.   , order.name");
  }

}
