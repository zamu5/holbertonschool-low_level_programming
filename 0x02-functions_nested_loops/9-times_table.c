#include "holberton.h"
/**
 * times_table - % funtion
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
  int x, y, z = 0, d, u;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
d = z / 10;
u = z % 10;
if (x != 0)
{
if (y < 9)
{
if (z <= 9)
{
_putchar(32);
_putchar(32);
_putchar(z + '0');
_putchar(44);
}
else
{
_putchar(32);
_putchar(d + '0');
_putchar(u + '0');
_putchar(44);
}
}
else 
{
if (z <= 9)
{
_putchar(32);
_putchar(32);
_putchar(z + '0');
_putchar('\n');
}
else
{
_putchar(32);
_putchar(d + '0');
_putchar(u + '0');
_putchar('\n');
}
}
}
else 
{
if (y < 9)
{
_putchar(32);
_putchar(32);
_putchar(z + '0');
_putchar(44);
}
else 
{
_putchar(32);
_putchar(32);
_putchar(z + '0');
_putchar('\n');
}
}
}
}
}
