#include <stdio.h>
/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r:buffer size
 * Return: add
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int length1, length2, x, max, aux, carry ;

	for(length1 = 0; n1[length1] != '\0'; length1++)
		;
	for(length2 = 0; n2[length2] != '\0'; length2++)
		;
	max = length1 > length2 ? length1 : length2;
	if((max + 1) > size_r)
		return (0);
	r[size_r] = '\0';
	size_r--;
	length1--;
	length2--;
	for (x = max, carry = 0, aux = 0; x > 0; x--, length1--, length2--)
	{
		aux = (((n1[length1] + '0') + (n2[length2] + '0') + carry) / 10);
		carry = ((n1[length1]+ '0') + (n2[length2] + '0') + carry) % 10;
		r[x] = aux;
	}
	return (r);
}
