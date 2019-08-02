#include "lists.h"
/**
 * free_list - free all the malloc reservations
 * @head: the first ponter of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = (*head).next;
		free((*head).str);
		free(head);
		head = next;
		if (head != NULL)
			next = (*next).next;
	}
}
