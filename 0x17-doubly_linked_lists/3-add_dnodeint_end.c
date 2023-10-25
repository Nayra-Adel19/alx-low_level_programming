#include "lists.h"

/**
 * add_dnodeint_end - add nnode
 *@head: head
 *@n: value
 *Return: address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *sa;
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));

	if (nw == NULL)
	{

		return (NULL);

	}	nw->n = n;

	nw->next = NULL;

	sa = *head;

	if (sa != NULL)
	{
		while (sa->next != NULL)
		{
			sa = sa->next;

		}		sa->next = nw;
	}

	else
	{

		*head = nw;

	}	nw->prev = sa;

	return (nw);

}
