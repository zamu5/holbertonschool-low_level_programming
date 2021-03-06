#include "lists.h"
/**
 * listint_len - count all the nodes of a list
 * @h: pointer to the fistr node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		h = (*h).next;
		cont++;
	}
	return (cont);
}
