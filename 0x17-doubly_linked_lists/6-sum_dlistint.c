#include "lists.h"
/**
 * sum_dlistint - print de sum of all the datas in a list
 * @head: head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *copy;
	int sum = 0;

	if (head == NULL)
		return (0);
	copy = head;
	while (copy != NULL)
	{
		sum = sum + (*copy).n;
		copy = (*copy).next;
	}
	return (sum);
}
