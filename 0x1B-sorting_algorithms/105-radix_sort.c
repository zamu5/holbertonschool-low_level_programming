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
	int flag = 1, n = 10;
	size_t i;

	if (!array || size == 1)
		return;
	while (flag)
	{
		flag = 0;
		for (i = 1; i <  size; i++)
		{
here:
			if ((array[i - 1] % n) > (array[i] % n))
			{
				array[i - 1] = array[i - 1] + array[i];
				array[i] = array[i - 1] - array[i];
				array[i - 1] = array[i - 1] - array[i];
				flag = 1;
				if ((i - 1) > 0)
				{
					i--;
					goto here;
				}
			}
		}
		if (flag)
			print_array(array, size);
		n = n * 10;
	}
}
