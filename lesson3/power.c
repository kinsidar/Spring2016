#include <stdio.h> 


int cats(int x, int y);

int main()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf ("%d %d %d \n ", i, cats(2, i), cats(-3, i));
	}
	return 0;

}

int cats(int base, int n)
{
	int i, p;

	p = 1;
	for (i =1; i <=n ; i++)
	{
		p = p * base;
	}
	return p;
}