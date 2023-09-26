#include "lists.h"
/**
 *delete_nodeint_at_index- delete nodes
 *@head:pointer to head of linked list
 *@index:index of node
 *
 *
 *Return:1 if sucsess
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *temp;
	unsigned int i;

	temp = *head;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;

	}
	del = temp->next;
	temp->next = del->next;
	free(del);

	return (1);
}
