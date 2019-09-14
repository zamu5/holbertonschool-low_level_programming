#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end
 * @head: head of the list
 * @n: value of the new node
 * Return: the addres of tthe new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *copy;

	copy = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;
	if (copy == NULL)
		(*new).prev = copy, *head = new;
	else
	{
		while ((*copy).next != NULL)
			copy = (*copy).next;
		(*new).prev = copy;
		(*copy).next = new;
	}
	return (new);
}
