#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node in an index
 * @h: head of the list
 * @idx: index
 * @n: value of the new node
 * Return: the addres of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy, *temp, *new;
	unsigned int i = 1;

	copy = *h;

	if (h == NULL)
		return (NULL);
	while (i < idx)
	{
		i++;
		copy = (*copy).next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	if (!idx)
	{
		(*new).next = copy;
		(*copy).prev = new;
		(*new).prev = NULL;
		*h = new;
	}
	else
	{
		temp = (*copy).next;
		(*new).next = temp;
		(*temp).prev = new;
		(*new).prev = copy;
		(*copy).next = new;
	}
	return (new);
}
