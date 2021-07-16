#include "lists.h"

/**
 * find_listint_loop - find the first member of a linked list
 * @head: pointer
 * Return: number of nodes
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle = head;
	listint_t *rabbit = head;

	if (!head || !head->next)
		return (NULL);
	while (rabbit && rabbit->next)
	{
		turtle = turtle->next;
		rabbit = rabbit->next->next;
		if (turtle == rabbit)
		{
			turtle = head;
			while (turtle != rabbit)
			{
				turtle = turtle->next;
				rabbit = rabbit->next;
			}
			return (turtle);
		}
	}
	return (NULL);
}
