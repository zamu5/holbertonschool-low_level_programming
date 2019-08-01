#include "lists.h"
/**
 * add_node - add a new element to the list
 * @head:head
 * @str: new element
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *last;

	last = malloc(sizeof(list_t));
	if(last == NULL)
		return (NULL);
	(*last).str = strdup(str);
	(*last).len = strlen(str);
	(*last).next = *head;
	*head = last;
	return (*head);
}
