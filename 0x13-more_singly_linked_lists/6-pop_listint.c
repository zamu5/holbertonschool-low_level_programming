#include "lists.h"
/**
 * pop_listint - delete the head of a list
 * @head: a double pointer for the head of a list
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	size_t n;
	listint_t *copy;

	copy = *head;
	free(*head);
	if (copy == NULL)
		return (0);
	n = (*copy).n;
	*head = (*copy).next;
	return (n);
}
