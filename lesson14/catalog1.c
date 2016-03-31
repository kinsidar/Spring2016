#include <stdio.h>



/* print the catalog entry */
void catalog(const char* name, const char* species, int teeth, int age)
{
  // save_to_catalog(); will write to disk or db or something else.
  printf("Saved: %s. Which is a %s with %i teeth. S/he is %i\n",
    name, species, teeth, age);
}

/* print the label for the pet */
void print(const char* name, const char* species, int teeth, int age)
{
  printf("Name:%s\nSpecies:%s\n%i years old\n%i teeth\n",
    name, species, age, teeth);
}

int main()
{
  catalog("Snappy", "Piranha", 69, 4);
  print("Snappy", "Piranha", 69, 4);

  return 0;
}
