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

	if (cmp == NULL || size == 0 || array == NULL)
		return (0);
	for (x = 0; x < size; x++ )
	{
		y = cmp(array[x]);
		if (y != 0)
			return (x);
	}
	return(0);
}
