#include "lists.h"
/**
 *list_len-return lenght of linked list
 *
 *@h:thelinked list
 *
 *Return: lenght of linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
