#include "holberton.h"
/**
 * print_alphabet_x10- check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int x, c = 0;

while (c <= 10)
{
for (x = 97; x <= 122; x++)
{
_putchar(x);
}
_putchar('\n');
c++;
}
}
