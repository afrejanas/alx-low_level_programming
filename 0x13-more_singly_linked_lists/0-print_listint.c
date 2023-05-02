#include"lists.h"
/**
 * print_listint - prints all the elements of a list_t list
 * @h: list of nodes
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 1;

	while (h->next)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
	return (c);
}
