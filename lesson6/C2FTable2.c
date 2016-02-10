#include <stdio.h>

int main()
{
	float celsius, fahr;
	printf("\nFahrenheit \t celsius\n");
	printf("========== \t =======\n");
	for (fahr=0; fahr<= 300; fahr = fahr+10)
	{
		celsius = 5/9 * (fahr - 32);
		printf ("%10d \t %7d \n",fahr, celsius);
	}
	return 0;
}
