#include "lists.h"
/**
 * list_len - calculate the len of a list
 * @h: A pointer to struct list
 * Return: the len of the list
 */
size_t list_len(const list_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		h = (*h).next;
		cont++;
	}
	return (cont);
}
