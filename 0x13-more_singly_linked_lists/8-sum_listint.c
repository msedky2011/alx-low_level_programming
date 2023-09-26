#include "lists.h"
#include <stdio.h>
/**
 *sum_listint - sum all data of nodes of listed link
 *
 *@head:pointer to head of linked list
 *
 *Return:sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
