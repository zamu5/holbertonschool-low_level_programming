#include "lists.h"
/**
 * delete_nodeint_at_index - delete a specific node
 * @head: a duble pointer to the first element of the list
 * @index: index of the list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *copy;
	size_t cont = 0;

	copy = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	while (copy != NULL)
	{
		if (index == 0)
		{
			*head = (**head).next;
			free(copy);
			return (1);
		}
		if (cont == index - 1)
		{
			aux = copy;
			copy = (*copy).next;
			(*aux).next = (*copy).next;
			free(copy);
			return (1);
		}
		copy = (*copy).next;
		cont++;
	}
	return (-1);
}
