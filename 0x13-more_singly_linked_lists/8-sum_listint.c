#include "lists.h"
/**
 * sum_listint - sum all the data of a list
 * @head: pointer to the first element of a list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;
	listint_t *copy;

	if (head == NULL)
		return (0);
	copy = head;
	while (copy != NULL)
	{
		sum = (*copy).n + sum;
		copy = (*copy).next;
	}
	return (sum);
}
