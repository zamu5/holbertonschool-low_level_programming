#include <stdio.h>
/**
 * int_index - Write a function that searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, y;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		y = cmp(array[x]);
		if (y != 0)
			return (x);
	}
	return (-1);
}
