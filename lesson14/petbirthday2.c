#include <stdio.h>

/* our pet structure */
typedef struct  {
	const char *name;
	const char *species;
	int teeth;
	int age;
} pet;


/* print the catalog entry */
void catalog(pet p)
{
  // save_to_catalog(); will write to disk or db or something else.
  printf("Saved: %s. Which is a %s with %i teeth. S/he is %i\n\n\n",
    p.name, p.species, p.teeth, p.age);

  /* TODO */
  // printf ("She likes to eat %s\n", );
}

/* print the label for the pet */
void print( pet p)
{
  printf("Name:%s\nSpecies:%s\n%i years old\n%i teeth\n\n",
    p.name, p.species, p.age, p.teeth);
}

/* Our pet is one year older
1.  Pass a pointer
2.  use the arrow operator to reference it.
*/

void happy_birthday( pet *p)
{
  p->age ++;
  printf("Congrats !! %s Is %d years old\n\n\n",
    p->name, p->age);
}

int main()
{
  pet snappy = {"Snappy", "Piranha", 69, 4};

  catalog(snappy);

  puts("---- Before bday\n");
  print(snappy);

  happy_birthday(&snappy);

  puts("---- After bday\n");
  print(snappy);

  return 0;
}
