#include "holberton.h"
/**
 * _isdigit - Entry point
 *@c: declaration
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
