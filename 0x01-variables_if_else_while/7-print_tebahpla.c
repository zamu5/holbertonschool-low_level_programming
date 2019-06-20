#include <stdio.h>
/**
 * main - lets show the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 122 ; x >= 97 ; x--)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
