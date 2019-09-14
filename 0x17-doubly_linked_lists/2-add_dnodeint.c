#include "lists.h"
/**
 * add_dnodeint - add a new node at the begining of a list
 * @head: head of the list
 * @n: value of the new node
 * Return: the adrres of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = *head;
	(*new).prev = NULL;
	if (*head != NULL)
		(**head).prev = new;
	*head = new;
	return (*head);
}
