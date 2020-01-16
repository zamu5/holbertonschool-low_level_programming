#include "search_algos.h"
/**
 * jump_search - jump search
 * @array: array
 * @size: size of the array
 * @value: value to loocking for
 * Return: index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int ret = -1, s, i = 0, flag = 0, flag2 = 0;

	s = sqrt((int)size);
	do {
		if (flag2)
			i = i + s;
		if ((array[i] >= value && !flag) || (i > (int)size && !flag))
		{
			printf("Value found between indexes [%i] and [%i]\n", i - s, i);
			i = i - s;
			s = 1;
			flag = 1;
		}
		if (i < (int)size)
			printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value && flag)
		{
			ret = i;
			break;
		}
		flag2 = 1;
	} while (i < (int)size);
	return (ret);
}
