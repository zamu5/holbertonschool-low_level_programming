#include <stdio.h>
/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: array
 * @size: size of the array
 * @action: Pointer function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action == NULL || size == '0' || array == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
