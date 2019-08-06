#include "lists.h"
/**
 * free_listint - free the list
 * @head: a pointer to the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *copy;

	if (head == NULL)
		free(head);
	while (head != NULL)
	{
		copy = (*head).next;
		free(head);
		head = copy;
	}
	return;

}
