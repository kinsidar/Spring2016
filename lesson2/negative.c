/*
 * program that prints out negative if the number is less
 * than 0 otherwise it prints positive. 
 */

#include <stdio.h>

int main()
{
	int num;
	printf("Put in any number yo");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("Negative yo");
	}
	else if (num == 0)
	{
		printf("Zero");
	}
	else
	{
		printf("Positvely not negative \n");
	}

    return 0;
}
