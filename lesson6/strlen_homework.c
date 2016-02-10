#include <stdio.h>

int stringlength(char str[]);

int main()
{
	char str[] = "The quick brown fox";

	printf ("The length of the string %s is %d\n ",
		str, stringlength(str));
}

int stringlength(char str[])
{
}
