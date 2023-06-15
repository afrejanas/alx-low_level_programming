#include "lists.h"
/**
 * dlistint_len - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h && ++n)
	{
		h = h->next;
	}
	return (n);
}
