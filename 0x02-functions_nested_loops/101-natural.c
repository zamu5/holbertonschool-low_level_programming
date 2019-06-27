#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z, c, valor, suma3 = 0, suma5 = 0, sumatotal = 0;

	valor = 1024;

	for (z = 0 ; z < valor ; z = z + 3)
	{
		suma3 = suma3 + z;
	}
	for (c = 0 ; c < valor ; c = c + 5)
	{
		if ((c % 3) != 0)
		{
			suma5 = suma5 + c;
		}
	}
	sumatotal = suma3 + suma5;
	printf("%d\n", sumatotal);
}
