#include <stdio.h>

void change_it(int value);

int main()
{
	int i = 1;

	printf ("before changing it: %d \n", i);
	change_it(i);
	printf ("after changing it: %d \n", i);



}

void change_it(int value)
{
	value = 42;
}