#include "search.h"

/**
 * linear_skip - skip linked list
 * @list: linked list with express lane
 * @value: value to be searched
 * Return: node with @value or NULL if @value does not exist in @list
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *cur;
	skiplist_t *pr;

	if (!list)
		return (NULL);

	cur = list->express;
	pr = list;
	while (cur)
	{
		printf("Value checked at index [%lu] = [%d]\n", cur->index, cur->n);
		if (cur->n >= value)
		{
			break;
		}
		pr = cur;
		if (!cur->express)
		{
			while (cur->next)
				cur = cur->next;
			break;
		}
		cur = cur->express;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       pr->index, cur->index);
	while (pr && pr->index <= cur->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", pr->index, pr->n);
		if (pr->n == value)
		{
			return (pr);
		}
		pr = pr->next;
	}
	return (NULL);
}
