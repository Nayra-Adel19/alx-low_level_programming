#include "lists.h"

/**
 * dlistint_len -> returns number of ele
 *@h: head
 *Return: number
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cnt;

	cnt = 0;

	if (h == NULL)
	{
		return (cnt);
	}

	while (h->prev != NULL)

		h = h->prev;

	while (h != NULL)
	{
		cnt++;
		h = h->next;

	}	return (cnt);

}
