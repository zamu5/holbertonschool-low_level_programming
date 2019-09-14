#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: head of the list
 * @index: number of node
 * Return: the node of the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *copy;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	copy = head;
	while (i != index)
	{
		if (copy == NULL)
			return (NULL);
		copy = (*copy).next;
		i++;
	}
	return (copy);
}
