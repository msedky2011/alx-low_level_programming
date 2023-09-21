#include "lists.h"
#include <stdlib.h>

/**
 *free_list -function that frees a list_t list.
 *
 *@head:pointer to list_t list.
 *
 *Return:nothing.
 *
 */
void free_list(list_t *head)
{
	list_t *rm;

	while (head != NULL)

	{
		rm = head->next;
		free(head->str);
		free(head);
		head = rm;
	}
}
