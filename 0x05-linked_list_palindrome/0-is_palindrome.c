#include "lists.h"

/**
 * is_palindrome - checks if singly-linked list is a palindrome
 * @head: double pointer to head of list
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *ptr1 = NULL;
	listint_t *ptr2 = NULL;

	if (!head || !*head || !(*head)->next)
		return (1);

	ptr1 = *head;
	ptr2 = *head;

	while (ptr2->next && ptr2->next->next)
	{
		ptr2 = ptr2->next->next;
		ptr1 = ptr1->next;
	}
	ptr1 = ptr1->next;

	reverse(&ptr1);

	while ((*head)->next && ptr1->next)
	{
		if ((*head)->n != ptr1->n)
			return (0);
		*head = (*head)->next;
		ptr1 = ptr1->next;
	}
	if ((*head)->n != ptr1->n)
		return (0);
	return (1);
}

/**
 * reverse - reverses a singly-linked list
 * @head: head of list to reverse
 * Return: new head of list
 */
void reverse(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}
