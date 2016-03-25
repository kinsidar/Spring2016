#include <stdio.h>
#include <strings.h>

#define MAX 20

// Array of arrays
char artists[][MAX] =
{
    "madonna",
    "britney spears",
    "bruce springsteen",
    "bruce willis",
    "prince",
};

void find_artist(char search_for[])
{
  // Uncomment the following for debug printf
  //printf("searching for %s\n", search_for);

  int i;
  for (i = 0; i < 5; i++)
  {
    //printf("currently looking at %s\n", artists[i]);

    char *result = strstr(artists[i], search_for);
    //printf("%s\n", result);

    if (result != NULL)
      printf("Artist %i: '%s'\n", i, artists[i]);
  }
}


int main()
{
  char search_for[MAX];
  printf("search for: ");
  fgets(search_for, MAX, stdin);
  search_for[strlen(search_for)- 1] = '\0';

  find_artist(search_for);
}
