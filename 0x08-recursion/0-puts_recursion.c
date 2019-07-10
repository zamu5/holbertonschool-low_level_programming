#include "holberton.h"

/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: declaration
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(*(s + 0));
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}

}
