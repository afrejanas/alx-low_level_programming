#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list of nodes
 * Return: numbers of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		h = h->next;
		c++;
	}
	return (c);
}
