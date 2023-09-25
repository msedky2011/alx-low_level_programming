#include "lists.h"
#include <stdio.h>
/**
 *print_listint - calculate number of nodes of listed link
 *
 *@h:pointer to head of linked list
 *
 *Return:number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);

}
