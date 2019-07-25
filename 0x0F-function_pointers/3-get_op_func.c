#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - pointer to correct function
 * @s: opertator
 * Return: a pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i = 0;

	while (*ops[i].op != *(s + 0))
	{
		if (s[1] != '\0')
			return (NULL);
		i++;
	}
	return (*ops[i].f);
	return (0);
}
