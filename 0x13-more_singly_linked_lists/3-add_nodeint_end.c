#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of the list
 * @head: is the head of the list
 * @n: the int data of the node
 * Return: he address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *copy, *last;

	copy = *head;
	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);
	(*last).n = n;
	if (copy == NULL)
		*head = last;
	else
	{
		while ((*copy).next != NULL)
			copy = (*copy).next;
		(*copy).next = last;
	}
	return (*head);
}
