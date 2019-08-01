#include "lists.h"
/**
 * print_list - print all the elements foa list
 * @h: pointer to next
 * Return: the number od nodes
 */
size_t print_list(const list_t *h)
{
	size_t cont;

	while (h != NULL)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", (*h).len, (*h).str);
		cont++;
		h = (*h).next;
	}
	return (cont);
}
