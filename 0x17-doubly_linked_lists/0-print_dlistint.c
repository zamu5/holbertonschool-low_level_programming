#include "lists.h"
/**
 * print_dlistint - print a list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while ((*h).prev != NULL)
		h = (*h).prev;
	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		i++;
	}
	return (i);
}
