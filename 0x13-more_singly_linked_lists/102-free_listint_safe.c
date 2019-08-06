#include "lists.h"
/**
 * free_listint_safe - free a safe list
 * @h: pointer to the first element of a list
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *copy1, *copy2, *copy3;
	size_t cont = 0, i;

	copy1 = *h;

	while (copy1 != NULL)
	{
		cont++;
		copy3 = copy1;
		copy1 = (*copy1).next;
		free(copy3);
		copy2 = *h;
		i = 0;
		while (cont > i)
		{
			if (copy1 == copy2)
			{
				*h = NULL;
				return (cont);
			}
			copy2 = (*copy2).next;
			i++;
		}
	}
	*h = NULL;
	return (cont);
}
