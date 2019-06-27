#include <stdio.h>
/**
 * main - % funtion
 *
 * Return: Always 0 (Success)
 */
void main(void)
{
	int x;

	for (x = 1 ; x <= 100 ; x++)
	{
		if (x % 3 == 0)
		{
			if (x % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
