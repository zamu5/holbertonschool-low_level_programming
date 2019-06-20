#include <stdio.h>
/**
 * main - print all the alphabet with exceptions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	char y = '\n';

	for (x = 'a' ; x <= 'z' ; x++)
	{
	if (x != 'e' && x != 'q')
	{
	putchar(x);
	}
	}
	putchar(y);
	return (0);
}
