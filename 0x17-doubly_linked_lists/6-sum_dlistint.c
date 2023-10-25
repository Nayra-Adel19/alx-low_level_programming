#include "lists.h"

/**
 * sum_dlistint - return sum all data
 *@head: head
 *Return: sum data
 */

int sum_dlistint(dlistint_t *head)
{
	int sm;

	sm = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{

			head = head->prev;
		}

		while (head != NULL)
		{
			sm += head->n;

			head = head->next;
		}

	}	return (sm);

}
