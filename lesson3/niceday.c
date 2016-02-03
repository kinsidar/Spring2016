/* have a nice day
Program demonstrates:
1. How to get data using getchar()
2.

*/

#include <ctype.h> // for isalpha
#include <stdio.h>

#define MAXSTRING 100

int main()
{
	char c, name[MAXSTRING];
	int  i, sum = 0;

	printf("\nHi! What is your name ?  ");
	for (i=0;
		( c = getchar() ) != '\n';
		++i)
	{
		name[i] = c;
		if (isalpha(c))
			sum+=c;
	}

	name[i] = '\0';
	printf("\n Nice to meet you %s ", name);
	printf("\n Your name spelled backwards is ");
	for ( --i; i>= 0; --i)
		putchar(name[i]);

	printf("\n The letters in your name add up to ==> %d ", sum);
	printf("\n Have a nice day	\n\n!!");

}
