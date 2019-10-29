#include "sort.h"
/**
 * radix_sort - sorts an array of integers in ascending
 * order using the Radix sort algorithm
 *
 * @array: input array
 * @size: size of the array
 */
void radix_sort(int *array, size_t size)
{
	int flag = 1, change, n = 10;
	size_t i;

	while (flag)
	{
		change = 0;
		for (i = 1; i <  size; i++)
		{
here:
			if ((array[i - 1] % n) > (array[i] % n))
			{
				array[i - 1] = array[i - 1] + array[i];
				array[i] = array[i - 1] - array[i];
				array[i - 1] = array[i - 1] - array[i];
				change = 1;
				if ((i - 1) > 0)
				{
					i--;
					goto here;
				}
			}
		}
		if (change)
			print_array(array, size);
		n = n * 10;
		if (!change)
			flag = 0;
	}
}
