#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 *@a: delcaration
 *@b: declaration
 * Return: switch two variables
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
