/* Double.c
demonstrates input with scanf
demonstrates how to get data from an input file into the Program

*/

#include <stdio.h>

int main()
{
	char c;
	int count;

	while (scanf("%c", &c) == 1) {
		printf ("%c", c);
		printf ("%c", c);

	}
	return 0;
}
