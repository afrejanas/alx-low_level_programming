#include"lists.h"
/**
 * get_dnodeint_at_index - Nth node
 *
 * @head: pointer to head node
 *
 * @index: int
 *
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	tmp = head;
	if (head == NULL)
		return (NULL);
	while (index && tmp != NULL)
	{
		tmp = tmp->next;
		index--;
	}
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
