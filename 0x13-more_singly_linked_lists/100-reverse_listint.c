#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: a double pointer to the first element of the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *copy, *aux = NULL;

	while (*head != NULL)
	{
		copy = (**head).next;
		(**head).next = aux;
		aux = *head;
		*head = copy;
	}
	*head = aux;
	return (*head);
}
