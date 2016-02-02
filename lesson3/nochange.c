#include <stdio.h>

int change_it(int value);

int main()
{
	int i = 1;

	printf ("before changing it: %d \n", i);
	i = change_it(i);
	printf ("after changing it: %d \n", i);

	return 0;


}

int change_it(int value)
{
	value = 42;
	printf("value inside change_id %d \n", value);

	return value;
}