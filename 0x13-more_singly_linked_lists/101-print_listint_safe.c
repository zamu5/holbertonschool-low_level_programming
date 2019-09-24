#include "lists.h"
/**
 * print_listint_safe - print a safe list
 * @head: pointer to the first element of a list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *copy1, *copy2;
	size_t cont = 0, i;

	copy1 = head;

	while (copy1 != NULL)
	{
		cont++;
		printf("[%p] %d\n", (void *)copy1, (*copy1).n);
		copy1 = (*copy1).next;
		copy2 = head;
		i = 0;
		while (cont > i)
		{
			if (copy1 == copy2)
			{
				printf("-> [%p] %d\n", (void *)copy1, (*copy1).n);
			return (cont);
			}
		copy2 = (*copy2).next;
		i++;
		}
	}
	return (cont);
}
