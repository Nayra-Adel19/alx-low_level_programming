#include "lists.h"

/**
 * insert_dnodeint_at_index - insert nnode
 *@h: head
 *@idx: index
 *@n: value
 *Return: address nnode || (NULL) -> failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw;
	dlistint_t *head;
	unsigned int sa;

	nw = NULL;

	if (idx == 0)
		nw = add_dnodeint(h, n);
	else
	{
		head = *h;
		sa = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;

		while (head != NULL)
		{
			if (sa == idx)
			{
				if (head->next == NULL)
					nw = add_dnodeint_end(h, n);
				else
				{
					nw = malloc(sizeof(dlistint_t));

					if (nw != NULL)
					{
						nw->n = n;
						nw->next = head->next;
						nw->prev = head;
						head->next->prev = nw;
						head->next = nw;
					}
				}				break;
			}			head = head->next;
			sa++;
		}
	}	return (nw);
}
