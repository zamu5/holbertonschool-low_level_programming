#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	while (head)
	{
		copy = head;
		head = (*head).next;
		free(copy);
	}
}
