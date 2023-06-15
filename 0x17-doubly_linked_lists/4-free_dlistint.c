#include"lists.h"
/**
 * free_dlistint - Free list
 *
 * @head: struct
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (head)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
		free(head);
	}
}
