#include "lists.h"
/**
 * free_listint2 - free the list
 * @head: a pointer to the head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *copy, *copy2;

	if (head == NULL)
		return;
	copy = *head;
	while (copy != NULL)
	{
		copy2 = copy;
		copy = (*copy2).next;
		free(copy2);

	}
	*head = NULL;
}
