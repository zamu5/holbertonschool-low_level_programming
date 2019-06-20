#include <stdio.h>
/**
 * main - lets show the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	char y = '\n';

	for (x = 'a' ; x <= 'z' ; x++)
	{
	putchar(x);
	}
	putchar(y);
	return (0);
}
