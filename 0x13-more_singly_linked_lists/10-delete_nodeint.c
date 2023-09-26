#include "lists.h"
/**
 *delete_nodeint_at_index - delete nodes of listed link
 *
 *@head:pointer to head of linked list
 *
 *@index:index of node
 *Return:-1 failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (*head == NULL)
			return (-1);
		*head =(*head)->next;
	}
	temp_node = *head;
	*head = (*head)->next;
	free(temp_node);
	return (1);

}
