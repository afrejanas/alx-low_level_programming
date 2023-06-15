#include"lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end
 *
 * @head: struct
 *
 * @n: const int
 *
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *node, *p;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	tmp = *head;
	while (tmp)
	{
		if (tmp->next == NULL)
			p = tmp;
		tmp = tmp->next;
	}
	node->next = NULL;
	node->prev = p;
	p->next = node;
	return (*head);


}
