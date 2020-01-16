#include "search_algos.h"
/**
 * print_array - print array
 * @array: array
 * @size: size of the array
 * Return: nothing
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < (size - 1); i++)
		printf("%i ,", array[i]);
	printf("%i", array[i]);
	printf("\n");
}
/**
 * binary_search - binary search algorithm
 * @array: array
 * @size: size of the array
 * @value: value to locking for
 * Return: the index if value exists otherwize -1
 */
int binary_search(int *array, size_t size, int value)
{
	int medium, ret;

	if (!array)
		return (-1);
	print_array(array, size);
	medium = size % 2 == 0 ? (size / 2) - 1 : size / 2;
	if (array[medium] == value)
		return (medium);
	else if (value > array[medium] && (int)size - (medium + 1) > 0)
	{
		ret = binary_search(array + (medium + 1), (int)size - (medium + 1), value);
		if (ret == -1)
			return (-1);
		else
			return (ret + medium + 1);
	}
	else if (value < array[medium])
	{
		ret = binary_search(array, medium, value);
		if (ret == -1)
			return (-1);
		else
			return (ret);
	}
	else
		return (-1);
	return (0);
}
