#include <stdio.h>
/**
 * main - % funtion
 *
 * Return: print the bigger prime number
 */
int main(void)
{
	int i = 1, x, k;
	long int num, mayor = 0;
	num = 612852475143;
	while (i <= num)
	{
		k = 0;
		if (num % i == 0)
		{
			x = 1;
			while (x <= i)
			{
				if (i % x == 0)
				{
					k++;
				}
				x++;
			}
			if (k==2)
			{
				mayor = i;

			}
		}
		i++;
	}
	printf("%ld\n", mayor);
	return (0);
}
