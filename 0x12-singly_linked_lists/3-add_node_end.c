#include "lists.h"
#include <string.h>

/**
 *add_node_end -function adds a new node at the beginning of a list_t list.
 *
 *@head: apointer to ahead of list_t
 *
 *@str:string to be added to list_t
 *
 *Return:address of new node
 *	NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *last;

	if (str == NULL)
		return (NULL);
	newnode	= malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newnode;
	}
	return (*head);

}
