#include "lists.h"

/**
 * add_dnodeint -> add nnode
 *@head: head
 *@n: value
 *Return: address new
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *sa;

	nw = malloc(sizeof(dlistint_t));

	if (nw == NULL)
	{

		return (NULL);

	}	nw->n = n;
	nw->prev = NULL;
	sa = *head;

	if (sa != NULL)
	{
		while (sa->prev != NULL)
			sa = sa->prev;
	}	nw->next = sa;

	if (sa != NULL)
	{

		sa->prev = nw;

	}	*head = nw;

	return (nw);

}
