#include"lists.h"
/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/
int pop_listint(listint_t **head)
{
	int c;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	c = tmp->n;
	free(tmp);
	return (c);

}
