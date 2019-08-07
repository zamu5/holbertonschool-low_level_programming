#include "lists.h"
/**
 * find_listint_loop - find a loop in a list
 * @head: a pointer to the first node in a list
 * Return: listint_t *find_listint_loop(listint_t *head)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *copy1, *copy2;

	copy1 = head;
	if (head == (*head).next)
		return (head);
	if (head == NULL)
		return (NULL);
	while (copy1 != NULL)
	{
		copy1 = (*copy1).next;
		copy2 = head;
		while (copy1 && copy2 != copy1)
		{
			if (copy2 == (*copy1).next)
				return (copy2);
			copy2 = (*copy2).next;
		}
	}
	return (copy1);
}
