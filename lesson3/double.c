#include <stdio.h>

int main()
{
	char c;
	while (printf("%c", &c) == 1) {
		printf ("%c", c);
		printf ("%c", c);
		printf ("\n")
	}
	return 0;
}