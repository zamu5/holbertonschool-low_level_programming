#include "holberton.h"
/**
 * print_sign - prints 1 if char is lowercase or o if not
 * @n: The character to say if is lower
 * Return: 0 if compilation is succesfully
 */
int print_sign(int n)
{
if (n > 48)
{
_putchar('+');
return (1);
}
else if (n == 48)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
