#include <stdio.h>


struct preferences {
  const char *food;
  float exercise_hours;
};

/* our pet structure */
struct pet {
	const char *name;
	const char *species;
	int teeth;
	int age;
  struct preferences care;
};


/* print the catalog entry */
void catalog(struct pet p)
{
  // save_to_catalog(); will write to disk or db or something else.
  printf("Saved: %s. Which is a %s with %i teeth. S/he is %i\n",
    p.name, p.species, p.teeth, p.age);

  printf("Your pet: %s, Needs to eat %s and exercise %f hours",
      p.name, p.care.food, p.care.exercise_hours);

}

/* print the label for the pet */
void print(struct pet p)
{
  printf("Name:%s\nSpecies:%s\n%i years old\n%i teeth\n",
    p.name, p.species, p.teeth, p.age);

}

int main()
{
  struct pet snappy = {"Snappy", "Piranha", 69, 4, {"meat", 7.5}};

  catalog(snappy);
  print(snappy);

  return 0;
}
