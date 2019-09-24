#include "holberton.h"
/**
 * _islower - prints the alphabet in lowercase
 * @c: is lower
 * Return: 0 if compilation is succesfully
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
