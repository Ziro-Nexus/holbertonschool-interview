#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - inserts a number into a linked list.
 * @head: of the list.
 * @number: to insert.
 * Return: the address of the new node, or NULL.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = NULL;
    listint_t *aux = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
    else if ((*head)->n > number)
	{
		*head = new;
		new->next = aux;
		return (new);
	}
	while (aux->next != NULL)
	{
		if (aux->next->n >= number)
		{
			new->next = aux->next;
			aux->next = new;

			return (new);
		}

		aux = aux->next;
	}
	aux->next = new;
	return (NULL);
}
