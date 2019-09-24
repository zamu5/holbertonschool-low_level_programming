#include "holberton.h"
/**
 * _abs - % funtion
 *@x: declaration
 * Return: Always 0 (Success)
 */
int _abs(int x)
{
if (x >= 0)
{
return (x);
}
x = x * -1;
return (x);
}
