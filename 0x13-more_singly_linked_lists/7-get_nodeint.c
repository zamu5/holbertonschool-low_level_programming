#include "lists.h"
/**
 * get_nodeint_at_index - get the data of a specific node
 * @head: pointer to the head of a list
 * @index: the # of element to look for
 * Return: the value of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cont = 0;
	listint_t *copy;

	copy = head;
	while (copy != NULL)
	{
		if (cont == index)
			return (copy);
		copy = (*copy).next;
		cont++;
	}
	return (NULL);
}
