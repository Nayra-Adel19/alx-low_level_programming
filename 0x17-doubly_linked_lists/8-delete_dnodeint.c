#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node idx
 *@head: head
 *@index: index nnode
 *Return: (1)-> succeeded & (-1)-> failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int io;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;
	io = 0;

	while (h1 != NULL)
	{
		if (io == index)
		{
			if (io == 0)
			{
				*head = h1->next;

				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
				{
					h1->next->prev = h2;
				}
			}			free(h1);
			return (1);
		}		h2 = h1;
		h1 = h1->next;
		io++;
	}	return (-1);
}
