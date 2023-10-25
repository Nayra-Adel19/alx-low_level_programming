#include "lists.h"

/**
 * get_dnodeint_at_index - return node
 *@head: head
 *@index: index
 *Return: nnode
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int iu;

	if (head == NULL)

		return (NULL);

	while (head->prev != NULL)
	{

		head = head->prev;

	}	iu = 0;

	while (head != NULL)
	{
		if (iu == index)
		{

			break;

		}		head = head->next;

		iu++;

	}	return (head);

}
