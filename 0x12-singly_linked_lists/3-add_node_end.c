#include "lists.h"
/**
 * add_node - add a new element to the list
 * @head:head
 * @str: new element
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *copy, *last;
	int i = 0;

	copy = *head;
	while (str[i] != '\0')
		i++;

	last = malloc(sizeof(list_t));
	if (last == NULL)
		return (NULL);
	(*last).str = strdup(str);
	(*last).len = i;
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
