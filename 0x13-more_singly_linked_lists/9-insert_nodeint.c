#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node in the index position
 * @head: double pointer to the fisrt position of the list
 * @idx: index position of the list
 * @n: new data for new node
 * Return: the adrress of new position
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy1 = NULL;
	unsigned int cont = 0;

	copy1 = *head;
	while (copy1 != NULL && idx != 0)
	{
		if (cont == (idx - 1))
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			(*new).n = n;
			(*new).next = (*copy1).next;
			(*copy1).next = new;
			return (*head);
		}
		cont++;
		copy1 = (*copy1).next;
	}
	return (NULL);

}
