#include "holberton.h"
/**
 * print_last_digit - % funtion
 *@x: declaration
 * Return: Always 0 (Success)
 */
int print_last_digit(int x)
{
x = x % 10;
 if (x < 0)
{
x = x * -1;
}
_putchar(x + '0');
return (x % 10);
}
