#include <stdio.h>

struct pet{
  const char* name;
  const char* species;
  int age;
  int teeth;
};

/* print the catalog entry */
void catalog(struct pet p)
{
  // save_to_catalog(); will write to disk or db or something else.
  printf("Saved: %s. Which is a %s with %i teeth. S/he is %i\n",
    p.name, p.species, p.teeth, p.age);
}

/* print the label for the pet */
void print(struct pet p)
{
  printf("Name:%s\nSpecies:%s\n%i years old\n%i teeth\n",
    p.name, p.species, p.teeth, p.age);
}

int main()
{
  struct pet snappy = {"Snappy", "Piranha", 69, 4};

  catalog(snappy);
  print(snappy);
  return 0;
}
