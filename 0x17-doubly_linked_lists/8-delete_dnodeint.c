#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node
 * @head: head of the list
 * @index: number of node to be deleted
 * Return: 1 with success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t1, *t2, *t3;
	unsigned int i = 0;

	t1 = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	while (t1 != NULL)
	{
		if (i == (index - 1))
		{
			if ((*t1).next == NULL)
				return (-1);
			t2 = (*t1).next;
			t3 = (*t2).next;
			(*t1).next = t3;
			(*t3).prev = t1;
			free(t2);
			return (1);
		}
		if (index == 0)
		{
			if ((*t1).next != NULL)
			{
				t2 = (*t1).next;
				(*t2).prev = NULL;
				*head = t2;
				free(t1);
				return (1);
			}
			if (t1 == NULL)
				return (-1);
			free(t1);
			*head = NULL;
			return (1);
		}
		i++;
		t1 = (*t1).next;
	}

	return (-1);
}
