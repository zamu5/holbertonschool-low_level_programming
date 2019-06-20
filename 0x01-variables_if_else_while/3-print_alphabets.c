#include <stdio.h>
/**
 * main - lets show the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 97;
	char z = 65;

	for (x = 97 ; x <= 122 ; x++)
	{
	putchar(x);
	}
	for (z = 65 ; z <= 90 ; z++)
	{
	putchar(z);
	}
	putchar('\n');
	return (0);
}
